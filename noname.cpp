///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "noname.h"

///////////////////////////////////////////////////////////////////////////

PairMaker_MainFrame::PairMaker_MainFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	menubar = new wxMenuBar( 0 );
	countries_menu = new wxMenu();
	wxMenuItem* importCountriesXML_mI;
	importCountriesXML_mI = new wxMenuItem( countries_menu, wxID_ANY, wxString( wxT("Import from XML") ) , wxEmptyString, wxITEM_NORMAL );
	countries_menu->Append( importCountriesXML_mI );

	wxMenuItem* exportCountriesXML_mI;
	exportCountriesXML_mI = new wxMenuItem( countries_menu, wxID_ANY, wxString( wxT("Export to XML") ) , wxEmptyString, wxITEM_NORMAL );
	countries_menu->Append( exportCountriesXML_mI );

	countries_menu->AppendSeparator();

	wxMenuItem* clearCountries_mI;
	clearCountries_mI = new wxMenuItem( countries_menu, wxID_ANY, wxString( wxT("Clear") ) , wxEmptyString, wxITEM_NORMAL );
	countries_menu->Append( clearCountries_mI );

	menubar->Append( countries_menu, wxT("Countries") );

	participants_menu = new wxMenu();
	wxMenuItem* importParticipantsXML_mI;
	importParticipantsXML_mI = new wxMenuItem( participants_menu, wxID_ANY, wxString( wxT("Import from XML") ) , wxEmptyString, wxITEM_NORMAL );
	participants_menu->Append( importParticipantsXML_mI );

	wxMenuItem* exportParticipantsXML_mI;
	exportParticipantsXML_mI = new wxMenuItem( participants_menu, wxID_ANY, wxString( wxT("Export to XML") ) , wxEmptyString, wxITEM_NORMAL );
	participants_menu->Append( exportParticipantsXML_mI );

	participants_menu->AppendSeparator();

	wxMenuItem* clearParticipants_mI;
	clearParticipants_mI = new wxMenuItem( participants_menu, wxID_ANY, wxString( wxT("Clear") ) , wxEmptyString, wxITEM_NORMAL );
	participants_menu->Append( clearParticipants_mI );

	menubar->Append( participants_menu, wxT("Participants") );

	about_menu = new wxMenu();
	wxMenuItem* about_menuItem;
	about_menuItem = new wxMenuItem( about_menu, wxID_ANY, wxString( wxT("About this Program") ) , wxEmptyString, wxITEM_NORMAL );
	about_menu->Append( about_menuItem );

	menubar->Append( about_menu, wxT("About") );

	this->SetMenuBar( menubar );

	wxBoxSizer* frameSizer;
	frameSizer = new wxBoxSizer( wxVERTICAL );

	mainPanel = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* mainPanel_bSizer;
	mainPanel_bSizer = new wxBoxSizer( wxVERTICAL );

	windowTitle_ST = new wxStaticText( mainPanel, wxID_ANY, wxT("MUN PairMaker"), wxDefaultPosition, wxDefaultSize, 0 );
	windowTitle_ST->Wrap( -1 );
	windowTitle_ST->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );

	mainPanel_bSizer->Add( windowTitle_ST, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	title_staticline = new wxStaticLine( mainPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	mainPanel_bSizer->Add( title_staticline, 0, wxEXPAND | wxALL, 5 );

	wxGridSizer* lists_gSizer;
	lists_gSizer = new wxGridSizer( 1, 2, 0, 0 );

	wxStaticBoxSizer* countries_sbSizer;
	countries_sbSizer = new wxStaticBoxSizer( new wxStaticBox( mainPanel, wxID_ANY, wxT("Countries") ), wxVERTICAL );

	countries_listBox = new wxListBox( countries_sbSizer->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	countries_listBox->Append( wxT("Greece") );
	countries_listBox->Append( wxT("Lebanon") );
	countries_listBox->Append( wxT("Baguette Country") );
	countries_sbSizer->Add( countries_listBox, 1, wxALL|wxEXPAND, 5 );

	wxGridSizer* countriesButtons_gSizer;
	countriesButtons_gSizer = new wxGridSizer( 0, 2, 0, 0 );

	addCountry_btn = new wxButton( countries_sbSizer->GetStaticBox(), wxID_ANY, wxT("Add"), wxDefaultPosition, wxDefaultSize, 0 );
	countriesButtons_gSizer->Add( addCountry_btn, 0, wxALL|wxALIGN_RIGHT, 5 );

	rmCountry_btb = new wxButton( countries_sbSizer->GetStaticBox(), wxID_ANY, wxT("Remove"), wxDefaultPosition, wxDefaultSize, 0 );
	countriesButtons_gSizer->Add( rmCountry_btb, 0, wxALL, 5 );


	countries_sbSizer->Add( countriesButtons_gSizer, 0, wxEXPAND, 5 );


	lists_gSizer->Add( countries_sbSizer, 1, wxALL|wxEXPAND, 5 );

	wxStaticBoxSizer* participants_sbSizer;
	participants_sbSizer = new wxStaticBoxSizer( new wxStaticBox( mainPanel, wxID_ANY, wxT("Participants") ), wxVERTICAL );

	participants_listBox = new wxListBox( participants_sbSizer->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	participants_listBox->Append( wxT("Eliza") );
	participants_listBox->Append( wxT("Iosif") );
	participants_sbSizer->Add( participants_listBox, 1, wxALL|wxEXPAND, 5 );

	wxGridSizer* participantsButtons_gSizer;
	participantsButtons_gSizer = new wxGridSizer( 0, 2, 0, 0 );

	addParticipant_btn = new wxButton( participants_sbSizer->GetStaticBox(), wxID_ANY, wxT("Add"), wxDefaultPosition, wxDefaultSize, 0 );
	participantsButtons_gSizer->Add( addParticipant_btn, 0, wxALL|wxALIGN_RIGHT, 5 );

	rmParticipant_btn = new wxButton( participants_sbSizer->GetStaticBox(), wxID_ANY, wxT("Remove"), wxDefaultPosition, wxDefaultSize, 0 );
	participantsButtons_gSizer->Add( rmParticipant_btn, 0, wxALL, 5 );


	participants_sbSizer->Add( participantsButtons_gSizer, 0, wxEXPAND, 5 );


	lists_gSizer->Add( participants_sbSizer, 1, wxALL|wxEXPAND, 5 );


	mainPanel_bSizer->Add( lists_gSizer, 1, wxEXPAND, 5 );

	lists_staticline = new wxStaticLine( mainPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	mainPanel_bSizer->Add( lists_staticline, 0, wxEXPAND | wxALL, 5 );

	generatePairs_btn = new wxButton( mainPanel, wxID_ANY, wxT("Generate Pairs"), wxDefaultPosition, wxDefaultSize, 0 );
	mainPanel_bSizer->Add( generatePairs_btn, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	mainPanel->SetSizer( mainPanel_bSizer );
	mainPanel->Layout();
	mainPanel_bSizer->Fit( mainPanel );
	frameSizer->Add( mainPanel, 1, wxEXPAND, 5 );


	this->SetSizer( frameSizer );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	countries_menu->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PairMaker_MainFrame::OnImportCountriesMenu ), this, importCountriesXML_mI->GetId());
	countries_menu->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PairMaker_MainFrame::OnExportCountriesMenu ), this, exportCountriesXML_mI->GetId());
	countries_menu->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PairMaker_MainFrame::OnClearCountriesMenu ), this, clearCountries_mI->GetId());
	participants_menu->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PairMaker_MainFrame::OnImportParticipantsMenu ), this, importParticipantsXML_mI->GetId());
	participants_menu->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PairMaker_MainFrame::OnExportParticipantsMenu ), this, exportParticipantsXML_mI->GetId());
	participants_menu->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PairMaker_MainFrame::OnClearParticipantsMenu ), this, clearParticipants_mI->GetId());
	about_menu->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PairMaker_MainFrame::OnAboutProgramMenu ), this, about_menuItem->GetId());
	addCountry_btn->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PairMaker_MainFrame::AddCountryBtnClick ), NULL, this );
	rmCountry_btb->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PairMaker_MainFrame::RemoveCountryBtnClick ), NULL, this );
	addParticipant_btn->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PairMaker_MainFrame::AddParticipantBtnClick ), NULL, this );
	rmParticipant_btn->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PairMaker_MainFrame::RemoveParticipantBtnClick ), NULL, this );
	generatePairs_btn->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PairMaker_MainFrame::GeneratePairsBtnClick ), NULL, this );
}

