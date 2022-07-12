#include "GUI/PairMaker_MainFrame.h"

PairMaker_MainFrame::PairMaker_MainFrame(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
	: wxFrame(parent, id, title, pos, size, style)
{
	this->SetSizeHints(wxDefaultSize, wxDefaultSize);

	menubar = new wxMenuBar(0);
	countries_menu = new wxMenu();
	wxMenuItem* importCountriesXML_mI;
	importCountriesXML_mI = new wxMenuItem(countries_menu, MENU_ITEM_IDS::IMPORT_COUNTRIES_XML, wxString(wxT("Import from XML")), wxEmptyString, wxITEM_NORMAL);
	countries_menu->Append(importCountriesXML_mI);

	wxMenuItem* exportCountriesXML_mI;
	exportCountriesXML_mI = new wxMenuItem(countries_menu, MENU_ITEM_IDS::EXPORT_COUNTRIES_XML, wxString(wxT("Export to XML")), wxEmptyString, wxITEM_NORMAL);
	countries_menu->Append(exportCountriesXML_mI);

	countries_menu->AppendSeparator();

	wxMenuItem* clearCountries_mI;
	clearCountries_mI = new wxMenuItem(countries_menu, MENU_ITEM_IDS::CLEAR_COUNTRIES_LIST, wxString(wxT("Clear")), wxEmptyString, wxITEM_NORMAL);
	countries_menu->Append(clearCountries_mI);

	menubar->Append(countries_menu, wxT("Countries"));

	participants_menu = new wxMenu();
	wxMenuItem* importParticipantsXML_mI;
	importParticipantsXML_mI = new wxMenuItem(participants_menu, MENU_ITEM_IDS::IMPORT_PARTICIPANTS_XML, wxString(wxT("Import from XML")), wxEmptyString, wxITEM_NORMAL);
	participants_menu->Append(importParticipantsXML_mI);

	wxMenuItem* exportParticipantsXML_mI;
	exportParticipantsXML_mI = new wxMenuItem(participants_menu, MENU_ITEM_IDS::EXPORT_PARTICIPANTS_XML, wxString(wxT("Export to XML")), wxEmptyString, wxITEM_NORMAL);
	participants_menu->Append(exportParticipantsXML_mI);

	participants_menu->AppendSeparator();

	wxMenuItem* clearParticipants_mI;
	clearParticipants_mI = new wxMenuItem(participants_menu, MENU_ITEM_IDS::CLEAR_PARTICIPANTS_LIST, wxString(wxT("Clear")), wxEmptyString, wxITEM_NORMAL);
	participants_menu->Append(clearParticipants_mI);

	menubar->Append(participants_menu, wxT("Participants"));

	about_menu = new wxMenu();
	wxMenuItem* about_menuItem;
	about_menuItem = new wxMenuItem(about_menu, MENU_ITEM_IDS::ABOUT_PROGRAM, wxString(wxT("About this Program")), wxEmptyString, wxITEM_NORMAL);
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

	countries_listBox = new wxListBox(countries_sbSizer->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, wxLB_SORT);
	countries_sbSizer->Add(countries_listBox, 1, wxALL | wxEXPAND, 5);

	wxGridSizer* countriesButtons_gSizer;
	countriesButtons_gSizer = new wxGridSizer(0, 2, 0, 0);

	addCountry_btn = new wxButton(countries_sbSizer->GetStaticBox(), wxID_ANY, wxT("Add"), wxDefaultPosition, wxDefaultSize, 0);
	countriesButtons_gSizer->Add(addCountry_btn, 0, wxALL | wxALIGN_RIGHT, 5);

	rmCountry_btn = new wxButton(countries_sbSizer->GetStaticBox(), wxID_ANY, wxT("Remove"), wxDefaultPosition, wxDefaultSize, 0);
	countriesButtons_gSizer->Add(rmCountry_btn, 0, wxALL, 5);


	countries_sbSizer->Add(countriesButtons_gSizer, 0, wxEXPAND, 5);


	lists_gSizer->Add(countries_sbSizer, 1, wxALL | wxEXPAND, 5);

	wxStaticBoxSizer* participants_sbSizer;
	participants_sbSizer = new wxStaticBoxSizer(new wxStaticBox(mainPanel, wxID_ANY, wxT("Participants")), wxVERTICAL);

	participants_listBox = new wxListBox(participants_sbSizer->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, wxLB_SORT);
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
	rmCountry_btn->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PairMaker_MainFrame::RemoveCountryBtnClick), NULL, this);
	addParticipant_btn->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PairMaker_MainFrame::AddParticipantBtnClick), NULL, this);
	rmParticipant_btn->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PairMaker_MainFrame::RemoveParticipantBtnClick), NULL, this);
	generatePairs_btn->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PairMaker_MainFrame::GeneratePairsBtnClick), NULL, this);
	
	// Set a seed for rand
	srand(time(NULL));

	this->countries = new CountryList();
	this->participants = new ParticipantList();

	/*this->countries->addCountry(Country("Greece"));
	this->countries->addCountry(Country("Germany"));
	this->countries->addCountry(Country("Lebanon"));
	this->countries_listBox->Append("Greece");
	this->countries_listBox->Append("Germany");
	this->countries_listBox->Append("Lebanon");

	this->participants->addParticipant(Participant("Iosif"));
	this->participants->addParticipant(Participant("Eliza"));
	this->participants_listBox->Append("Iosif");
	this->participants_listBox->Append("Eliza");*/
}

