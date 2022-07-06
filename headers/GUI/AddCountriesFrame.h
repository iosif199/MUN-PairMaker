
#include "wx/frame.h"
#include "wx/panel.h"
#include "wx/sizer.h"
#include "wx/stattext.h"
#include "wx/statline.h"
#include "wx/listbox.h"
#include "wx/textctrl.h"
#include "wx/button.h"

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