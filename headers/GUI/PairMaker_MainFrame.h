
#ifndef __PAIRMAKER_MAINFRAME__
#define __PAIRMAKER_MAINFRAME__

#include "wx/frame.h"
#include "wx/panel.h"
#include "wx/sizer.h"
#include "wx/statbox.h"
#include "wx/menu.h"
#include "wx/statline.h"
#include "wx/stattext.h"
#include "wx/listbox.h"
#include "wx/button.h"
#include "wx/msgdlg.h"
#include "wx/choicdlg.h"
#include "wx/filepicker.h"

#include "GUI/AddCountriesFrame.h"
#include "GUI/AddParticipantsFrame.h"
#include "GUI/DisplayPairsFrame.h"
#include "GUI/AboutDialog.h"

#include "XMLhandler.h"
#include "CountryList.h"
#include "ParticipantList.h"
#include "PairMaker.h"

class PairMaker_MainFrame : public wxFrame
{
private:
	typedef enum {
		IMPORT_COUNTRIES_XML = wxID_HIGHEST + 1,
		EXPORT_COUNTRIES_XML,
		CLEAR_COUNTRIES_LIST,
		IMPORT_PARTICIPANTS_XML,
		EXPORT_PARTICIPANTS_XML,
		CLEAR_PARTICIPANTS_LIST,
		ABOUT_PROGRAM
	} MENU_ITEM_IDS;

protected:
	wxMenuBar*		menubar;
	wxMenu*			countries_menu;
	wxMenu*			participants_menu;
	wxMenu*			about_menu;
	wxPanel*		mainPanel;
	wxStaticText*	windowTitle_ST;
	wxStaticLine*	title_staticline;
	wxListBox*		countries_listBox;
	wxButton*		addCountry_btn;
	wxButton*		rmCountry_btn;
	wxListBox*		participants_listBox;
	wxButton*		addParticipant_btn;
	wxButton*		rmParticipant_btn;
	wxStaticLine*	lists_staticline;
	wxButton*		generatePairs_btn;

	CountryList*		countries;
	ParticipantList*	participants;

	void reloadCountries();
	void reloadParticipants();

	// Virtual event handlers, overide them in your derived class
	virtual void OnImportCountriesMenu(wxCommandEvent& event);
	virtual void OnExportCountriesMenu(wxCommandEvent& event);
	virtual void OnClearCountriesMenu(wxCommandEvent& event);
	virtual void OnImportParticipantsMenu(wxCommandEvent& event);
	virtual void OnExportParticipantsMenu(wxCommandEvent& event);
	virtual void OnClearParticipantsMenu(wxCommandEvent& event);
	virtual void OnAboutProgramMenu(wxCommandEvent& event);

	virtual void AddCountryBtnClick(wxCommandEvent& event);
	virtual void RemoveCountryBtnClick(wxCommandEvent& event);
	virtual void AddParticipantBtnClick(wxCommandEvent& event);
	virtual void RemoveParticipantBtnClick(wxCommandEvent& event);
	virtual void GeneratePairsBtnClick(wxCommandEvent& event);


public:

	PairMaker_MainFrame(
		wxWindow* parent,
		wxWindowID id = wxID_ANY,
		const wxString& title = wxT("MUN PairMaker"),
		const wxPoint& pos = wxDefaultPosition,
		const wxSize& size = wxSize(600, 450),
		long style = wxDEFAULT_FRAME_STYLE | wxTAB_TRAVERSAL
	);

	~PairMaker_MainFrame();
};

#endif // !__PAIRMAKER_MAINFRAME__
