#ifndef BINARYINPUT16_H
#define BINARYINPUT16_H

#include <wx/textctrl.h>
#include <wx/msgdlg.h>

wxDECLARE_EVENT(BI_EVT_INTEGER_CHANGE, wxCommandEvent);

class BinaryInput16 : public wxTextCtrl
{
    public:
        BinaryInput16();
        BinaryInput16(wxWindow *parent,
                      wxWindowID id=wxID_ANY,
                      const wxString &value=wxT("0000 0000 0000 0000"),
                      const wxPoint &pos=wxDefaultPosition,
                      const wxSize &size=wxDefaultSize,
                      long style=0,
                      const wxValidator &validator=wxDefaultValidator,
                      const wxString &name=wxTextCtrlNameStr);
        virtual ~BinaryInput16();

        unsigned short GetIntegerValue() const;
        void SetIntegerValue(unsigned short value);

    protected:

    private:
        unsigned short value;
        bool isSelectRight = false;

        /* Events */
        void OnKeyDown(wxKeyEvent &event);
        void OnLeftDown(wxMouseEvent &event);
        void OnLeftUp(wxMouseEvent &event);

        /* Functions */
        void InsertChar(int kc);
        void UpdateStringValue();
        void UpdateIntegerValue();
        void MoveLeft();
        void MoveLeft(wxKeyEvent &event);
        void MoveRight();
        void MoveRight(wxKeyEvent &event);
        void MoveHome();
        void MoveEnd();
        void Backspace();
        void Delete();
};

#endif // BINARYINPUT16_H
