
#include "wx/frame.h"
#include "wx/panel.h"
#include "wx/sizer.h"
#include "wx/stattext.h"
#include "wx/statline.h"
#include "wx/listbox.h"
#include "wx/textctrl.h"
#include "wx/button.h"


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