PairMaker_MainFrame::~PairMaker_MainFrame()
{
	// Disconnect Events
	addCountry_btn->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PairMaker_MainFrame::AddCountryBtnClick ), NULL, this );
	rmCountry_btb->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PairMaker_MainFrame::RemoveCountryBtnClick ), NULL, this );
	addParticipant_btn->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PairMaker_MainFrame::AddParticipantBtnClick ), NULL, this );
	rmParticipant_btn->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PairMaker_MainFrame::RemoveParticipantBtnClick ), NULL, this );
	generatePairs_btn->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PairMaker_MainFrame::GeneratePairsBtnClick ), NULL, this );

}

AddCountriesFrame::AddCountriesFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* frame_bSizer;
	frame_bSizer = new wxBoxSizer( wxVERTICAL );

	mainPanel = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* mainPanel_bSizer;
	mainPanel_bSizer = new wxBoxSizer( wxVERTICAL );

	frameTitle_ST = new wxStaticText( mainPanel, wxID_ANY, wxT("Add Countries"), wxDefaultPosition, wxDefaultSize, 0 );
	frameTitle_ST->Wrap( -1 );
	frameTitle_ST->SetFont( wxFont( 14, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString ) );

	mainPanel_bSizer->Add( frameTitle_ST, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	title_staticline = new wxStaticLine( mainPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	mainPanel_bSizer->Add( title_staticline, 0, wxEXPAND | wxALL, 5 );

	newCountries_listBox = new wxListBox( mainPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	mainPanel_bSizer->Add( newCountries_listBox, 1, wxALL|wxEXPAND, 5 );

	wxBoxSizer* countryFields_bSizer;
	countryFields_bSizer = new wxBoxSizer( wxHORIZONTAL );

	countryName_staticText = new wxStaticText( mainPanel, wxID_ANY, wxT("Country Name"), wxDefaultPosition, wxDefaultSize, 0 );
	countryName_staticText->Wrap( -1 );
	countryFields_bSizer->Add( countryName_staticText, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	countryName_textCtrl = new wxTextCtrl( mainPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	countryFields_bSizer->Add( countryName_textCtrl, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	mainPanel_bSizer->Add( countryFields_bSizer, 0, wxEXPAND, 5 );

	wxBoxSizer* countryProperties_bSizer;
	countryProperties_bSizer = new wxBoxSizer( wxHORIZONTAL );

	addCountry_btn = new wxButton( mainPanel, wxID_ANY, wxT("Add"), wxDefaultPosition, wxDefaultSize, 0 );
	countryProperties_bSizer->Add( addCountry_btn, 0, wxALL|wxALIGN_RIGHT, 5 );

	rmCountry_btn = new wxButton( mainPanel, wxID_ANY, wxT("Remove"), wxDefaultPosition, wxDefaultSize, 0 );
	countryProperties_bSizer->Add( rmCountry_btn, 0, wxALL, 5 );


	mainPanel_bSizer->Add( countryProperties_bSizer, 0, wxALIGN_RIGHT, 5 );

	m_staticline9 = new wxStaticLine( mainPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	mainPanel_bSizer->Add( m_staticline9, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* frameProperties_bSizer;
	frameProperties_bSizer = new wxBoxSizer( wxHORIZONTAL );

	finish_btn = new wxButton( mainPanel, wxID_ANY, wxT("Finish"), wxDefaultPosition, wxDefaultSize, 0 );
	frameProperties_bSizer->Add( finish_btn, 0, wxALL, 5 );

	cancel_btn = new wxButton( mainPanel, wxID_ANY, wxT("Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	frameProperties_bSizer->Add( cancel_btn, 0, wxALL, 5 );


	mainPanel_bSizer->Add( frameProperties_bSizer, 0, wxALIGN_RIGHT, 5 );


	mainPanel->SetSizer( mainPanel_bSizer );
	mainPanel->Layout();
	mainPanel_bSizer->Fit( mainPanel );
	frame_bSizer->Add( mainPanel, 1, wxEXPAND, 5 );


	this->SetSizer( frame_bSizer );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	addCountry_btn->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AddCountriesFrame::AddCountryBtnClick ), NULL, this );
	rmCountry_btn->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AddCountriesFrame::RemoveCountryBtnClick ), NULL, this );
	finish_btn->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AddCountriesFrame::FinishBtnClick ), NULL, this );
	cancel_btn->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AddCountriesFrame::CancelBtnClick ), NULL, this );
}

AddCountriesFrame::~AddCountriesFrame()
{
	// Disconnect Events
	addCountry_btn->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AddCountriesFrame::AddCountryBtnClick ), NULL, this );
	rmCountry_btn->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AddCountriesFrame::RemoveCountryBtnClick ), NULL, this );
	finish_btn->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AddCountriesFrame::FinishBtnClick ), NULL, this );
	cancel_btn->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AddCountriesFrame::CancelBtnClick ), NULL, this );

}

