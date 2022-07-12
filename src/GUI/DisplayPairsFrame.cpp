#include "GUI/DisplayPairsFrame.h"

DisplayPairsFrame::DisplayPairsFrame( wxWindow* parent, PairMaker* pair_maker, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style )
	: wxFrame( parent, id, title, pos, size, style )
{
	this->pair_maker = pair_maker;

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

	pairs_listCtrl = new wxListCtrl( mainPanel_panel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_HRULES | wxLC_VRULES | wxLC_REPORT | wxLC_SORT_ASCENDING );
	panel_bSizer->Add( pairs_listCtrl, 1, wxALL|wxEXPAND, 5 );

	try {
		this->pair_maker->generatePairs();
		this->populatePairList();
	}
	catch (const std::runtime_error& ex) {
		wxMessageDialog* msg = new wxMessageDialog(
			this,
			std::string("Failed to create the pairs. Reason:\n") + ex.what(),
			"Failed to create the pairs",
			wxOK | wxICON_ERROR
		);

		msg->ShowModal();

		msg->Destroy();
		this->Destroy();
	}

	wxStaticBoxSizer* save_sbSizer;
	save_sbSizer = new wxStaticBoxSizer( new wxStaticBox( mainPanel_panel, wxID_ANY, wxT("Save to file") ), wxHORIZONTAL );

	saveCSV_filePicker = new wxFilePickerCtrl(
		save_sbSizer->GetStaticBox(),
		wxID_ANY,
		wxEmptyString,
		wxT("Select the directory and name for the pair file..."),
		wxT("Comma Separed Value files (*.csv)|*.csv"),
		wxDefaultPosition,
		wxDefaultSize,
		wxFD_SAVE | wxFD_OVERWRITE_PROMPT
	);
	save_sbSizer->Add( saveCSV_filePicker, 1, wxALL, 5 );

	saveCSV_btn = new wxButton( save_sbSizer->GetStaticBox(), wxID_ANY, wxT("Save"), wxDefaultPosition, wxDefaultSize, 0 );
	save_sbSizer->Add( saveCSV_btn, 0, wxALL, 5 );


	panel_bSizer->Add( save_sbSizer, 0, wxALL|wxEXPAND, 5 );

	wxBoxSizer* frameProperties_bSizer;
	frameProperties_bSizer = new wxBoxSizer( wxHORIZONTAL );

	finish_btn = new wxButton( mainPanel_panel, wxID_ANY, wxT("Finish"), wxDefaultPosition, wxDefaultSize, 0 );
	frameProperties_bSizer->Add( finish_btn, 0, wxALL, 5 );


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
}

DisplayPairsFrame::~DisplayPairsFrame()
{
	// Disconnect Events
	saveCSV_btn->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DisplayPairsFrame::SaveFileBtnClick ), NULL, this );
	finish_btn->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DisplayPairsFrame::FinishBtnClick ), NULL, this );

	delete this->pair_maker;
}

void DisplayPairsFrame::SaveFileBtnClick(wxCommandEvent& event)
{
	if (this->saveCSV_filePicker->GetPath().IsEmpty()) {
		wxMessageBox(
			wxString("You have not selected a file to save the pairs."),
			"Cannot save the pairs",
			wxOK | wxICON_ERROR,
			this
		);
		return;
	}

	this->pair_maker->writePairsToCSV(this->saveCSV_filePicker->GetPath().ToStdString(), ";");
	this->savedToFile = true;

	wxMessageBox(
		wxString("Pairs saved successfuly at:\n" + this->saveCSV_filePicker->GetPath()),
		"Pairs saved successfuly",
		wxOK | wxICON_INFORMATION,
		this
	);
}

void DisplayPairsFrame::FinishBtnClick(wxCommandEvent& event)
{
	if (!this->savedToFile) {
		wxMessageDialog dlg(
			this,
			wxString("You have not saved the generated pairs. Are you sure you want to exit?"),
			"Exit without saving the pairs",
			wxYES_NO | wxICON_WARNING
		);

		if (dlg.ShowModal() != wxID_YES) {
			return;
		}
	}

	this->Destroy();
}

void DisplayPairsFrame::populatePairList()
{
	wxListItem col_country;
	col_country.SetId(0);
	col_country.SetText(_("Country"));
	col_country.SetWidth(200);
	this->pairs_listCtrl->InsertColumn(0, col_country);

	wxListItem col_participant;
	col_participant.SetId(0);
	col_participant.SetText(_("Participant"));
	col_participant.SetWidth(200);
	this->pairs_listCtrl->InsertColumn(0, col_participant);

	for (const auto& pairs : this->pair_maker->getPairs()) {
		long itemIndex = this->pairs_listCtrl->InsertItem(0, pairs.second);
		this->pairs_listCtrl->SetItem(itemIndex, 1, pairs.first);
	}
}