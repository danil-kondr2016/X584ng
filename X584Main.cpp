#include "X584Main.h"
#include "wx/treebase.h"
#include <wx/validate.h>


X584Main::X584Main(wxWindow *parent) : X584MainBase(parent), CPU(16)
{
    BuildTree(0, -1);
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
    m_opcodeTree->SetItemData(Root, new X584CodeTreeOpCode(NOP));
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