AddParticipantsFrame::AddParticipantsFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* frame_bSizer;
	frame_bSizer = new wxBoxSizer( wxVERTICAL );

	mainPanel = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* mainPanel_bSizer;
	mainPanel_bSizer = new wxBoxSizer( wxVERTICAL );

	frameTitle_ST = new wxStaticText( mainPanel, wxID_ANY, wxT("Add Participants"), wxDefaultPosition, wxDefaultSize, 0 );
	frameTitle_ST->Wrap( -1 );
	frameTitle_ST->SetFont( wxFont( 14, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString ) );

	mainPanel_bSizer->Add( frameTitle_ST, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	title_staticline = new wxStaticLine( mainPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	mainPanel_bSizer->Add( title_staticline, 0, wxEXPAND | wxALL, 5 );

	newParticipants_listBox = new wxListBox( mainPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	mainPanel_bSizer->Add( newParticipants_listBox, 1, wxALL|wxEXPAND, 5 );

	wxBoxSizer* participantsFields_bSizer;
	participantsFields_bSizer = new wxBoxSizer( wxHORIZONTAL );

	participantName_staticText = new wxStaticText( mainPanel, wxID_ANY, wxT("Participant Name"), wxDefaultPosition, wxDefaultSize, 0 );
	participantName_staticText->Wrap( -1 );
	participantsFields_bSizer->Add( participantName_staticText, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	participantName_textCtrl = new wxTextCtrl( mainPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	participantsFields_bSizer->Add( participantName_textCtrl, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	mainPanel_bSizer->Add( participantsFields_bSizer, 0, wxEXPAND, 5 );

	wxBoxSizer* participantProperties_bSizer;
	participantProperties_bSizer = new wxBoxSizer( wxHORIZONTAL );

	addParticipant_btn = new wxButton( mainPanel, wxID_ANY, wxT("Add"), wxDefaultPosition, wxDefaultSize, 0 );
	participantProperties_bSizer->Add( addParticipant_btn, 0, wxALL|wxALIGN_RIGHT, 5 );

	rmParticipant_btn = new wxButton( mainPanel, wxID_ANY, wxT("Remove"), wxDefaultPosition, wxDefaultSize, 0 );
	participantProperties_bSizer->Add( rmParticipant_btn, 0, wxALL, 5 );


	mainPanel_bSizer->Add( participantProperties_bSizer, 0, wxALIGN_RIGHT, 5 );

	m_staticline12 = new wxStaticLine( mainPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	mainPanel_bSizer->Add( m_staticline12, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* frameProperties_bSizer;
	frameProperties_bSizer = new wxBoxSizer( wxHORIZONTAL );

	finish_btn = new wxButton( mainPanel, wxID_ANY, wxT("Finish"), wxDefaultPosition, wxDefaultSize, 0 );
	frameProperties_bSizer->Add( finish_btn, 0, wxALL, 5 );

	cancel_btn = new wxButton( mainPanel, wxID_ANY, wxT("Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	frameProperties_bSizer->Add( cancel_btn, 0, wxALL, 5 );


	mainPanel_bSizer->Add( frameProperties_bSizer, 0, wxALIGN_RIGHT, 5 );


	mainPanel->SetSizer( mainPanel_bSizer );
	mainPanel->Layout();
	mainPanel_bSizer->Fit( mainPanel );
	frame_bSizer->Add( mainPanel, 1, wxEXPAND, 5 );


	this->SetSizer( frame_bSizer );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	addParticipant_btn->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AddParticipantsFrame::AddParticipantBtnClick ), NULL, this );
	rmParticipant_btn->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AddParticipantsFrame::RemoveParticipantBtnClick ), NULL, this );
	finish_btn->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AddParticipantsFrame::FinishBtnClick ), NULL, this );
	cancel_btn->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AddParticipantsFrame::CancelBtnClick ), NULL, this );
}

AddParticipantsFrame::~AddParticipantsFrame()
{
	// Disconnect Events
	addParticipant_btn->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AddParticipantsFrame::AddParticipantBtnClick ), NULL, this );
	rmParticipant_btn->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AddParticipantsFrame::RemoveParticipantBtnClick ), NULL, this );
	finish_btn->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AddParticipantsFrame::FinishBtnClick ), NULL, this );
	cancel_btn->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AddParticipantsFrame::CancelBtnClick ), NULL, this );

}

