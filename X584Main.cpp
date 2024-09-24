#include "X584Main.h"
#include "wx/treebase.h"
#include <wx/validate.h>


X584Main::X584Main(wxWindow *parent) : X584MainBase(parent),
    CPU(16), OpFilter(0), ResFilter(-1)
{
    BuildTree(OpFilter, ResFilter);
}

X584Main::~X584Main()
{
    //dtor
}

/*
 * При портировании с Borland VCL на wxWidgets получилось практически
 * построчное соответствие этой функции оригиналу. Единственные отличия:
 *
 * - вместо непосредственно объектов элементов используются их
 *   идентификаторы типа `wxTreeItemId`, параметры их модифицируются
 *   через вызовы методов `wxTreeCtrl`;
 *
 * - корень может быть только один, для того, чтобы было несколько
 *   "корневых" элементов, нужно создать один, при этом его скрыть,
 *   а уж затем создавать его подэлементы, которые будут отображаться
 *   как "корневые".
 */ 
void X584Main::BuildTree(int OpFilter, int ResFilter)
{
	//создаем древовидный список инструкций
    char str[256];
    m_opcodeTree->DeleteAllItems();

    wxTreeItemId Root = m_opcodeTree->AddRoot("Root");
    for (int i = 0; i < INSTR_COUNT; i++) {
        //фильтруем по результату операции
        if (ResFilter != -1 && iSet[i].Result != ResFilter)
            continue;
        //фильтруем по списку операндов
        bool filter = false;
        for (int j = OP_WR; j <= OP_ONE; j++)
            if (OpFilter & 1 << j)
                if (j != OP_XWR || iSet[i].Result != OP_WRXWR) {
                    //ищем нужный операнд в списке
                    filter = true;
                    for (int k = 0; k < iSet[i].OpCount; k++)
                        if ((iSet[i].Operands[k] & F_MMASK) == j) {
                            filter = false;
                            break;
                        }
                    //не нашли - выходим
                    if (filter)
                        break;
                }
        if (filter)
            continue;
        //добавляем узел в корень дерева
        unsigned op = iSet[i].BitValue;
        CPU.Format(op, str, false, false, false);
        //исключаем дубликаты
        bool dup = false;
        if (m_opcodeTree->GetCount()) {
            //получаем первый корневой элемент и перебираем его соседей
            wxTreeItemIdValue Cookie;
            wxTreeItemId Node;

            Node = m_opcodeTree->GetFirstChild(Root, Cookie);
            do {
                if (m_opcodeTree->GetItemText(Node) == wxString::FromUTF8(str)) {
                    dup = true;
                    break;
                }
                Node = m_opcodeTree->GetNextSibling(Node);
            } while (Node && Node.IsOk());
        }
        if (dup)
            continue;
        //создаем корневой узел
        wxTreeItemId Node = m_opcodeTree->AppendItem(Root, wxString::FromUTF8(str));
        op |= CPU.FindOperand(i, OP_CARRY, op) ? ATTR_CUSED : 0;
        m_opcodeTree->SetItemData(Node, new X584CodeTreeOpCode(op));
        if (iSet[i].Type == TYPE_ALU) {
            m_opcodeTree->SetItemImage(Node, 0, wxTreeItemIcon_Normal);
            m_opcodeTree->SetItemImage(Node, 0, wxTreeItemIcon_Selected);
            for (int j = 0; j < 16; j++) {
                //операция АЛУ - перебираем все 16 операций
                op = iSet[i].BitValue | j << 5;
                op |= CPU.FindOperand(i, OP_CARRY, op) ? ATTR_CUSED : 0;
                CPU.Format(op, str, true, false, false);
                wxTreeItemId Child = m_opcodeTree->AppendItem(Node, wxString::FromUTF8(str));
                m_opcodeTree->SetItemData(Child, new X584CodeTreeOpCode(op));
                m_opcodeTree->SetItemImage(Child, 0, wxTreeItemIcon_Normal);
                m_opcodeTree->SetItemImage(Child, 0, wxTreeItemIcon_Selected);
                //если среди операндов - РОНы, продолжаем детализацию
                if (CPU.FindOperand(i, OP_REG, iSet[i].BitValue | j << 5) || iSet[i].Result == OP_REG) {
                    m_opcodeTree->SetItemImage(Child, 0, wxTreeItemIcon_Normal);
                    m_opcodeTree->SetItemImage(Child, 0, wxTreeItemIcon_Selected);
                    for (int k = 0; k < 8; k++) {
                        op = iSet[i].BitValue | j << 5 | k;
                        op |= CPU.FindOperand(i, OP_CARRY, op) ? ATTR_CUSED : 0;
                        CPU.Format(op, str, true, true, false);
                        wxTreeItemId Item = m_opcodeTree->AppendItem(Child, wxString::FromUTF8(str));
                        m_opcodeTree->SetItemData(Item, new X584CodeTreeOpCode(op));
                        m_opcodeTree->SetItemImage(Item, 2, wxTreeItemIcon_Normal);
                        m_opcodeTree->SetItemImage(Item, 2, wxTreeItemIcon_Selected);
                    }
                } else {
                    m_opcodeTree->SetItemImage(Child, 2, wxTreeItemIcon_Normal);
                    m_opcodeTree->SetItemImage(Child, 2, wxTreeItemIcon_Selected);
                }
            }
        } else
            //детализируем инструкцию, если в списке операндов есть РОНы
            if (CPU.FindOperand(i, OP_REG, iSet[i].BitValue) || iSet[i].Result == OP_REG)
                for (int j = 0; j < 8; j++) {
                    op = iSet[i].BitValue | j;
                    op |= CPU.FindOperand(i, OP_CARRY, op) ? ATTR_CUSED : 0;
                    CPU.Format(op, str, true, true, false);
                    wxTreeItemId Item = m_opcodeTree->AppendItem(Node, wxString::FromUTF8(str));
                    m_opcodeTree->SetItemData(Item, new X584CodeTreeOpCode(op));
                    m_opcodeTree->SetItemImage(Item, 2, wxTreeItemIcon_Normal);
                    m_opcodeTree->SetItemImage(Item, 2, wxTreeItemIcon_Selected);
                }
            else {
                m_opcodeTree->SetItemImage(Node, 2, wxTreeItemIcon_Normal);
                m_opcodeTree->SetItemImage(Node, 2, wxTreeItemIcon_Selected);
            }
    }
}

