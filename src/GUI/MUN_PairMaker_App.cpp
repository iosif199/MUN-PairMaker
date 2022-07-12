#include "GUI/MUN_PairMaker_App.h"

bool MUN_PairMaker_App::OnInit()
{
	if (!wxApp::OnInit()) {
		return false;
	}

	PairMaker_MainFrame* mainFrame = new PairMaker_MainFrame(NULL);
	mainFrame->Show(true);

	return true;
}