DisplayPairsFrame::DisplayPairsFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* frame_bSizer;
	frame_bSizer = new wxBoxSizer( wxVERTICAL );

	mainPanel_panel = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* panel_bSizer;
	panel_bSizer = new wxBoxSizer( wxVERTICAL );

	pageTitle_ST = new wxStaticText( mainPanel_panel, wxID_ANY, wxT("Generated Pairs"), wxDefaultPosition, wxDefaultSize, 0 );
	pageTitle_ST->Wrap( -1 );
	pageTitle_ST->SetFont( wxFont( 14, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString ) );

	panel_bSizer->Add( pageTitle_ST, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	pairs_listCtrl = new wxListCtrl( mainPanel_panel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_ICON|wxLC_REPORT );
	panel_bSizer->Add( pairs_listCtrl, 1, wxALL|wxEXPAND, 5 );

	wxStaticBoxSizer* save_sbSizer;
	save_sbSizer = new wxStaticBoxSizer( new wxStaticBox( mainPanel_panel, wxID_ANY, wxT("Save to file") ), wxHORIZONTAL );

	saveCSV_dirPicker = new wxDirPickerCtrl( save_sbSizer->GetStaticBox(), wxID_ANY, wxEmptyString, wxT("Select a folder"), wxDefaultPosition, wxDefaultSize, wxDIRP_DEFAULT_STYLE );
	save_sbSizer->Add( saveCSV_dirPicker, 1, wxALL, 5 );

	saveCSV_btn = new wxButton( save_sbSizer->GetStaticBox(), wxID_ANY, wxT("Save"), wxDefaultPosition, wxDefaultSize, 0 );
	save_sbSizer->Add( saveCSV_btn, 0, wxALL, 5 );


	panel_bSizer->Add( save_sbSizer, 0, wxALL|wxEXPAND, 5 );

	wxBoxSizer* frameProperties_bSizer;
	frameProperties_bSizer = new wxBoxSizer( wxHORIZONTAL );

	finish_btn = new wxButton( mainPanel_panel, wxID_ANY, wxT("Finish"), wxDefaultPosition, wxDefaultSize, 0 );
	frameProperties_bSizer->Add( finish_btn, 0, wxALL, 5 );

	cancel_btn = new wxButton( mainPanel_panel, wxID_ANY, wxT("Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	frameProperties_bSizer->Add( cancel_btn, 0, wxALL, 5 );


	panel_bSizer->Add( frameProperties_bSizer, 0, wxALIGN_RIGHT, 5 );


	mainPanel_panel->SetSizer( panel_bSizer );
	mainPanel_panel->Layout();
	panel_bSizer->Fit( mainPanel_panel );
	frame_bSizer->Add( mainPanel_panel, 1, wxEXPAND, 5 );


	this->SetSizer( frame_bSizer );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	saveCSV_btn->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DisplayPairsFrame::SaveFileBtnClick ), NULL, this );
	finish_btn->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DisplayPairsFrame::FinishBtnClick ), NULL, this );
	cancel_btn->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DisplayPairsFrame::CancelBtnClick ), NULL, this );
}

