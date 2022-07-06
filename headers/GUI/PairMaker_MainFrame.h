
#include "wx/frame.h"
#include "wx/panel.h"
#include "wx/sizer.h"
#include "wx/statbox.h"
#include "wx/menu.h"
#include "wx/statline.h"
#include "wx/stattext.h"
#include "wx/listbox.h"
#include "wx/button.h"

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