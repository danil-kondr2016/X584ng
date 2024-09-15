/***************************************************************
 * Name:      x584ngApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Danila A. Kondratenko (dan.kondratenko2013@ya.ru)
 * Created:   2024-09-15
 * Copyright: Danila A. Kondratenko (https://danilakondr.ru)
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "x584ngApp.h"
#include "X584ngBase.h"

IMPLEMENT_APP(x584ngApp);

bool x584ngApp::OnInit()
{
    X584Main *frame = new X584Main(nullptr);

    frame->Show();

    return true;
}