DisplayPairsFrame::~DisplayPairsFrame()
{
	// Disconnect Events
	saveCSV_btn->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DisplayPairsFrame::SaveFileBtnClick ), NULL, this );
	finish_btn->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DisplayPairsFrame::FinishBtnClick ), NULL, this );
	cancel_btn->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DisplayPairsFrame::CancelBtnClick ), NULL, this );

}

AboutDialog::AboutDialog( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxVERTICAL );

	m_panel2 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxVERTICAL );

	m_staticText9 = new wxStaticText( m_panel2, wxID_ANY, wxT("MUN Pair Maker"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9->Wrap( -1 );
	m_staticText9->SetFont( wxFont( 14, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxEmptyString ) );

	bSizer12->Add( m_staticText9, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	m_staticText10 = new wxStaticText( m_panel2, wxID_ANY, wxT("A simple program which assigns participants to countries."), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText10->Wrap( -1 );
	bSizer12->Add( m_staticText10, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	m_staticText27 = new wxStaticText( m_panel2, wxID_ANY, wxT("Initialy created for the Aristotle University's \"United Nation Society\"."), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText27->Wrap( -1 );
	bSizer12->Add( m_staticText27, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	m_staticline7 = new wxStaticLine( m_panel2, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer12->Add( m_staticline7, 0, wxEXPAND | wxALL, 5 );

	m_staticText11 = new wxStaticText( m_panel2, wxID_ANY, wxT("Technical Details"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	bSizer12->Add( m_staticText11, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer131;
	bSizer131 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText71 = new wxStaticText( m_panel2, wxID_ANY, wxT("Author:"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT );
	m_staticText71->Wrap( -1 );
	m_staticText71->SetMinSize( wxSize( 100,-1 ) );

	bSizer131->Add( m_staticText71, 0, wxALL, 5 );

	m_staticText81 = new wxStaticText( m_panel2, wxID_ANY, wxT("Iosif Saad"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText81->Wrap( -1 );
	bSizer131->Add( m_staticText81, 0, wxALL, 5 );


	bSizer12->Add( bSizer131, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText7 = new wxStaticText( m_panel2, wxID_ANY, wxT("Written in:"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT );
	m_staticText7->Wrap( -1 );
	m_staticText7->SetMinSize( wxSize( 100,-1 ) );

	bSizer13->Add( m_staticText7, 0, wxALL, 5 );

	m_staticText8 = new wxStaticText( m_panel2, wxID_ANY, wxT("C++"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8->Wrap( -1 );
	bSizer13->Add( m_staticText8, 0, wxALL, 5 );


	bSizer12->Add( bSizer13, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText12 = new wxStaticText( m_panel2, wxID_ANY, wxT("GUI Framework:"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT );
	m_staticText12->Wrap( -1 );
	m_staticText12->SetMinSize( wxSize( 100,-1 ) );

	bSizer14->Add( m_staticText12, 0, wxALL, 5 );

	m_staticText13 = new wxStaticText( m_panel2, wxID_ANY, wxT("wxWidgets"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13->Wrap( -1 );
	bSizer14->Add( m_staticText13, 0, wxALL, 5 );


	bSizer12->Add( bSizer14, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer141;
	bSizer141 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText121 = new wxStaticText( m_panel2, wxID_ANY, wxT("XML Parser:"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT );
	m_staticText121->Wrap( -1 );
	m_staticText121->SetMinSize( wxSize( 100,-1 ) );

	bSizer141->Add( m_staticText121, 0, wxALL, 5 );

	m_staticText131 = new wxStaticText( m_panel2, wxID_ANY, wxT("PugiXML"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText131->Wrap( -1 );
	bSizer141->Add( m_staticText131, 0, wxALL, 5 );


	bSizer12->Add( bSizer141, 0, wxEXPAND, 5 );

	m_staticline8 = new wxStaticLine( m_panel2, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer12->Add( m_staticline8, 0, wxEXPAND | wxALL, 5 );


	m_panel2->SetSizer( bSizer12 );
	m_panel2->Layout();
	bSizer12->Fit( m_panel2 );
	bSizer11->Add( m_panel2, 1, wxEXPAND | wxALL, 5 );


	this->SetSizer( bSizer11 );
	this->Layout();

	this->Centre( wxBOTH );
}

AboutDialog::~AboutDialog()
{
}
