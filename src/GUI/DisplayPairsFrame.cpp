#include "GUI/DisplayPairsFrame.h"

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