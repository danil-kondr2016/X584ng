#ifndef X584MAIN_H
#define X584MAIN_H

#include "X584ngBase.h"
#include "K584core.h"
#include <wx/treebase.h>

class X584Main : public X584MainBase
{
    public:
        X584Main(wxWindow *parent);
        virtual ~X584Main();

    protected:

    private:
        K584 CPU;

        void BuildTree(int OpFilter, int ResFilter);
        
};

class X584CodeTreeOpCode : public wxTreeItemData
{
    public:
        unsigned opcode;
        X584CodeTreeOpCode(unsigned opcode): opcode(opcode) {}
};

#endif // X584MAIN_H
