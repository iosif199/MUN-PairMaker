
#include "wx/frame.h"
#include "wx/panel.h"
#include "wx/sizer.h"
#include "wx/statbox.h"
#include "wx/stattext.h"
#include "wx/listctrl.h"
#include "wx/filepicker.h"
#include "wx/button.h"

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