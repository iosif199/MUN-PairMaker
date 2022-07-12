#include "GUI/AboutDialog.h"

AboutDialog::AboutDialog( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style )
	: wxDialog( parent, id, title, pos, size, style )
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