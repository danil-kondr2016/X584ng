#include "BinaryInput16.h"

#include <wx/msgdlg.h>

wxDEFINE_EVENT(BI_EVT_INTEGER_CHANGE, wxCommandEvent);

BinaryInput16::BinaryInput16() : BinaryInput16(nullptr)
{

}

BinaryInput16::BinaryInput16(
    wxWindow *parent,
    wxWindowID id,
    const wxString &value,
    const wxPoint &pos,
    const wxSize &size,
    long style,
    const wxValidator &validator,
    const wxString &name) :
        wxTextCtrl(parent, id, value, pos, size, style, validator, name)
{
    Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(BinaryInput16::OnKeyDown), NULL, this);
    Connect(wxEVT_LEFT_DOWN, wxMouseEventHandler(BinaryInput16::OnLeftDown), NULL, this);
    Connect(wxEVT_LEFT_UP, wxMouseEventHandler(BinaryInput16::OnLeftUp), NULL, this);
    this->value = 0;
    UpdateStringValue();
    SetSelection(0, 1);
}

void BinaryInput16::OnLeftDown(wxMouseEvent &event)
{
    if (!event.Dragging()) {
        long from, to;
        GetSelection(&from, &to);

        if (to - from > 1) {
            SetSelection(from, from + 1);
        }
    }
    event.Skip();
}

void BinaryInput16::OnLeftUp(wxMouseEvent &event)
{
    long from, to;
    GetSelection(&from, &to);

    long length = GetValue().Length();

    if (to == from) {
        while (from < length && GetValue()[from] == ' ') {
            from++;
        }
        if (from == length)
            SetSelection(length, length);
        else
            SetSelection(from, from + 1);
    }
    event.Skip();
}

void BinaryInput16::UpdateStringValue()
{
    wxString result("");

    for (int i = 15; i >= 0; i--) {
        result << ((value & (1 << i)) ? '1' : '0');
        if (i%4 == 0 && i > 0)
            result << " ";
    }

    SetValue(result);
}

void BinaryInput16::UpdateIntegerValue()
{
    unsigned short newValue = 0;
    wxString strValue = GetValue();

    for (size_t i = 0; i < strValue.Length(); i++) {
        switch (strValue[i].GetValue()) {
        case ' ':
            continue;
        case '0':
            newValue <<= 1;
            break;
        case '1':
            newValue = (newValue << 1) | 1;
            break;
        default:
            return;
        }
    }

    this->value = newValue;

    wxCommandEvent event(BI_EVT_INTEGER_CHANGE);
    event.SetInt((unsigned int)this->value);
    wxPostEvent(this, event);
}

void BinaryInput16::InsertChar(int kc)
{
    long from, to;
    GetSelection(&from, &to);

    long length = GetValue().Length();
    if (to == from) {
        if (from == length)
            return;
        to = from + 1;
        SetSelection(from, to);
    }

    if (GetValue()[from] == ' ') {
        if (to - from > 1) {
            from++;
            SetSelection(from, to);
        } else {
            from++;
            to = from + 1;
            SetSelection(from, to);
        }
    }

    if (to - from > 1) {
        to = from + 1;
        SetSelection(from, to);
    }

    switch (kc) {
    case '0':
    case '1':
        Replace(from, to, wxString((char)kc));
        break;
    default:;
    }

    GetSelection(&from, &to);
    to = from + 1;
    SetSelection(from, to);
    if (GetValue()[from] == ' ')
        MoveRight();
}

void BinaryInput16::MoveRight()
{
    long from, to;
    GetSelection(&from, &to);

    long length = GetValue().Length();

    if (to - from > 1) {
        from = to - 1;
    } else {
        while (from < length) {
            from++;
            if (from == length) {
                to = length;
                break;
            } else {
                to++;
                if (to > length)
                    return;
            }

            if (GetValue()[to-1] != ' ') {
                break;
            }
        }

        if (to == from && from != length)
            to = from + 1;
    }

    SetSelection(from, to);
}

