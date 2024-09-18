///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6-dirty)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include "BinaryInput16.h"
#include <wx/statusbr.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/toolbar.h>
#include <wx/dataview.h>
#include <wx/sizer.h>
#include <wx/treectrl.h>
#include <wx/button.h>
#include <wx/statbox.h>
#include <wx/panel.h>
#include <wx/textctrl.h>
#include <wx/stattext.h>
#include <wx/checkbox.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class X584MainBase
///////////////////////////////////////////////////////////////////////////////
class X584MainBase : public wxFrame
{
	private:

	protected:
		enum
		{
			ID_R0 = 6000,
			ID_R1,
			ID_R2,
			ID_R3,
			ID_R4,
			ID_R5,
			ID_R6,
			ID_R7,
			ID_WR,
			ID_XWR,
			ID_DO,
			ID_DA,
			ID_IFLAG_P0,
			ID_IFLAG_CCI,
			ID_IFLAG_INC,
			ID_IFLAG_PRI,
			ID_OFLAG_CO3,
			ID_OFLAG_WRSL,
			ID_OFLAG_CO2,
			ID_OFLAG_WRSR,
			ID_OFLAG_CO1,
			ID_OFLAG_XWRSL,
			ID_OFLAG_CO0,
			ID_OFLAG_XWRSR,
			ID_OFLAG_XWR0,
			ID_OFLAG_A15,
			ID_OFLAG_XWR3,
			ID_OFLAG_B15,
		};

		wxStatusBar* m_statusBar1;
		wxMenuBar* m_menubar1;
		wxMenu* m_fileMenu;
		wxMenu* m_menuEdit;
		wxMenu* m_menuDebug;
		wxMenu* m_menuHelp;
		wxToolBar* m_toolBar1;
		wxToolBarToolBase* m_toolNew;
		wxToolBarToolBase* m_toolOpen;
		wxToolBarToolBase* m_toolSave;
		wxToolBarToolBase* m_toolExit;
		wxToolBarToolBase* m_toolCut;
		wxToolBarToolBase* m_toolCopy;
		wxToolBarToolBase* m_toolPaste;
		wxToolBarToolBase* m_toolDelete;
		wxToolBarToolBase* m_toolRun;
		wxToolBarToolBase* m_toolStep;
		wxToolBarToolBase* m_toolRunToCursor;
		wxToolBarToolBase* m_toolBreak;
		wxToolBarToolBase* m_toolReset;
		wxToolBarToolBase* m_toolHelp;
		wxToolBarToolBase* m_toolAbout;
		wxDataViewListCtrl* m_codeListView;
		wxDataViewColumn* m_colImages;
		wxDataViewColumn* m_colCarryInput;
		wxDataViewColumn* m_colAddress;
		wxDataViewColumn* m_colInstruction;
		wxDataViewColumn* m_colComment;
		wxTreeCtrl* m_opcodeTree;
		wxPanel* m_panel1;
		wxButton* m_filterOpRegButton;
		wxButton* m_filterOpWRButton;
		wxButton* m_filterOpXWRButton;
		wxButton* m_filterOpInButton;
		wxButton* m_filterOpCarryButton;
		wxButton* m_filterResRegButton;
		wxButton* m_filterResWRButton;
		wxButton* m_filterResXWRButton;
		wxButton* m_filterResOutButton;
		wxButton* m_filterResWRXWRButton;
		wxPanel* m_panel2;
		wxTextCtrl* m_commandDescription;
		wxPanel* m_panel3;
		wxStaticText* m_staticText9;
		BinaryInput16* m_fieldR0;
		wxStaticText* m_staticText10;
		BinaryInput16* m_fieldR1;
		wxStaticText* m_staticText11;
		BinaryInput16* m_fieldR2;
		wxStaticText* m_staticText12;
		BinaryInput16* m_fieldR3;
		wxStaticText* m_staticText13;
		BinaryInput16* m_fieldR4;
		wxStaticText* m_staticText14;
		BinaryInput16* m_fieldR5;
		wxStaticText* m_staticText15;
		BinaryInput16* m_fieldR6;
		wxStaticText* m_staticText16;
		BinaryInput16* m_fieldR7;
		wxStaticText* m_staticText17;
		BinaryInput16* m_fieldWR;
		wxStaticText* m_staticText18;
		BinaryInput16* m_fieldXWR;
		wxPanel* m_panel4;
		wxStaticText* m_staticText19;
		BinaryInput16* m_fieldDO;
		wxStaticText* m_staticText20;
		BinaryInput16* m_fieldDA;
		wxPanel* m_panel5;
		wxCheckBox* m_checkBox1;
		wxCheckBox* m_checkBox2;
		wxCheckBox* m_checkBox3;
		wxCheckBox* m_checkBox4;
		wxCheckBox* m_checkBox17;
		wxCheckBox* m_checkBox18;
		wxCheckBox* m_checkBox19;
		wxCheckBox* m_checkBox20;
		wxCheckBox* m_checkBox21;
		wxCheckBox* m_checkBox22;
		wxCheckBox* m_checkBox23;
		wxCheckBox* m_checkBox24;
		wxCheckBox* m_checkBox25;
		wxCheckBox* m_checkBox27;
		wxCheckBox* m_checkBox28;
		wxCheckBox* m_checkBox26;

		// Virtual event handlers, override them in your derived class
		virtual void NewItemClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OpenItemClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void SaveItemClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void SaveAsItemClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void ExitItemClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void CutItemClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void CopyItemClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void PasteItemClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void DeleteItemClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void InsertItemClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void RunItemClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void StepItemClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void RunToCursorItemClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void BreakItemClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void ResetItemClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void HelpItemClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void AboutItemClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void StopItemClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void FilterOpItemClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void FilterResItemClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void RegMaskEditKeyPress( wxKeyEvent& event ) { event.Skip(); }
		virtual void RegMaskEditDblClick( wxMouseEvent& event ) { event.Skip(); }
		virtual void RegMaskEditChange( wxCommandEvent& event ) { event.Skip(); }


	public:

		X584MainBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("X584"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 950,920 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~X584MainBase();

};