PairMaker_MainFrame::~PairMaker_MainFrame()
{
	// Disconnect Events
	addCountry_btn->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PairMaker_MainFrame::AddCountryBtnClick), NULL, this);
	rmCountry_btn->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PairMaker_MainFrame::RemoveCountryBtnClick), NULL, this);
	addParticipant_btn->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PairMaker_MainFrame::AddParticipantBtnClick), NULL, this);
	rmParticipant_btn->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PairMaker_MainFrame::RemoveParticipantBtnClick), NULL, this);
	generatePairs_btn->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PairMaker_MainFrame::GeneratePairsBtnClick), NULL, this);

	delete this->countries;
	delete this->participants;
}

void PairMaker_MainFrame::reloadCountries()
{
	this->countries_listBox->Clear();

	for (const auto& c : *this->countries->getCountries()) {
		this->countries_listBox->Append(c.getName());
	}
}

void PairMaker_MainFrame::reloadParticipants()
{
	this->participants_listBox->Clear();

	for (const auto& p : *this->participants->getParticipants()) {
		this->participants_listBox->Append(p.getName());
	}
}

void PairMaker_MainFrame::OnImportCountriesMenu(wxCommandEvent& event)
{
	wxFileDialog file_dlg(
		this,
		_("Select the XML containing the coutries..."),
		wxEmptyString,
		wxEmptyString,
		_("XML files (*.xml)|*.xml"),
		wxFD_OPEN | wxFD_FILE_MUST_EXIST
	);

	if (file_dlg.ShowModal() == wxID_OK) {
		try {
			XMLhandler::loadCountriesFromXML(file_dlg.GetPath().c_str(), this->countries);
			this->reloadCountries();
		}
		catch (std::runtime_error& ex) {
			wxMessageBox(
				wxString(ex.what()),
				"Cannot load data from XML",
				wxOK | wxICON_ERROR,
				this
			);
		}
		
	}
}

void PairMaker_MainFrame::OnExportCountriesMenu(wxCommandEvent& event)
{
	wxFileDialog saveFileDialog(
		this,
		_("Select the folder and file name to save the countries..."),
		wxEmptyString,
		wxEmptyString,
		_("XML files (*.xml)|*.xml"),
		wxFD_SAVE | wxFD_OVERWRITE_PROMPT
	);

	// the user changed idea...
	if (saveFileDialog.ShowModal() == wxID_CANCEL) {
		return;
	}

	XMLhandler::saveCountriesToXML(saveFileDialog.GetPath(), this->countries);
}

void PairMaker_MainFrame::OnClearCountriesMenu(wxCommandEvent& event)
{
	wxMessageDialog* dlg = new wxMessageDialog(
		this,
		wxString("Are you sure you want to clear the country list?"),
		"Clear country list",
		wxYES_NO | wxICON_WARNING
	);

	if (dlg->ShowModal() == wxID_YES) {
		this->countries->clearList();
		this->countries_listBox->Clear();
	}

	dlg->Destroy();
}

