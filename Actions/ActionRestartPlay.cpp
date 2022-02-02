#include "ActionRestartPlay.h"
#include "../ApplicationManager.h"
#include "../GUI/GUI.h"

ActionRestartPlay::ActionRestartPlay(ApplicationManager* pApp) : Action(pApp)
{}

void ActionRestartPlay::Execute()
{
	//Get a Pointer to the Interface
	GUI* pGUI = pManager->GetGUI();
	// to create New ToolBar
	pGUI->CreatePlayToolBar();
	// to return the figures
	pGUI->ClearDrawArea();

	// restart game also 
	pManager->TakeFigOfDrawMode();
	pManager->UpdateInterface();
	pManager->playType = 0;
	pManager->validCounter = 0;
	pManager->invalidCounter = 0;
	pManager->figType = 0;
	pManager->startPlay = 0;
	pGUI->PrintTempMessge("Restart Play!", 1000);
}