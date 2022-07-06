#ifndef __MUN_PAIRMAKER_APP__
#define __MUN_PAIRMAKER_APP__

#include "wx/wx.h"
#include "GUI/PairMaker_MainFrame.h"

class MUN_PairMaker_App : public wxApp
{
public:
	virtual bool OnInit();
};

wxIMPLEMENT_APP(MUN_PairMaker_App);

#endif // !__MUN_PAIRMAKER_APP__