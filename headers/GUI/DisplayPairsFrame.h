
#ifndef __DISPLAYPAIRS_FRAME__
#define __DISPLAYPAIRS_FRAME__

#include "wx/frame.h"
#include "wx/panel.h"
#include "wx/sizer.h"
#include "wx/statbox.h"
#include "wx/stattext.h"
#include "wx/listctrl.h"
#include "wx/filepicker.h"
#include "wx/button.h"
#include "wx/msgdlg.h"

#include "PairMaker.h"
#include "XMLhandler.h"

class DisplayPairsFrame : public wxFrame
{
private:
	void populatePairList();

protected:
	bool savedToFile = false;

	wxPanel*			mainPanel_panel;
	wxStaticText*		pageTitle_ST;
	wxListCtrl*			pairs_listCtrl;
	wxFilePickerCtrl*	saveCSV_filePicker;
	wxButton*			saveCSV_btn;
	wxButton*			finish_btn;

	PairMaker* pair_maker;

	// Virtual event handlers, overide them in your derived class
	virtual void SaveFileBtnClick(wxCommandEvent& event);
	virtual void FinishBtnClick(wxCommandEvent& event);


public:

	DisplayPairsFrame(
		wxWindow* parent,
		PairMaker* pair_maker,
		wxWindowID id = wxID_ANY,
		const wxString& title = wxT("MUN PairMaker - Display Pairs"),
		const wxPoint& pos = wxDefaultPosition,
		const wxSize& size = wxSize(500, 330),
		long style = wxDEFAULT_FRAME_STYLE | wxTAB_TRAVERSAL
	);

	~DisplayPairsFrame();

};

#endif // !__DISPLAYPAIRS_FRAME__
