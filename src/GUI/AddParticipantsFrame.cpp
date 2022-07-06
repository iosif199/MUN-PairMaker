#include "GUI/AddParticipantsFrame.h"

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