void X584Main::FilterOpItemClick(wxCommandEvent &event)
{
    int filter;
    int id = event.GetId();
    switch (id) {
    case ID_OP_REG:
        filter = 1<<2;
        break;
    case ID_OP_WR:
        filter = 1<<0;
        break;
    case ID_OP_XWR:
        filter = 1<<1;
        break;
    case ID_OP_DI:
        filter = 1<<3;
        break;
    case ID_OP_CI:
        filter = 1<<5;
        break;
    default:
        event.Skip();
        return;
    }

    OpFilter ^= filter;

    wxWindow *wnd;
    wxButton *btn;

    wnd = wxWindow::FindWindowById(id, this);
    btn = dynamic_cast<wxButton *>(wnd);

    wxFont font = btn->GetFont();
    font.SetWeight(OpFilter&filter ? wxFontWeight::wxFONTWEIGHT_BOLD : wxFontWeight::wxFONTWEIGHT_MEDIUM);
    btn->SetFont(font);
    BuildTree(OpFilter, ResFilter);
}

void X584Main::FilterResItemClick(wxCommandEvent &event)
{
    int tag;
    int id = event.GetId();
    wxButton *btn = dynamic_cast<wxButton *>(wxWindow::FindWindowById(id, this));
    
    switch (id) {
    case ID_RES_REG:
        tag = 2;
        break;
    case ID_RES_WR:
        tag = 0;
        break;
    case ID_RES_XWR:
        tag = 1;
        break;
    case ID_RES_DO:
        tag = 4;
        break;
    case ID_RES_WR_XWR:
        tag = 6;
        break;
    default:
        event.Skip();
        return;
    }

    if (ResFilter == tag) {
        ResFilter = -1;
        
        wxFont font = btn->GetFont();
        font.SetWeight(wxFontWeight::wxFONTWEIGHT_MEDIUM);
        btn->SetFont(font);
        
        BuildTree(OpFilter, ResFilter);
        ResButton = nullptr;
    } else {
        if (ResButton) {
            wxFont font = ResButton->GetFont();
            font.SetWeight(wxFontWeight::wxFONTWEIGHT_MEDIUM);
            ResButton->SetFont(font);
        }

        ResFilter = tag;
        
        wxFont font = btn->GetFont();
        font.SetWeight(wxFontWeight::wxFONTWEIGHT_BOLD);
        btn->SetFont(font);

        BuildTree(OpFilter, ResFilter);
        ResButton = btn;
    }
}

void X584Main::CodeTreeOnSelChanged(wxTreeEvent &event)
{
    event.Skip();
    
    // получаем код микроинструкции
    wxTreeItemId Item = event.GetItem();
    wxTreeItemData *Data = m_opcodeTree->GetItemData(Item);
    X584CodeTreeOpCode *Opcode = dynamic_cast<X584CodeTreeOpCode *>(Data);
    // выводим код микроинструкции
    unsigned val = Opcode->opcode & ~ATTR_CUSED;

    m_commandDescription->Clear();    
    if (!m_opcodeTree->GetLastChild(Item).IsOk()) {
        wxString MicroInstruction(L"Код микроинструкции: ");
        for (int i = 8; i >= 0; i--)
            MicroInstruction += val & 1<<i ? '1' : '0';
        m_commandDescription->AppendText(MicroInstruction);
        m_commandDescription->AppendText("\n");
    }
    // получаем элемент верхнего уровня
    wxTreeItemId TrueRoot = m_opcodeTree->GetRootItem();
    wxTreeItemId Root = Item;
    while (Root.IsOk() && m_opcodeTree->GetItemParent(Root) != TrueRoot)
        Root = m_opcodeTree->GetItemParent(Root);
    if (!Root.IsOk()) {
        m_commandDescription->Clear();
        return;
    }
    Data = m_opcodeTree->GetItemData(Root);
    Opcode = dynamic_cast<X584CodeTreeOpCode *>(Data);
    val = Opcode->opcode & ~ATTR_CUSED;
    // ищем сопоставленный раздел справки
    for (int i = 0; i < INSTR_COUNT; i++) {
        if (val == iSet[i].BitValue) {
            m_commandDescription->AppendText(wxString::FromUTF8(iSet[i].Help));
            return;
        }
    }

    m_commandDescription->AppendText(wxString(L"Информация по текущей микроинструкции"));    
}
