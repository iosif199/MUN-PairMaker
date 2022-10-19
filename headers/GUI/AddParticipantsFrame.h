
#ifndef __ADDPARTICIPANTS_FRAME__
#define __ADDPARTICIPANTS_FRAME__

#include "wx/frame.h"
#include "wx/panel.h"
#include "wx/sizer.h"
#include "wx/stattext.h"
#include "wx/statline.h"
#include "wx/listbox.h"
#include "wx/textctrl.h"
#include "wx/button.h"
#include "wx/msgdlg.h"

#include "ParticipantList.h"


class AddParticipantsFrame : public wxFrame
{
private:

protected:
	wxPanel*		mainPanel;
	wxStaticText*	frameTitle_ST;
	wxStaticLine*	title_staticline;
	wxListBox*		newParticipants_listBox;
	wxStaticText*	participantName_staticText;
	wxTextCtrl*		participantName_textCtrl;
	wxButton*		addParticipant_btn;
	wxButton*		rmParticipant_btn;
	wxStaticLine*	m_staticline12;
	wxButton*		finish_btn;
	wxButton*		cancel_btn;

	ParticipantList*	plist;
	wxListBox*			parent_plist;

	// Virtual event handlers, overide them in your derived class
	virtual void OnParticipantName_Enter(wxCommandEvent& event);
	virtual void AddParticipantBtnClick(wxCommandEvent& event);
	virtual void RemoveParticipantBtnClick(wxCommandEvent& event);
	virtual void FinishBtnClick(wxCommandEvent& event);
	virtual void CancelBtnClick(wxCommandEvent& event);

	void AddParticipantFromTextCtrl();

public:

	AddParticipantsFrame(
		wxWindow* parent,
		ParticipantList* plist,
		wxListBox* parent_plist,
		wxWindowID id = wxID_ANY,
		const wxString& title = wxT("MUN PairMaker - Add Participants"),
		const wxPoint& pos = wxDefaultPosition,
		const wxSize& size = wxSize(380, 300),
		long style = wxCAPTION | wxRESIZE_BORDER | wxTAB_TRAVERSAL
	);

	~AddParticipantsFrame();
};

#endif // !__ADDPARTICIPANTS_FRAME__
