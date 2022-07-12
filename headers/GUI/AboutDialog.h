
#ifndef __ABOUT_DIALOG__
#define __ABOUT_DIALOG__

#include "wx/dialog.h"
#include "wx/panel.h"
#include "wx/statline.h"
#include "wx/stattext.h"
#include "wx/sizer.h"
#include "wx/aboutdlg.h"

class AboutDialog : public wxDialog
{
private:

protected:
	// Some very well named variables as you can see...
	wxPanel*	  m_panel2;
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

	AboutDialog(
		wxWindow* parent,
		wxWindowID id = wxID_ANY,
		const wxString& title = wxT("About MUN PairMaker"),
		const wxPoint& pos = wxDefaultPosition,
		const wxSize& size = wxSize(400, 288),
		long style = wxDEFAULT_DIALOG_STYLE | wxSTAY_ON_TOP
	);

	~AboutDialog();
};

#endif // !__ABOUT_DIALOG__
