///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6-dirty)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "X584ngBase.h"

#include "res/about.bmp.h"
#include "res/break.bmp.h"
#include "res/copy.bmp.h"
#include "res/cut.bmp.h"
#include "res/delete.bmp.h"
#include "res/exit.bmp.h"
#include "res/help.bmp.h"
#include "res/new.bmp.h"
#include "res/open.bmp.h"
#include "res/paste.bmp.h"
#include "res/run.bmp.h"
#include "res/save.bmp.h"
#include "res/step.bmp.h"
#include "res/stop.bmp.h"
#include "res/until.bmp.h"

///////////////////////////////////////////////////////////////////////////

X584MainBase::X584MainBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( -1,-1 ), wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	m_statusBar1 = this->CreateStatusBar( 5, wxSTB_SIZEGRIP, wxID_ANY );
	m_menubar1 = new wxMenuBar( 0 );
	m_fileMenu = new wxMenu();
	wxMenuItem* m_menuItemNew;
	m_menuItemNew = new wxMenuItem( m_fileMenu, wxID_NEW, wxString( wxT("Новый") ) + wxT('\t') + wxT("Ctrl+N"), wxEmptyString, wxITEM_NORMAL );
	#ifdef __WXMSW__
	m_menuItemNew->SetBitmaps( new_bmp_to_wx_bitmap() );
	#elif (defined( __WXGTK__ ) || defined( __WXOSX__ ))
	m_menuItemNew->SetBitmap( new_bmp_to_wx_bitmap() );
	#endif
	m_fileMenu->Append( m_menuItemNew );

	wxMenuItem* m_menuItemOpen;
	m_menuItemOpen = new wxMenuItem( m_fileMenu, wxID_OPEN, wxString( wxT("Открыть...") ) + wxT('\t') + wxT("Ctrl+O"), wxEmptyString, wxITEM_NORMAL );
	#ifdef __WXMSW__
	m_menuItemOpen->SetBitmaps( open_bmp_to_wx_bitmap() );
	#elif (defined( __WXGTK__ ) || defined( __WXOSX__ ))
	m_menuItemOpen->SetBitmap( open_bmp_to_wx_bitmap() );
	#endif
	m_fileMenu->Append( m_menuItemOpen );

	wxMenuItem* m_menuItemSave;
	m_menuItemSave = new wxMenuItem( m_fileMenu, wxID_SAVE, wxString( wxT("Сохранить") ) + wxT('\t') + wxT("Ctrl+S"), wxEmptyString, wxITEM_NORMAL );
	#ifdef __WXMSW__
	m_menuItemSave->SetBitmaps( save_bmp_to_wx_bitmap() );
	#elif (defined( __WXGTK__ ) || defined( __WXOSX__ ))
	m_menuItemSave->SetBitmap( save_bmp_to_wx_bitmap() );
	#endif
	m_fileMenu->Append( m_menuItemSave );

	wxMenuItem* m_menuItemSaveAs;
	m_menuItemSaveAs = new wxMenuItem( m_fileMenu, wxID_SAVEAS, wxString( wxT("Сохранить как...") ) , wxEmptyString, wxITEM_NORMAL );
	#ifdef __WXMSW__
	m_menuItemSaveAs->SetBitmaps( save_bmp_to_wx_bitmap() );
	#elif (defined( __WXGTK__ ) || defined( __WXOSX__ ))
	m_menuItemSaveAs->SetBitmap( save_bmp_to_wx_bitmap() );
	#endif
	m_fileMenu->Append( m_menuItemSaveAs );

	m_fileMenu->AppendSeparator();

	wxMenuItem* m_menuItemExit;
	m_menuItemExit = new wxMenuItem( m_fileMenu, wxID_EXIT, wxString( wxT("Выход") ) , wxEmptyString, wxITEM_NORMAL );
	#ifdef __WXMSW__
	m_menuItemExit->SetBitmaps( exit_bmp_to_wx_bitmap() );
	#elif (defined( __WXGTK__ ) || defined( __WXOSX__ ))
	m_menuItemExit->SetBitmap( exit_bmp_to_wx_bitmap() );
	#endif
	m_fileMenu->Append( m_menuItemExit );

	m_menubar1->Append( m_fileMenu, wxT("Файл") );

	m_menuEdit = new wxMenu();
	wxMenuItem* m_menuItemCut;
	m_menuItemCut = new wxMenuItem( m_menuEdit, wxID_CUT, wxString( wxT("Вырезать") ) + wxT('\t') + wxT("Ctrl+X"), wxEmptyString, wxITEM_NORMAL );
	#ifdef __WXMSW__
	m_menuItemCut->SetBitmaps( cut_bmp_to_wx_bitmap() );
	#elif (defined( __WXGTK__ ) || defined( __WXOSX__ ))
	m_menuItemCut->SetBitmap( cut_bmp_to_wx_bitmap() );
	#endif
	m_menuEdit->Append( m_menuItemCut );

	wxMenuItem* m_menuItemCopy;
	m_menuItemCopy = new wxMenuItem( m_menuEdit, wxID_COPY, wxString( wxT("Копировать") ) + wxT('\t') + wxT("Ctrl+C"), wxEmptyString, wxITEM_NORMAL );
	#ifdef __WXMSW__
	m_menuItemCopy->SetBitmaps( copy_bmp_to_wx_bitmap() );
	#elif (defined( __WXGTK__ ) || defined( __WXOSX__ ))
	m_menuItemCopy->SetBitmap( copy_bmp_to_wx_bitmap() );
	#endif
	m_menuEdit->Append( m_menuItemCopy );

	wxMenuItem* m_menuItemPaste;
	m_menuItemPaste = new wxMenuItem( m_menuEdit, wxID_PASTE, wxString( wxT("Вставить") ) + wxT('\t') + wxT("Ctrl+V"), wxEmptyString, wxITEM_NORMAL );
	#ifdef __WXMSW__
	m_menuItemPaste->SetBitmaps( paste_bmp_to_wx_bitmap() );
	#elif (defined( __WXGTK__ ) || defined( __WXOSX__ ))
	m_menuItemPaste->SetBitmap( paste_bmp_to_wx_bitmap() );
	#endif
	m_menuEdit->Append( m_menuItemPaste );

	wxMenuItem* m_menuItemDelete;
	m_menuItemDelete = new wxMenuItem( m_menuEdit, wxID_DELETE, wxString( wxT("Удалить") ) , wxEmptyString, wxITEM_NORMAL );
	#ifdef __WXMSW__
	m_menuItemDelete->SetBitmaps( delete_bmp_to_wx_bitmap() );
	#elif (defined( __WXGTK__ ) || defined( __WXOSX__ ))
	m_menuItemDelete->SetBitmap( delete_bmp_to_wx_bitmap() );
	#endif
	m_menuEdit->Append( m_menuItemDelete );

	m_menuEdit->AppendSeparator();

	wxMenuItem* m_menuItemInsert;
	m_menuItemInsert = new wxMenuItem( m_menuEdit, wxID_ANY, wxString( wxT("Режим вставки") ) , wxEmptyString, wxITEM_CHECK );
	m_menuEdit->Append( m_menuItemInsert );

	m_menubar1->Append( m_menuEdit, wxT("Правка") );

	m_menuDebug = new wxMenu();
	wxMenuItem* m_menuItemRun;
	m_menuItemRun = new wxMenuItem( m_menuDebug, wxID_ANY, wxString( wxT("Пуск") ) + wxT('\t') + wxT("F9"), wxEmptyString, wxITEM_NORMAL );
	#ifdef __WXMSW__
	m_menuItemRun->SetBitmaps( run_bmp_to_wx_bitmap() );
	#elif (defined( __WXGTK__ ) || defined( __WXOSX__ ))
	m_menuItemRun->SetBitmap( run_bmp_to_wx_bitmap() );
	#endif
	m_menuDebug->Append( m_menuItemRun );

	wxMenuItem* m_menuItemStep;
	m_menuItemStep = new wxMenuItem( m_menuDebug, wxID_ANY, wxString( wxT("Шаг") ) + wxT('\t') + wxT("F7"), wxEmptyString, wxITEM_NORMAL );
	#ifdef __WXMSW__
	m_menuItemStep->SetBitmaps( step_bmp_to_wx_bitmap() );
	#elif (defined( __WXGTK__ ) || defined( __WXOSX__ ))
	m_menuItemStep->SetBitmap( step_bmp_to_wx_bitmap() );
	#endif
	m_menuDebug->Append( m_menuItemStep );

	wxMenuItem* m_menuItemRunToCursor;
	m_menuItemRunToCursor = new wxMenuItem( m_menuDebug, wxID_ANY, wxString( wxT("Пуск до курсора") ) + wxT('\t') + wxT("F4"), wxEmptyString, wxITEM_NORMAL );
	#ifdef __WXMSW__
	m_menuItemRunToCursor->SetBitmaps( until_bmp_to_wx_bitmap() );
	#elif (defined( __WXGTK__ ) || defined( __WXOSX__ ))
	m_menuItemRunToCursor->SetBitmap( until_bmp_to_wx_bitmap() );
	#endif
	m_menuDebug->Append( m_menuItemRunToCursor );

	m_menuDebug->AppendSeparator();

	wxMenuItem* m_menuItemBreak;
	m_menuItemBreak = new wxMenuItem( m_menuDebug, wxID_ANY, wxString( wxT("Пауза") ) , wxEmptyString, wxITEM_NORMAL );
	#ifdef __WXMSW__
	m_menuItemBreak->SetBitmaps( break_bmp_to_wx_bitmap() );
	#elif (defined( __WXGTK__ ) || defined( __WXOSX__ ))
	m_menuItemBreak->SetBitmap( break_bmp_to_wx_bitmap() );
	#endif
	m_menuDebug->Append( m_menuItemBreak );

	wxMenuItem* m_menuItemReset;
	m_menuItemReset = new wxMenuItem( m_menuDebug, wxID_ANY, wxString( wxT("Сброс") ) , wxEmptyString, wxITEM_NORMAL );
	#ifdef __WXMSW__
	m_menuItemReset->SetBitmaps( stop_bmp_to_wx_bitmap() );
	#elif (defined( __WXGTK__ ) || defined( __WXOSX__ ))
	m_menuItemReset->SetBitmap( stop_bmp_to_wx_bitmap() );
	#endif
	m_menuDebug->Append( m_menuItemReset );

	m_menubar1->Append( m_menuDebug, wxT("Отладка") );

	m_menuHelp = new wxMenu();
	wxMenuItem* m_menuItemHelp;
	m_menuItemHelp = new wxMenuItem( m_menuHelp, wxID_HELP, wxString( wxT("Справка") ) + wxT('\t') + wxT("F1"), wxEmptyString, wxITEM_NORMAL );
	#ifdef __WXMSW__
	m_menuItemHelp->SetBitmaps( wxBitmap( wxT("icons/help.bmp"), wxBITMAP_TYPE_ANY ) );
	#elif (defined( __WXGTK__ ) || defined( __WXOSX__ ))
	m_menuItemHelp->SetBitmap( wxBitmap( wxT("icons/help.bmp"), wxBITMAP_TYPE_ANY ) );
	#endif
	m_menuHelp->Append( m_menuItemHelp );

	m_menuHelp->AppendSeparator();

	wxMenuItem* m_menuItemAbout;
	m_menuItemAbout = new wxMenuItem( m_menuHelp, wxID_ABOUT, wxString( wxT("О программе...") ) , wxEmptyString, wxITEM_NORMAL );
	#ifdef __WXMSW__
	m_menuItemAbout->SetBitmaps( wxBitmap( wxT("icons/about.bmp"), wxBITMAP_TYPE_ANY ) );
	#elif (defined( __WXGTK__ ) || defined( __WXOSX__ ))
	m_menuItemAbout->SetBitmap( wxBitmap( wxT("icons/about.bmp"), wxBITMAP_TYPE_ANY ) );
	#endif
	m_menuHelp->Append( m_menuItemAbout );

	m_menubar1->Append( m_menuHelp, wxT("Помощь") );

	this->SetMenuBar( m_menubar1 );

	m_toolBar1 = this->CreateToolBar( wxTB_HORIZONTAL, wxID_ANY );
	m_toolNew = m_toolBar1->AddTool( wxID_NEW, wxT("tool"), new_bmp_to_wx_bitmap(), wxNullBitmap, wxITEM_NORMAL, wxT("Создать новый файл"), wxT("Создать новый файл"), NULL );

	m_toolOpen = m_toolBar1->AddTool( wxID_OPEN, wxT("tool"), open_bmp_to_wx_bitmap(), wxNullBitmap, wxITEM_NORMAL, wxT("Открыть файл"), wxT("Открыть файл"), NULL );

	m_toolSave = m_toolBar1->AddTool( wxID_SAVE, wxT("tool"), save_bmp_to_wx_bitmap(), wxNullBitmap, wxITEM_NORMAL, wxT("Сохранить файл"), wxT("Сохранить файл"), NULL );

	m_toolExit = m_toolBar1->AddTool( wxID_EXIT, wxT("tool"), exit_bmp_to_wx_bitmap(), wxNullBitmap, wxITEM_NORMAL, wxT("Выход"), wxT("Выход"), NULL );

	m_toolBar1->AddSeparator();

	m_toolCut = m_toolBar1->AddTool( wxID_CUT, wxT("tool"), cut_bmp_to_wx_bitmap(), wxNullBitmap, wxITEM_NORMAL, wxT("Вырезать выделенный фрагмент"), wxT("Вырезать выделенный фрагмент"), NULL );

	m_toolCopy = m_toolBar1->AddTool( wxID_COPY, wxT("tool"), copy_bmp_to_wx_bitmap(), wxNullBitmap, wxITEM_NORMAL, wxT("Копировать выделенный фрагмент"), wxT("Копировать выделенный фрагмент"), NULL );

	m_toolPaste = m_toolBar1->AddTool( wxID_PASTE, wxT("tool"), paste_bmp_to_wx_bitmap(), wxNullBitmap, wxITEM_NORMAL, wxT("Вставить фрагмент"), wxT("Вставить фрагмент"), NULL );

	m_toolDelete = m_toolBar1->AddTool( wxID_DELETE, wxT("tool"), delete_bmp_to_wx_bitmap(), wxNullBitmap, wxITEM_NORMAL, wxT("Удалить выделенный фрагмент"), wxT("Удалить выделенный фрагмент"), NULL );

	m_toolBar1->AddSeparator();

	m_toolRun = m_toolBar1->AddTool( wxID_ANY, wxT("tool"), run_bmp_to_wx_bitmap(), wxNullBitmap, wxITEM_NORMAL, wxT("Запустить программу"), wxT("Запустить программу"), NULL );

	m_toolStep = m_toolBar1->AddTool( wxID_ANY, wxT("tool"), wxBitmap( wxT("icons/step.bmp"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxT("Выполнить текущую микроинструкцию"), wxT("Выполнить текущую микроинструкцию"), NULL );

	m_toolRunToCursor = m_toolBar1->AddTool( wxID_ANY, wxT("tool"), until_bmp_to_wx_bitmap(), wxNullBitmap, wxITEM_NORMAL, wxT("Выполнить программу до курсора"), wxT("Выполнить программу до курсора"), NULL );

	m_toolBar1->AddSeparator();

	m_toolBreak = m_toolBar1->AddTool( wxID_ANY, wxT("tool"), wxBitmap( wxT("icons/break.bmp"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxT("Прервать выполнение программы"), wxT("Прервать выполнение программы"), NULL );

	m_toolReset = m_toolBar1->AddTool( wxID_ANY, wxT("tool"), stop_bmp_to_wx_bitmap(), wxNullBitmap, wxITEM_NORMAL, wxT("Сбросить программу"), wxT("Сбросить программу"), NULL );

	m_toolBar1->AddSeparator();

	m_toolHelp = m_toolBar1->AddTool( wxID_HELP, wxT("tool"), help_bmp_to_wx_bitmap(), wxNullBitmap, wxITEM_NORMAL, wxT("Открыть файл справки"), wxT("Открыть файл справки"), NULL );

	m_toolAbout = m_toolBar1->AddTool( wxID_ABOUT, wxT("tool"), about_bmp_to_wx_bitmap(), wxNullBitmap, wxITEM_NORMAL, wxT("Информация о программе"), wxT("Информация о программе"), NULL );

	m_toolBar1->Realize();

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );

	m_codeListView = new wxDataViewListCtrl( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxDV_ROW_LINES );
	m_colImages = m_codeListView->AppendIconTextColumn( wxEmptyString, wxDATAVIEW_CELL_INERT, 32, static_cast<wxAlignment>(wxALIGN_LEFT), 0 );
	m_colCarryInput = m_codeListView->AppendToggleColumn( wxT("ВхПАЛУ"), wxDATAVIEW_CELL_ACTIVATABLE, 60, static_cast<wxAlignment>(wxALIGN_LEFT), 0 );
	m_colAddress = m_codeListView->AppendTextColumn( wxT("Адр"), wxDATAVIEW_CELL_INERT, 40, static_cast<wxAlignment>(wxALIGN_CENTER), 0 );
	m_colInstruction = m_codeListView->AppendTextColumn( wxT("Мнемокод инструкции"), wxDATAVIEW_CELL_INERT, 150, static_cast<wxAlignment>(wxALIGN_LEFT), wxDATAVIEW_COL_RESIZABLE );
	m_colComment = m_codeListView->AppendTextColumn( wxT("Комментарий"), wxDATAVIEW_CELL_EDITABLE, 200, static_cast<wxAlignment>(wxALIGN_LEFT), wxDATAVIEW_COL_RESIZABLE );
	bSizer3->Add( m_codeListView, 1, wxALL|wxEXPAND, 5 );


	bSizer1->Add( bSizer3, 3, wxEXPAND, 5 );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );

	m_opcodeTree = new wxTreeCtrl( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTR_DEFAULT_STYLE|wxTR_HAS_BUTTONS|wxTR_TWIST_BUTTONS );
	bSizer2->Add( m_opcodeTree, 2, wxALL|wxEXPAND, 5 );

	m_panel1 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxStaticBoxSizer* sbSizer1;
	sbSizer1 = new wxStaticBoxSizer( new wxStaticBox( m_panel1, wxID_ANY, wxT("Фильтр микроинструкций") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer4;
	fgSizer4 = new wxFlexGridSizer( 0, 5, 0, 0 );
	fgSizer4->SetFlexibleDirection( wxBOTH );
	fgSizer4->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_filterOpRegButton = new wxButton( sbSizer1->GetStaticBox(), wxID_ANY, wxT("РОН"), wxDefaultPosition, wxSize( 45,-1 ), 0 );
	fgSizer4->Add( m_filterOpRegButton, 0, wxALL, 5 );

	m_filterOpWRButton = new wxButton( sbSizer1->GetStaticBox(), wxID_ANY, wxT("РР"), wxDefaultPosition, wxSize( 45,-1 ), 0 );
	fgSizer4->Add( m_filterOpWRButton, 0, wxALL, 5 );

	m_filterOpXWRButton = new wxButton( sbSizer1->GetStaticBox(), wxID_ANY, wxT("РРР"), wxDefaultPosition, wxSize( 50,-1 ), 0 );
	fgSizer4->Add( m_filterOpXWRButton, 0, wxALL, 5 );

	m_filterOpInButton = new wxButton( sbSizer1->GetStaticBox(), wxID_ANY, wxT("ШВх"), wxDefaultPosition, wxSize( 50,-1 ), 0 );
	fgSizer4->Add( m_filterOpInButton, 0, wxALL, 5 );

	m_filterOpCarryButton = new wxButton( sbSizer1->GetStaticBox(), wxID_ANY, wxT("П"), wxDefaultPosition, wxSize( 50,-1 ), 0 );
	fgSizer4->Add( m_filterOpCarryButton, 0, wxALL, 5 );

	m_filterResRegButton = new wxButton( sbSizer1->GetStaticBox(), wxID_ANY, wxT("РОН"), wxDefaultPosition, wxSize( 45,-1 ), 0 );
	fgSizer4->Add( m_filterResRegButton, 0, wxALL, 5 );

	m_filterResWRButton = new wxButton( sbSizer1->GetStaticBox(), wxID_ANY, wxT("РР"), wxDefaultPosition, wxSize( 45,-1 ), 0 );
	fgSizer4->Add( m_filterResWRButton, 0, wxALL, 5 );

	m_filterResXWRButton = new wxButton( sbSizer1->GetStaticBox(), wxID_ANY, wxT("РРР"), wxDefaultPosition, wxSize( 50,-1 ), 0 );
	fgSizer4->Add( m_filterResXWRButton, 0, wxALL, 5 );

	m_filterResOutButton = new wxButton( sbSizer1->GetStaticBox(), wxID_ANY, wxT("ШВых"), wxDefaultPosition, wxSize( 50,-1 ), 0 );
	fgSizer4->Add( m_filterResOutButton, 0, wxALL, 5 );

	m_filterResWRXWRButton = new wxButton( sbSizer1->GetStaticBox(), wxID_ANY, wxT("РР,РРР"), wxDefaultPosition, wxSize( 50,-1 ), 0 );
	fgSizer4->Add( m_filterResWRXWRButton, 0, wxALL, 5 );


	sbSizer1->Add( fgSizer4, 1, wxEXPAND, 5 );


	m_panel1->SetSizer( sbSizer1 );
	m_panel1->Layout();
	sbSizer1->Fit( m_panel1 );
	bSizer2->Add( m_panel1, 0, wxEXPAND | wxALL, 5 );

	m_panel2 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxStaticBoxSizer* sbSizer2;
	sbSizer2 = new wxStaticBoxSizer( new wxStaticBox( m_panel2, wxID_ANY, wxT("Описание микрокоманды") ), wxVERTICAL );

	m_commandDescription = new wxTextCtrl( sbSizer2->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE );
	sbSizer2->Add( m_commandDescription, 1, wxALL|wxEXPAND, 5 );


	m_panel2->SetSizer( sbSizer2 );
	m_panel2->Layout();
	sbSizer2->Fit( m_panel2 );
	bSizer2->Add( m_panel2, 1, wxEXPAND | wxALL, 5 );


	bSizer1->Add( bSizer2, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );

	m_panel3 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxStaticBoxSizer* sbSizer3;
	sbSizer3 = new wxStaticBoxSizer( new wxStaticBox( m_panel3, wxID_ANY, wxT("Регистры") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer1;
	fgSizer1 = new wxFlexGridSizer( 11, 0, 0, 0 );
	fgSizer1->AddGrowableCol( 1 );
	fgSizer1->SetFlexibleDirection( wxBOTH );
	fgSizer1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_ALL );

	m_staticText9 = new wxStaticText( sbSizer3->GetStaticBox(), wxID_ANY, wxT("РОН0"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9->Wrap( -1 );
	fgSizer1->Add( m_staticText9, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_fieldR0 = new BinaryInput16( sbSizer3->GetStaticBox(), ID_R0, wxT("0000 0000 0000 0000"), wxDefaultPosition, wxSize( -1,21 ), 0 );
	fgSizer1->Add( m_fieldR0, 1, wxALL|wxEXPAND, 5 );

	m_staticText10 = new wxStaticText( sbSizer3->GetStaticBox(), wxID_ANY, wxT("РОН1"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText10->Wrap( -1 );
	fgSizer1->Add( m_staticText10, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_fieldR1 = new BinaryInput16( sbSizer3->GetStaticBox(), ID_R1, wxT("0000 0000 0000 0000"), wxDefaultPosition, wxSize( -1,21 ), 0 );
	fgSizer1->Add( m_fieldR1, 0, wxALL|wxEXPAND, 5 );

	m_staticText11 = new wxStaticText( sbSizer3->GetStaticBox(), wxID_ANY, wxT("РОН2"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	fgSizer1->Add( m_staticText11, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_fieldR2 = new BinaryInput16( sbSizer3->GetStaticBox(), ID_R2, wxT("0000 0000 0000 0000"), wxDefaultPosition, wxSize( -1,21 ), 0 );
	fgSizer1->Add( m_fieldR2, 0, wxALL|wxEXPAND, 5 );

	m_staticText12 = new wxStaticText( sbSizer3->GetStaticBox(), wxID_ANY, wxT("РОН3"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12->Wrap( -1 );
	fgSizer1->Add( m_staticText12, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_fieldR3 = new BinaryInput16( sbSizer3->GetStaticBox(), ID_R3, wxT("0000 0000 0000 0000"), wxDefaultPosition, wxSize( -1,21 ), 0 );
	fgSizer1->Add( m_fieldR3, 0, wxALL|wxEXPAND, 5 );

	m_staticText13 = new wxStaticText( sbSizer3->GetStaticBox(), wxID_ANY, wxT("РОН4"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13->Wrap( -1 );
	fgSizer1->Add( m_staticText13, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_fieldR4 = new BinaryInput16( sbSizer3->GetStaticBox(), ID_R4, wxT("0000 0000 0000 0000"), wxDefaultPosition, wxSize( -1,21 ), 0 );
	fgSizer1->Add( m_fieldR4, 0, wxALL|wxEXPAND, 5 );

	m_staticText14 = new wxStaticText( sbSizer3->GetStaticBox(), wxID_ANY, wxT("РОН5"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText14->Wrap( -1 );
	fgSizer1->Add( m_staticText14, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_fieldR5 = new BinaryInput16( sbSizer3->GetStaticBox(), ID_R5, wxT("0000 0000 0000 0000"), wxDefaultPosition, wxSize( -1,21 ), 0 );
	fgSizer1->Add( m_fieldR5, 0, wxALL|wxEXPAND, 5 );

	m_staticText15 = new wxStaticText( sbSizer3->GetStaticBox(), wxID_ANY, wxT("РОН6"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText15->Wrap( -1 );
	fgSizer1->Add( m_staticText15, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_fieldR6 = new BinaryInput16( sbSizer3->GetStaticBox(), ID_R6, wxT("0000 0000 0000 0000"), wxDefaultPosition, wxSize( -1,21 ), 0 );
	fgSizer1->Add( m_fieldR6, 0, wxALL|wxEXPAND, 5 );

	m_staticText16 = new wxStaticText( sbSizer3->GetStaticBox(), wxID_ANY, wxT("РОН7"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText16->Wrap( -1 );
	fgSizer1->Add( m_staticText16, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_fieldR7 = new BinaryInput16( sbSizer3->GetStaticBox(), ID_R7, wxT("0000 0000 0000 0000"), wxDefaultPosition, wxSize( -1,21 ), 0 );
	fgSizer1->Add( m_fieldR7, 0, wxALL|wxEXPAND, 5 );


	fgSizer1->Add( 0, 10, 1, wxEXPAND, 5 );


	fgSizer1->Add( 0, 0, 1, wxEXPAND, 5 );

	m_staticText17 = new wxStaticText( sbSizer3->GetStaticBox(), wxID_ANY, wxT("РР"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText17->Wrap( -1 );
	fgSizer1->Add( m_staticText17, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_fieldWR = new BinaryInput16( sbSizer3->GetStaticBox(), ID_WR, wxT("0000 0000 0000 0000"), wxDefaultPosition, wxSize( -1,21 ), 0 );
	fgSizer1->Add( m_fieldWR, 0, wxALL|wxEXPAND, 5 );

	m_staticText18 = new wxStaticText( sbSizer3->GetStaticBox(), wxID_ANY, wxT("РРР"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText18->Wrap( -1 );
	fgSizer1->Add( m_staticText18, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_fieldXWR = new BinaryInput16( sbSizer3->GetStaticBox(), ID_XWR, wxT("0000 0000 0000 0000"), wxDefaultPosition, wxSize( -1,21 ), 0 );
	fgSizer1->Add( m_fieldXWR, 0, wxALL|wxEXPAND, 5 );


	sbSizer3->Add( fgSizer1, 0, wxEXPAND, 5 );


	m_panel3->SetSizer( sbSizer3 );
	m_panel3->Layout();
	sbSizer3->Fit( m_panel3 );
	bSizer4->Add( m_panel3, 0, wxEXPAND | wxALL, 5 );

	m_panel4 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxStaticBoxSizer* sbSizer4;
	sbSizer4 = new wxStaticBoxSizer( new wxStaticBox( m_panel4, wxID_ANY, wxT("Шины") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer2;
	fgSizer2 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer2->AddGrowableCol( 1 );
	fgSizer2->SetFlexibleDirection( wxBOTH );
	fgSizer2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText19 = new wxStaticText( sbSizer4->GetStaticBox(), wxID_ANY, wxT("ШВых"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText19->Wrap( -1 );
	fgSizer2->Add( m_staticText19, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_fieldDO = new BinaryInput16( sbSizer4->GetStaticBox(), ID_DO, wxT("0000 0000 0000 0000"), wxDefaultPosition, wxSize( -1,21 ), 0 );
	fgSizer2->Add( m_fieldDO, 0, wxALL|wxEXPAND, 5 );

	m_staticText20 = new wxStaticText( sbSizer4->GetStaticBox(), wxID_ANY, wxT("ШАдр"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText20->Wrap( -1 );
	fgSizer2->Add( m_staticText20, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_fieldDA = new BinaryInput16( sbSizer4->GetStaticBox(), ID_DA, wxT("0000 0000 0000 0000"), wxDefaultPosition, wxSize( -1,21 ), 0 );
	fgSizer2->Add( m_fieldDA, 0, wxALL|wxEXPAND, 5 );


	sbSizer4->Add( fgSizer2, 1, wxEXPAND, 5 );


	m_panel4->SetSizer( sbSizer4 );
	m_panel4->Layout();
	sbSizer4->Fit( m_panel4 );
	bSizer4->Add( m_panel4, 0, wxEXPAND | wxALL, 5 );

	m_panel5 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxVERTICAL );

	wxStaticBoxSizer* sbSizer5;
	sbSizer5 = new wxStaticBoxSizer( new wxStaticBox( m_panel5, wxID_ANY, wxT("Входы") ), wxVERTICAL );

	m_checkBox1 = new wxCheckBox( sbSizer5->GetStaticBox(), ID_IFLAG_P0, wxT("Р0"), wxDefaultPosition, wxDefaultSize, 0 );
	m_checkBox1->SetValue(true);
	sbSizer5->Add( m_checkBox1, 0, wxALL, 5 );

	m_checkBox2 = new wxCheckBox( sbSizer5->GetStaticBox(), ID_IFLAG_CCI, wxT("!ПСч"), wxDefaultPosition, wxDefaultSize, 0 );
	m_checkBox2->SetValue(true);
	sbSizer5->Add( m_checkBox2, 0, wxALL, 5 );

	m_checkBox3 = new wxCheckBox( sbSizer5->GetStaticBox(), ID_IFLAG_INC, wxT("ИНКР"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer5->Add( m_checkBox3, 0, wxALL, 5 );

	m_checkBox4 = new wxCheckBox( sbSizer5->GetStaticBox(), ID_IFLAG_PRI, wxT("ПР"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer5->Add( m_checkBox4, 0, wxALL, 5 );


	bSizer5->Add( sbSizer5, 0, wxEXPAND, 5 );


	bSizer5->Add( 10, 0, 1, wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer6;
	sbSizer6 = new wxStaticBoxSizer( new wxStaticBox( m_panel5, wxID_ANY, wxT("Выходы") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer3;
	fgSizer3 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer3->SetFlexibleDirection( wxBOTH );
	fgSizer3->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_checkBox17 = new wxCheckBox( sbSizer6->GetStaticBox(), ID_OFLAG_CO3, wxT("ПАЛУ3"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer3->Add( m_checkBox17, 0, wxALL, 5 );

	m_checkBox18 = new wxCheckBox( sbSizer6->GetStaticBox(), ID_OFLAG_WRSL, wxT("!СДЛ1"), wxDefaultPosition, wxDefaultSize, 0 );
	m_checkBox18->SetValue(true);
	fgSizer3->Add( m_checkBox18, 0, wxALL, 5 );

	m_checkBox19 = new wxCheckBox( sbSizer6->GetStaticBox(), ID_OFLAG_CO2, wxT("ПАЛУ2"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer3->Add( m_checkBox19, 0, wxALL, 5 );

	m_checkBox20 = new wxCheckBox( sbSizer6->GetStaticBox(), ID_OFLAG_WRSR, wxT("!СДП1"), wxDefaultPosition, wxDefaultSize, 0 );
	m_checkBox20->SetValue(true);
	fgSizer3->Add( m_checkBox20, 0, wxALL, 5 );

	m_checkBox21 = new wxCheckBox( sbSizer6->GetStaticBox(), ID_OFLAG_CO1, wxT("ПАЛУ1"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer3->Add( m_checkBox21, 0, wxALL, 5 );

	m_checkBox22 = new wxCheckBox( sbSizer6->GetStaticBox(), ID_OFLAG_XWRSL, wxT("!СДЛ2"), wxDefaultPosition, wxDefaultSize, 0 );
	m_checkBox22->SetValue(true);
	fgSizer3->Add( m_checkBox22, 0, wxALL, 5 );

	m_checkBox23 = new wxCheckBox( sbSizer6->GetStaticBox(), ID_OFLAG_CO0, wxT("ПАЛУ0"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer3->Add( m_checkBox23, 0, wxALL, 5 );

	m_checkBox24 = new wxCheckBox( sbSizer6->GetStaticBox(), ID_OFLAG_XWRSR, wxT("!СДП2"), wxDefaultPosition, wxDefaultSize, 0 );
	m_checkBox24->SetValue(true);
	fgSizer3->Add( m_checkBox24, 0, wxALL, 5 );

	m_checkBox25 = new wxCheckBox( sbSizer6->GetStaticBox(), ID_OFLAG_XWR0, wxT("РРР0"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer3->Add( m_checkBox25, 0, wxALL, 5 );

	m_checkBox27 = new wxCheckBox( sbSizer6->GetStaticBox(), ID_OFLAG_A15, wxT("A15"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer3->Add( m_checkBox27, 0, wxALL, 5 );

	m_checkBox28 = new wxCheckBox( sbSizer6->GetStaticBox(), ID_OFLAG_XWR3, wxT("РРР3"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer3->Add( m_checkBox28, 0, wxALL, 5 );

	m_checkBox26 = new wxCheckBox( sbSizer6->GetStaticBox(), ID_OFLAG_B15, wxT("B15"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer3->Add( m_checkBox26, 0, wxALL, 5 );


	sbSizer6->Add( fgSizer3, 1, wxEXPAND, 5 );


	bSizer5->Add( sbSizer6, 0, wxEXPAND, 5 );


	m_panel5->SetSizer( bSizer5 );
	m_panel5->Layout();
	bSizer5->Fit( m_panel5 );
	bSizer4->Add( m_panel5, 1, wxEXPAND | wxALL, 5 );


	bSizer1->Add( bSizer4, 2, wxEXPAND, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_fileMenu->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( X584MainBase::NewItemClick ), this, m_menuItemNew->GetId());
	m_fileMenu->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( X584MainBase::OpenItemClick ), this, m_menuItemOpen->GetId());
	m_fileMenu->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( X584MainBase::SaveItemClick ), this, m_menuItemSave->GetId());
	m_fileMenu->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( X584MainBase::SaveAsItemClick ), this, m_menuItemSaveAs->GetId());
	m_fileMenu->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( X584MainBase::ExitItemClick ), this, m_menuItemExit->GetId());
	m_menuEdit->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( X584MainBase::CutItemClick ), this, m_menuItemCut->GetId());
	m_menuEdit->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( X584MainBase::CopyItemClick ), this, m_menuItemCopy->GetId());
	m_menuEdit->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( X584MainBase::PasteItemClick ), this, m_menuItemPaste->GetId());
	m_menuEdit->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( X584MainBase::DeleteItemClick ), this, m_menuItemDelete->GetId());
	m_menuEdit->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( X584MainBase::InsertItemClick ), this, m_menuItemInsert->GetId());
	m_menuDebug->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( X584MainBase::RunItemClick ), this, m_menuItemRun->GetId());
	m_menuDebug->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( X584MainBase::StepItemClick ), this, m_menuItemStep->GetId());
	m_menuDebug->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( X584MainBase::RunToCursorItemClick ), this, m_menuItemRunToCursor->GetId());
	m_menuDebug->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( X584MainBase::BreakItemClick ), this, m_menuItemBreak->GetId());
	m_menuDebug->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( X584MainBase::ResetItemClick ), this, m_menuItemReset->GetId());
	m_menuHelp->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( X584MainBase::HelpItemClick ), this, m_menuItemHelp->GetId());
	m_menuHelp->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( X584MainBase::AboutItemClick ), this, m_menuItemAbout->GetId());
	this->Connect( m_toolNew->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( X584MainBase::NewItemClick ) );
	this->Connect( m_toolOpen->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( X584MainBase::OpenItemClick ) );
	this->Connect( m_toolSave->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( X584MainBase::SaveItemClick ) );
	this->Connect( m_toolExit->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( X584MainBase::ExitItemClick ) );
	this->Connect( m_toolCut->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( X584MainBase::CutItemClick ) );
	this->Connect( m_toolCopy->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( X584MainBase::CopyItemClick ) );
	this->Connect( m_toolPaste->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( X584MainBase::PasteItemClick ) );
	this->Connect( m_toolDelete->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( X584MainBase::DeleteItemClick ) );
	this->Connect( m_toolRun->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( X584MainBase::RunItemClick ) );
	this->Connect( m_toolStep->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( X584MainBase::StopItemClick ) );
	this->Connect( m_toolRunToCursor->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( X584MainBase::RunToCursorItemClick ) );
	this->Connect( m_toolBreak->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( X584MainBase::BreakItemClick ) );
	this->Connect( m_toolReset->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( X584MainBase::ResetItemClick ) );
	this->Connect( m_toolHelp->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( X584MainBase::HelpItemClick ) );
	this->Connect( m_toolAbout->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( X584MainBase::AboutItemClick ) );
	m_filterOpRegButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( X584MainBase::FilterOpItemClick ), NULL, this );
	m_filterOpWRButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( X584MainBase::FilterOpItemClick ), NULL, this );
	m_filterOpXWRButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( X584MainBase::FilterOpItemClick ), NULL, this );
	m_filterOpInButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( X584MainBase::FilterOpItemClick ), NULL, this );
	m_filterOpCarryButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( X584MainBase::FilterOpItemClick ), NULL, this );
	m_filterResRegButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( X584MainBase::FilterResItemClick ), NULL, this );
	m_filterResWRButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( X584MainBase::FilterResItemClick ), NULL, this );
	m_filterResXWRButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( X584MainBase::FilterResItemClick ), NULL, this );
	m_filterResOutButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( X584MainBase::FilterResItemClick ), NULL, this );
	m_filterResWRXWRButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( X584MainBase::FilterResItemClick ), NULL, this );
	m_fieldR0->Connect( wxEVT_KEY_DOWN, wxKeyEventHandler( X584MainBase::RegMaskEditKeyPress ), NULL, this );
	m_fieldR0->Connect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( X584MainBase::RegMaskEditDblClick ), NULL, this );
	m_fieldR0->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( X584MainBase::RegMaskEditChange ), NULL, this );
	m_fieldR1->Connect( wxEVT_KEY_DOWN, wxKeyEventHandler( X584MainBase::RegMaskEditKeyPress ), NULL, this );
	m_fieldR1->Connect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( X584MainBase::RegMaskEditDblClick ), NULL, this );
	m_fieldR1->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( X584MainBase::RegMaskEditChange ), NULL, this );
	m_fieldR2->Connect( wxEVT_KEY_DOWN, wxKeyEventHandler( X584MainBase::RegMaskEditKeyPress ), NULL, this );
	m_fieldR2->Connect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( X584MainBase::RegMaskEditDblClick ), NULL, this );
	m_fieldR2->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( X584MainBase::RegMaskEditChange ), NULL, this );
	m_fieldR3->Connect( wxEVT_KEY_DOWN, wxKeyEventHandler( X584MainBase::RegMaskEditKeyPress ), NULL, this );
	m_fieldR3->Connect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( X584MainBase::RegMaskEditDblClick ), NULL, this );
	m_fieldR3->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( X584MainBase::RegMaskEditChange ), NULL, this );
	m_fieldR4->Connect( wxEVT_KEY_DOWN, wxKeyEventHandler( X584MainBase::RegMaskEditKeyPress ), NULL, this );
	m_fieldR4->Connect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( X584MainBase::RegMaskEditDblClick ), NULL, this );
	m_fieldR4->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( X584MainBase::RegMaskEditChange ), NULL, this );
	m_fieldR5->Connect( wxEVT_KEY_DOWN, wxKeyEventHandler( X584MainBase::RegMaskEditKeyPress ), NULL, this );
	m_fieldR5->Connect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( X584MainBase::RegMaskEditDblClick ), NULL, this );
	m_fieldR5->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( X584MainBase::RegMaskEditChange ), NULL, this );
	m_fieldR6->Connect( wxEVT_KEY_DOWN, wxKeyEventHandler( X584MainBase::RegMaskEditKeyPress ), NULL, this );
	m_fieldR6->Connect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( X584MainBase::RegMaskEditDblClick ), NULL, this );
	m_fieldR6->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( X584MainBase::RegMaskEditChange ), NULL, this );
	m_fieldR7->Connect( wxEVT_KEY_DOWN, wxKeyEventHandler( X584MainBase::RegMaskEditKeyPress ), NULL, this );
	m_fieldR7->Connect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( X584MainBase::RegMaskEditDblClick ), NULL, this );
	m_fieldR7->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( X584MainBase::RegMaskEditChange ), NULL, this );
	m_fieldWR->Connect( wxEVT_KEY_DOWN, wxKeyEventHandler( X584MainBase::RegMaskEditKeyPress ), NULL, this );
	m_fieldWR->Connect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( X584MainBase::RegMaskEditDblClick ), NULL, this );
	m_fieldWR->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( X584MainBase::RegMaskEditChange ), NULL, this );
	m_fieldXWR->Connect( wxEVT_KEY_DOWN, wxKeyEventHandler( X584MainBase::RegMaskEditKeyPress ), NULL, this );
	m_fieldXWR->Connect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( X584MainBase::RegMaskEditDblClick ), NULL, this );
	m_fieldXWR->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( X584MainBase::RegMaskEditChange ), NULL, this );
	m_fieldDO->Connect( wxEVT_KEY_DOWN, wxKeyEventHandler( X584MainBase::RegMaskEditKeyPress ), NULL, this );
	m_fieldDO->Connect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( X584MainBase::RegMaskEditDblClick ), NULL, this );
	m_fieldDO->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( X584MainBase::RegMaskEditChange ), NULL, this );
	m_fieldDA->Connect( wxEVT_KEY_DOWN, wxKeyEventHandler( X584MainBase::RegMaskEditKeyPress ), NULL, this );
	m_fieldDA->Connect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( X584MainBase::RegMaskEditDblClick ), NULL, this );
	m_fieldDA->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( X584MainBase::RegMaskEditChange ), NULL, this );
}

X584MainBase::~X584MainBase()
{
}
