///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/stattext.h>
#include <wx/statline.h>
#include <wx/listbox.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/statbox.h>
#include <wx/panel.h>
#include <wx/frame.h>
#include <wx/textctrl.h>
#include <wx/listctrl.h>
#include <wx/filepicker.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class PairMaker_MainFrame
///////////////////////////////////////////////////////////////////////////////
class PairMaker_MainFrame : public wxFrame
{
	private:

	protected:
		wxMenuBar* menubar;
		wxMenu* countries_menu;
		wxMenu* participants_menu;
		wxMenu* about_menu;
		wxPanel* mainPanel;
		wxStaticText* windowTitle_ST;
		wxStaticLine* title_staticline;
		wxListBox* countries_listBox;
		wxButton* addCountry_btn;
		wxButton* rmCountry_btb;
		wxListBox* participants_listBox;
		wxButton* addParticipant_btn;
		wxButton* rmParticipant_btn;
		wxStaticLine* lists_staticline;
		wxButton* generatePairs_btn;

		// Virtual event handlers, overide them in your derived class
		virtual void OnImportCountriesMenu( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnExportCountriesMenu( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClearCountriesMenu( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnImportParticipantsMenu( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnExportParticipantsMenu( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClearParticipantsMenu( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnAboutProgramMenu( wxCommandEvent& event ) { event.Skip(); }
		virtual void AddCountryBtnClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void RemoveCountryBtnClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void AddParticipantBtnClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void RemoveParticipantBtnClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void GeneratePairsBtnClick( wxCommandEvent& event ) { event.Skip(); }


	public:

		PairMaker_MainFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("MUN PairMaker"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 455,410 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~PairMaker_MainFrame();

};

///////////////////////////////////////////////////////////////////////////////
/// Class AddCountriesFrame
///////////////////////////////////////////////////////////////////////////////
class AddCountriesFrame : public wxFrame
{
	private:

	protected:
		wxPanel* mainPanel;
		wxStaticText* frameTitle_ST;
		wxStaticLine* title_staticline;
		wxListBox* newCountries_listBox;
		wxStaticText* countryName_staticText;
		wxTextCtrl* countryName_textCtrl;
		wxButton* addCountry_btn;
		wxButton* rmCountry_btn;
		wxStaticLine* m_staticline9;
		wxButton* finish_btn;
		wxButton* cancel_btn;

		// Virtual event handlers, overide them in your derived class
		virtual void AddCountryBtnClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void RemoveCountryBtnClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void FinishBtnClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void CancelBtnClick( wxCommandEvent& event ) { event.Skip(); }


	public:

		AddCountriesFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("MUN PairMaker - Add Countries"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 380,300 ), long style = wxCAPTION|wxTAB_TRAVERSAL );

		~AddCountriesFrame();

};

///////////////////////////////////////////////////////////////////////////////
/// Class AddParticipantsFrame
///////////////////////////////////////////////////////////////////////////////
class AddParticipantsFrame : public wxFrame
{
	private:

	protected:
		wxPanel* mainPanel;
		wxStaticText* frameTitle_ST;
		wxStaticLine* title_staticline;
		wxListBox* newParticipants_listBox;
		wxStaticText* participantName_staticText;
		wxTextCtrl* participantName_textCtrl;
		wxButton* addParticipant_btn;
		wxButton* rmParticipant_btn;
		wxStaticLine* m_staticline12;
		wxButton* finish_btn;
		wxButton* cancel_btn;

		// Virtual event handlers, overide them in your derived class
		virtual void AddParticipantBtnClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void RemoveParticipantBtnClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void FinishBtnClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void CancelBtnClick( wxCommandEvent& event ) { event.Skip(); }


	public:

		AddParticipantsFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("MUN PairMaker - Add Participants"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 380,300 ), long style = wxCAPTION|wxTAB_TRAVERSAL );

		~AddParticipantsFrame();

};

///////////////////////////////////////////////////////////////////////////////
/// Class DisplayPairsFrame
///////////////////////////////////////////////////////////////////////////////
class DisplayPairsFrame : public wxFrame
{
	private:

	protected:
		wxPanel* mainPanel_panel;
		wxStaticText* pageTitle_ST;
		wxListCtrl* pairs_listCtrl;
		wxDirPickerCtrl* saveCSV_dirPicker;
		wxButton* saveCSV_btn;
		wxButton* finish_btn;
		wxButton* cancel_btn;

		// Virtual event handlers, overide them in your derived class
		virtual void SaveFileBtnClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void FinishBtnClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void CancelBtnClick( wxCommandEvent& event ) { event.Skip(); }


	public:

		DisplayPairsFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("MUN PairMaker - Display Pairs"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,331 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~DisplayPairsFrame();

};

///////////////////////////////////////////////////////////////////////////////
/// Class AboutDialog
///////////////////////////////////////////////////////////////////////////////
class AboutDialog : public wxDialog
{
	private:

	protected:
		wxPanel* m_panel2;
		wxStaticText* m_staticText9;
		wxStaticText* m_staticText10;
		wxStaticText* m_staticText27;
		wxStaticLine* m_staticline7;
		wxStaticText* m_staticText11;
		wxStaticText* m_staticText71;
		wxStaticText* m_staticText81;
		wxStaticText* m_staticText7;
		wxStaticText* m_staticText8;
		wxStaticText* m_staticText12;
		wxStaticText* m_staticText13;
		wxStaticText* m_staticText121;
		wxStaticText* m_staticText131;
		wxStaticLine* m_staticline8;

	public:

		AboutDialog( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("About MUN PairMaker"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 400,288 ), long style = wxDEFAULT_DIALOG_STYLE|wxSTAY_ON_TOP );
		~AboutDialog();

};

