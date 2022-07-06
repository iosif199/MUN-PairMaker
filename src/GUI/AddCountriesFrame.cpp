#include "GUI/AddCountriesFrame.h"

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