void PairMaker_MainFrame::OnImportParticipantsMenu(wxCommandEvent& event)
{
	wxFileDialog file_dlg(
		this,
		_("Select the XML containing the participants..."),
		wxEmptyString,
		wxEmptyString,
		_("XML files (*.xml)|*.xml"),
		wxFD_OPEN | wxFD_FILE_MUST_EXIST
	);

	if (file_dlg.ShowModal() == wxID_OK) {
		try {
			XMLhandler::loadParticipantsFromXML(file_dlg.GetPath().c_str(), this->participants);
			this->reloadParticipants();
		}
		catch (std::runtime_error &ex) {
			wxMessageBox(
				wxString(ex.what()),
				"Cannot load data from XML",
				wxOK | wxICON_ERROR,
				this
			);
		}
	}
}

void PairMaker_MainFrame::OnExportParticipantsMenu(wxCommandEvent& event)
{
	wxFileDialog saveFileDialog(
		this,
		_("Select the folder and file name to save the participants..."),
		wxEmptyString,
		wxEmptyString,
		_("XML files (*.xml)|*.xml"),
		wxFD_SAVE | wxFD_OVERWRITE_PROMPT
	);

	// The user changed idea...
	if (saveFileDialog.ShowModal() == wxID_CANCEL) {
		return;
	}

	XMLhandler::saveParticipantsToXML(saveFileDialog.GetPath(), this->participants);
}

void PairMaker_MainFrame::OnClearParticipantsMenu(wxCommandEvent& event)
{
	wxMessageDialog* dlg = new wxMessageDialog(
		this,
		wxString("Are you sure you want to clear the participant list?"),
		"Clear participant list",
		wxYES_NO | wxICON_WARNING
	);

	if (dlg->ShowModal() == wxID_YES) {
		this->participants->clearList();
		this->participants_listBox->Clear();
	}

	dlg->Destroy();
}

void PairMaker_MainFrame::OnAboutProgramMenu(wxCommandEvent& event)
{
	/*
	wxAboutDialogInfo dlg;

	dlg.AddDeveloper("Iosif Saad");
	dlg.SetName("MUN PairMaker");
	dlg.SetVersion("1.0.0");
	dlg.SetCopyright("(C) 2022");

	wxAboutBox(dlg);*/

	AboutDialog* about = new AboutDialog(this);
	about->Show();
}

void PairMaker_MainFrame::AddCountryBtnClick(wxCommandEvent& event)
{
	AddCountriesFrame* add_c = new AddCountriesFrame(this, this->countries, this->countries_listBox);
	add_c->Show();
}

void PairMaker_MainFrame::RemoveCountryBtnClick(wxCommandEvent& event)
{
	int selected_index = this->countries_listBox->GetSelection();

	// Check if there are countries in the list
	if (this->countries_listBox->GetCount() == 0) {
		wxMessageBox(
			wxString("The country list is empty."),
			"Cannot remove country",
			wxOK | wxICON_ERROR,
			this
		);

		return;
	}

	// Check if the user selected an item
	if (selected_index < 0) {
		wxMessageBox(
			wxString("You have not selected a country to be deleted."),
			"Cannot remove country",
			wxOK | wxICON_WARNING,
			this
		);

		return;
	}

	this->countries->removeCountry(
		this->countries_listBox->GetString(selected_index).ToStdString()
	);

	this->countries_listBox->Delete(selected_index);
}

void PairMaker_MainFrame::AddParticipantBtnClick(wxCommandEvent& event)
{
	AddParticipantsFrame* add_p = new AddParticipantsFrame(this, this->participants, this->participants_listBox);
	add_p->Show();
}

void PairMaker_MainFrame::RemoveParticipantBtnClick(wxCommandEvent& event)
{
	int selected_index = this->participants_listBox->GetSelection();

	// Check if there are participants in the list
	if (this->participants_listBox->GetCount() == 0) {
		wxMessageBox(
			wxString("The participant list is empty."),
			"Cannot remove participant",
			wxOK | wxICON_ERROR,
			this
		);

		return;
	}

	// Check if the user selected an item
	if (selected_index < 0) {
		wxMessageBox(
			wxString("You have not selected a participant to be deleted."),
			"Cannot remove participant",
			wxOK | wxICON_WARNING,
			this
		);

		return;
	}

	this->participants->removeParticipant(
		this->participants_listBox->GetString(selected_index).ToStdString()
	);

	this->participants_listBox->Delete(selected_index);
}

void PairMaker_MainFrame::GeneratePairsBtnClick(wxCommandEvent& event)
{
	DisplayPairsFrame* pair_frame = new DisplayPairsFrame(
		this,
		new PairMaker(this->countries, this->participants)
	);

	pair_frame->Show();
}
