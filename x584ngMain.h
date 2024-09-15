/***************************************************************
 * Name:      x584ngMain.h
 * Purpose:   Defines Application Frame
 * Author:    Danila A. Kondratenko (dan.kondratenko2013@ya.ru)
 * Created:   2024-09-15
 * Copyright: Danila A. Kondratenko (https://danilakondr.ru)
 * License:
 **************************************************************/

#ifndef X584NGMAIN_H
#define X584NGMAIN_H

#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

#include "x584ngApp.h"

class x584ngFrame: public wxFrame
{
    public:
        x584ngFrame(wxFrame *frame, const wxString& title);
        ~x584ngFrame();
    private:
        enum
        {
            idMenuQuit = 1000,
            idMenuAbout
        };
        void OnClose(wxCloseEvent& event);
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        DECLARE_EVENT_TABLE()
};


#endif // X584NGMAIN_H
