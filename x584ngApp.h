/***************************************************************
 * Name:      x584ngApp.h
 * Purpose:   Defines Application Class
 * Author:    Danila A. Kondratenko (dan.kondratenko2013@ya.ru)
 * Created:   2024-09-15
 * Copyright: Danila A. Kondratenko (https://danilakondr.ru)
 * License:
 **************************************************************/

#ifndef X584NGAPP_H
#define X584NGAPP_H

#include <wx/app.h>
#include "X584Main.h"

class x584ngApp : public wxApp
{
    public:
        virtual bool OnInit();
    private:
        X584Main *mainFrame;
};

#endif // X584NGAPP_H