void BinaryInput16::MoveRight(wxKeyEvent &event)
{
    long from, to;
    GetSelection(&from, &to);

    long length = GetValue().Length();

    if (event.ControlDown()) {
        while (from < length && GetValue()[from] != ' ')
            from++;
        while (from < length && GetValue()[from] == ' ')
            from++;
        if (from < length) {
            SetSelection(from, from + 1);
        }
    }
    else if (event.ShiftDown()) {
        if (!isSelectRight && to - from <= 1) {
            this->isSelectRight = true;
        }
        if (this->isSelectRight) {
            to++;
            SetSelection(from, to);
        }
        else {
            from++;
            if (to == from) {
                this->isSelectRight = true;
                while (from < length && GetValue()[from] == ' ')
                    from++;
                to = from + 1;
            }
            SetSelection(from, to);
        }
    }
    else {
        MoveRight();
    }
}

void BinaryInput16::MoveLeft()
{
    long from, to;
    GetSelection(&from, &to);

    if (to - from > 1) {
        to = from + 1;
    } else {
        while (from >= 0 && to >= 0) {
            from--;
            if (from < 0)
                return;
            to--;

            if (GetValue()[from] != ' ')
                break;
        }

        if (to == from)
            to = from + 1;
    }

    SetSelection(from, to);
}

void BinaryInput16::MoveLeft(wxKeyEvent &event)
{
    long from, to;
    GetSelection(&from, &to);

    if (event.ControlDown()) {
        while (from >= 0 && GetValue()[from] != ' ')
            from--;
        while (from >=0  && GetValue()[from] == ' ')
            from--;

        SetSelection(from, from + 1);
    }
    else if (event.ShiftDown()) {
        if (this->isSelectRight) {
            to--;
            if (to == from) {
                this->isSelectRight = false;
                if (GetValue()[to - 1] == ' ') {
                    while (to > 0 && GetValue()[to - 1] == ' ')
                        to--;
                    from = to - 1;
                }
                else {
                    to++;
                    from = to - 1;
                }
                from--;
            }
        }
        else {
            from--;
            if (from < 0)
                from = 0;
        }
        SetSelection(from, to);
    }
    else {
        MoveLeft();
    }
}

void BinaryInput16::Delete()
{
    long from, to;
    GetSelection(&from, &to);

    for (long i = from; i < to; i++) {
        if (GetValue()[i] == ' ')
            continue;
        Replace(i, i+1, "0");
    }

    SetSelection(from, from + 1);
}

void BinaryInput16::Backspace()
{
    long from, to;
    GetSelection(&from, &to);

    long length = GetValue().Length();
    if (to == from) {
        if (from >= length) {
            from = length - 1;
            to = length;
        } else {
            to = from + 1;
        }
    }

    if (to - from == 1)
        MoveLeft();
    Delete();
}

void BinaryInput16::MoveHome()
{
    SetSelection(0, 1);
}

void BinaryInput16::MoveEnd()
{
    long length = GetValue().Length();
    SetSelection(length, length);
}

void BinaryInput16::OnKeyDown(wxKeyEvent &event)
{
    event.Skip(false);
    int kc = event.GetKeyCode();

    switch (kc) {
    case WXK_LEFT:
        MoveLeft(event);
        break;
    case WXK_RIGHT:
        MoveRight(event);
        break;
    case WXK_HOME:
    case WXK_NUMPAD_HOME:
        MoveHome();
        break;
    case WXK_END:
    case WXK_NUMPAD_END:
        MoveEnd();
        break;
    case '0':
    case '1':
        InsertChar(kc);
        UpdateIntegerValue();
        break;
    case WXK_NUMPAD0:
    case WXK_NUMPAD1:
        if (wxGetKeyState(WXK_NUMLOCK)) {
            if (kc == WXK_NUMPAD0)
                InsertChar('0');
            else if (kc == WXK_NUMPAD1)
                InsertChar('1');
        }
        UpdateIntegerValue();
        break;
    case WXK_BACK:
        Backspace();
        UpdateIntegerValue();
        break;
    case WXK_DELETE:
        Delete();
        UpdateIntegerValue();
        break;
    }
}

void BinaryInput16::SetIntegerValue(unsigned short value)
{
    this->value = value;
    UpdateStringValue();

    wxCommandEvent event(BI_EVT_INTEGER_CHANGE);
    event.SetInt((unsigned int)this->value);
    wxPostEvent(this, event);
}

unsigned short BinaryInput16::GetIntegerValue() const
{
    return this->value;
}

BinaryInput16::~BinaryInput16()
{
    //dtor
}
