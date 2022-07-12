
#ifndef __ADDCOUNTRIES_FRAME__
#define __ADDCOUNTRIES_FRAME__

#include "wx/frame.h"
#include "wx/panel.h"
#include "wx/sizer.h"
#include "wx/stattext.h"
#include "wx/statline.h"
#include "wx/listbox.h"
#include "wx/textctrl.h"
#include "wx/button.h"
#include "wx/msgdlg.h"

#include "CountryList.h"

class AddCountriesFrame : public wxFrame
{
private:

protected:
	wxPanel*		mainPanel;
	wxStaticText*	frameTitle_ST;
	wxStaticLine*	title_staticline;
	wxListBox*		newCountries_listBox;
	wxStaticText*	countryName_staticText;
	wxTextCtrl*		countryName_textCtrl;
	wxButton*		addCountry_btn;
	wxButton*		rmCountry_btn;
	wxStaticLine*	m_staticline9;
	wxButton*		finish_btn;
	wxButton*		cancel_btn;

	CountryList*	clist;
	wxListBox*		parent_list;

	// Virtual event handlers, overide them in your derived class
	virtual void AddCountryBtnClick(wxCommandEvent& event);
	virtual void RemoveCountryBtnClick(wxCommandEvent& event);
	virtual void FinishBtnClick(wxCommandEvent& event);
	virtual void CancelBtnClick(wxCommandEvent& event);


public:

	AddCountriesFrame(
		wxWindow* parent,
		CountryList* clist,
		wxListBox* parent_list,
		wxWindowID id = wxID_ANY,
		const wxString& title = wxT("MUN PairMaker - Add Countries"),
		const wxPoint& pos = wxDefaultPosition,
		const wxSize& size = wxSize(380, 300),
		long style = wxCAPTION | wxRESIZE_BORDER | wxTAB_TRAVERSAL
	);

	~AddCountriesFrame();
};

#endif // !__ADDCOUNTRIES_FRAME__
