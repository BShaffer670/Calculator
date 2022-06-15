#pragma once
#include "wx/wx.h"
#include "cMain.h"

class ButtonFactory
{
private:
	cMain* calcFrame = nullptr;

public:
	ButtonFactory();
	~ButtonFactory();

	wxButton* MakeButton(cMain* _frame, int _id, wxString _label, int x, int y);
	wxButton* ClearButton(cMain* _frame);
};

