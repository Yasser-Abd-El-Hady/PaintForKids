#ifndef ACTION_Save_H
#define ACTION_Save_H

#include <fstream>
#include "Action.h"
#include <string>

class ActionSave : public Action
{
	ofstream file;
	string file_name;
public:
	ActionSave(ApplicationManager* pApp);

	virtual bool ReadActionParameters();

	virtual void Execute();

};

#endif