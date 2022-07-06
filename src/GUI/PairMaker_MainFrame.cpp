#include "GUI/PairMaker_MainFrame.h"

PairMaker_MainFrame::PairMaker_MainFrame(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxFrame(parent, id, title, pos, size, style)
{
	this->SetSizeHints(wxDefaultSize, wxDefaultSize);

	menubar = new wxMenuBar(0);
	countries_menu = new wxMenu();
	wxMenuItem* importCountriesXML_mI;
	importCountriesXML_mI = new wxMenuItem(countries_menu, wxID_ANY, wxString(wxT("Import from XML")), wxEmptyString, wxITEM_NORMAL);
	countries_menu->Append(importCountriesXML_mI);

	wxMenuItem* exportCountriesXML_mI;
	exportCountriesXML_mI = new wxMenuItem(countries_menu, wxID_ANY, wxString(wxT("Export to XML")), wxEmptyString, wxITEM_NORMAL);
	countries_menu->Append(exportCountriesXML_mI);

	countries_menu->AppendSeparator();

	wxMenuItem* clearCountries_mI;
	clearCountries_mI = new wxMenuItem(countries_menu, wxID_ANY, wxString(wxT("Clear")), wxEmptyString, wxITEM_NORMAL);
	countries_menu->Append(clearCountries_mI);

	menubar->Append(countries_menu, wxT("Countries"));

	participants_menu = new wxMenu();
	wxMenuItem* importParticipantsXML_mI;
	importParticipantsXML_mI = new wxMenuItem(participants_menu, wxID_ANY, wxString(wxT("Import from XML")), wxEmptyString, wxITEM_NORMAL);
	participants_menu->Append(importParticipantsXML_mI);

	wxMenuItem* exportParticipantsXML_mI;
	exportParticipantsXML_mI = new wxMenuItem(participants_menu, wxID_ANY, wxString(wxT("Export to XML")), wxEmptyString, wxITEM_NORMAL);
	participants_menu->Append(exportParticipantsXML_mI);

	participants_menu->AppendSeparator();

	wxMenuItem* clearParticipants_mI;
	clearParticipants_mI = new wxMenuItem(participants_menu, wxID_ANY, wxString(wxT("Clear")), wxEmptyString, wxITEM_NORMAL);
	participants_menu->Append(clearParticipants_mI);

	menubar->Append(participants_menu, wxT("Participants"));

	about_menu = new wxMenu();
	wxMenuItem* about_menuItem;
	about_menuItem = new wxMenuItem(about_menu, wxID_ANY, wxString(wxT("About this Program")), wxEmptyString, wxITEM_NORMAL);
	about_menu->Append(about_menuItem);

	menubar->Append(about_menu, wxT("About"));

	this->SetMenuBar(menubar);

	wxBoxSizer* frameSizer;
	frameSizer = new wxBoxSizer(wxVERTICAL);

	mainPanel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	wxBoxSizer* mainPanel_bSizer;
	mainPanel_bSizer = new wxBoxSizer(wxVERTICAL);

	windowTitle_ST = new wxStaticText(mainPanel, wxID_ANY, wxT("MUN PairMaker"), wxDefaultPosition, wxDefaultSize, 0);
	windowTitle_ST->Wrap(-1);
	windowTitle_ST->SetFont(wxFont(14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial")));

	mainPanel_bSizer->Add(windowTitle_ST, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, 5);

	title_staticline = new wxStaticLine(mainPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL);
	mainPanel_bSizer->Add(title_staticline, 0, wxEXPAND | wxALL, 5);

	wxGridSizer* lists_gSizer;
	lists_gSizer = new wxGridSizer(1, 2, 0, 0);

	wxStaticBoxSizer* countries_sbSizer;
	countries_sbSizer = new wxStaticBoxSizer(new wxStaticBox(mainPanel, wxID_ANY, wxT("Countries")), wxVERTICAL);

	countries_listBox = new wxListBox(countries_sbSizer->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0);
	countries_listBox->Append(wxT("Greece"));
	countries_listBox->Append(wxT("Lebanon"));
	countries_listBox->Append(wxT("Baguette Country"));
	countries_sbSizer->Add(countries_listBox, 1, wxALL | wxEXPAND, 5);

	wxGridSizer* countriesButtons_gSizer;
	countriesButtons_gSizer = new wxGridSizer(0, 2, 0, 0);

	addCountry_btn = new wxButton(countries_sbSizer->GetStaticBox(), wxID_ANY, wxT("Add"), wxDefaultPosition, wxDefaultSize, 0);
	countriesButtons_gSizer->Add(addCountry_btn, 0, wxALL | wxALIGN_RIGHT, 5);

	rmCountry_btb = new wxButton(countries_sbSizer->GetStaticBox(), wxID_ANY, wxT("Remove"), wxDefaultPosition, wxDefaultSize, 0);
	countriesButtons_gSizer->Add(rmCountry_btb, 0, wxALL, 5);


	countries_sbSizer->Add(countriesButtons_gSizer, 0, wxEXPAND, 5);


	lists_gSizer->Add(countries_sbSizer, 1, wxALL | wxEXPAND, 5);

	wxStaticBoxSizer* participants_sbSizer;
	participants_sbSizer = new wxStaticBoxSizer(new wxStaticBox(mainPanel, wxID_ANY, wxT("Participants")), wxVERTICAL);

	participants_listBox = new wxListBox(participants_sbSizer->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0);
	participants_listBox->Append(wxT("Eliza"));
	participants_listBox->Append(wxT("Iosif"));
	participants_sbSizer->Add(participants_listBox, 1, wxALL | wxEXPAND, 5);

	wxGridSizer* participantsButtons_gSizer;
	participantsButtons_gSizer = new wxGridSizer(0, 2, 0, 0);

	addParticipant_btn = new wxButton(participants_sbSizer->GetStaticBox(), wxID_ANY, wxT("Add"), wxDefaultPosition, wxDefaultSize, 0);
	participantsButtons_gSizer->Add(addParticipant_btn, 0, wxALL | wxALIGN_RIGHT, 5);

	rmParticipant_btn = new wxButton(participants_sbSizer->GetStaticBox(), wxID_ANY, wxT("Remove"), wxDefaultPosition, wxDefaultSize, 0);
	participantsButtons_gSizer->Add(rmParticipant_btn, 0, wxALL, 5);


	participants_sbSizer->Add(participantsButtons_gSizer, 0, wxEXPAND, 5);


	lists_gSizer->Add(participants_sbSizer, 1, wxALL | wxEXPAND, 5);


	mainPanel_bSizer->Add(lists_gSizer, 1, wxEXPAND, 5);

	lists_staticline = new wxStaticLine(mainPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL);
	mainPanel_bSizer->Add(lists_staticline, 0, wxEXPAND | wxALL, 5);

	generatePairs_btn = new wxButton(mainPanel, wxID_ANY, wxT("Generate Pairs"), wxDefaultPosition, wxDefaultSize, 0);
	mainPanel_bSizer->Add(generatePairs_btn, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, 5);


	mainPanel->SetSizer(mainPanel_bSizer);
	mainPanel->Layout();
	mainPanel_bSizer->Fit(mainPanel);
	frameSizer->Add(mainPanel, 1, wxEXPAND, 5);


	this->SetSizer(frameSizer);
	this->Layout();

	this->Centre(wxBOTH);

	// Connect Events
	countries_menu->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(PairMaker_MainFrame::OnImportCountriesMenu), this, importCountriesXML_mI->GetId());
	countries_menu->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(PairMaker_MainFrame::OnExportCountriesMenu), this, exportCountriesXML_mI->GetId());
	countries_menu->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(PairMaker_MainFrame::OnClearCountriesMenu), this, clearCountries_mI->GetId());
	participants_menu->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(PairMaker_MainFrame::OnImportParticipantsMenu), this, importParticipantsXML_mI->GetId());
	participants_menu->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(PairMaker_MainFrame::OnExportParticipantsMenu), this, exportParticipantsXML_mI->GetId());
	participants_menu->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(PairMaker_MainFrame::OnClearParticipantsMenu), this, clearParticipants_mI->GetId());
	about_menu->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(PairMaker_MainFrame::OnAboutProgramMenu), this, about_menuItem->GetId());
	addCountry_btn->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PairMaker_MainFrame::AddCountryBtnClick), NULL, this);
	rmCountry_btb->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PairMaker_MainFrame::RemoveCountryBtnClick), NULL, this);
	addParticipant_btn->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PairMaker_MainFrame::AddParticipantBtnClick), NULL, this);
	rmParticipant_btn->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PairMaker_MainFrame::RemoveParticipantBtnClick), NULL, this);
	generatePairs_btn->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PairMaker_MainFrame::GeneratePairsBtnClick), NULL, this);
}

PairMaker_MainFrame::~PairMaker_MainFrame()
{
	// Disconnect Events
	addCountry_btn->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PairMaker_MainFrame::AddCountryBtnClick), NULL, this);
	rmCountry_btb->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PairMaker_MainFrame::RemoveCountryBtnClick), NULL, this);
	addParticipant_btn->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PairMaker_MainFrame::AddParticipantBtnClick), NULL, this);
	rmParticipant_btn->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PairMaker_MainFrame::RemoveParticipantBtnClick), NULL, this);
	generatePairs_btn->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PairMaker_MainFrame::GeneratePairsBtnClick), NULL, this);

}