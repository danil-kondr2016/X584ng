#include "X584Main.h"
#include <wx/validate.h>


X584Main::X584Main(wxWindow *parent) : X584MainBase(parent)
{
    m_fieldR0->SetMask("#### #### #### ####");
    m_fieldR1->SetMask("#### #### #### ####");
    m_fieldR2->SetMask("#### #### #### ####");
    m_fieldR3->SetMask("#### #### #### ####");
    m_fieldR4->SetMask("#### #### #### ####");
    m_fieldR5->SetMask("#### #### #### ####");
    m_fieldR6->SetMask("#### #### #### ####");
    m_fieldR7->SetMask("#### #### #### ####");
    m_fieldWR->SetMask("#### #### #### ####");
    m_fieldXWR->SetMask("#### #### #### ####");
    m_fieldDO->SetMask("#### #### #### ####");
    m_fieldDA->SetMask("#### #### #### ####");

    m_fieldR0->SetValue("0000 0000 0000 0000");
    m_fieldR1->SetValue("0000 0000 0000 0000");
    m_fieldR2->SetValue("0000 0000 0000 0000");
    m_fieldR3->SetValue("0000 0000 0000 0000");
    m_fieldR4->SetValue("0000 0000 0000 0000");
    m_fieldR5->SetValue("0000 0000 0000 0000");
    m_fieldR6->SetValue("0000 0000 0000 0000");
    m_fieldR7->SetValue("0000 0000 0000 0000");
    m_fieldWR->SetValue("0000 0000 0000 0000");
    m_fieldXWR->SetValue("0000 0000 0000 0000");
    m_fieldDO->SetValue("0000 0000 0000 0000");
    m_fieldDA->SetValue("0000 0000 0000 0000");
}

X584Main::~X584Main()
{
    //dtor
}
