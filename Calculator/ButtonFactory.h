#pragma once
#include "wx/wx.h"
#include "cMain.h"

class ButtonFactory
{
private:
	cMain* calcFrame = nullptr;

public:
	ButtonFactory(cMain* _frame);
	~ButtonFactory();

	wxButton* ZeroButton();
	wxButton* OneButton();
	wxButton* TwoButton();
	wxButton* ThreeButton();
	wxButton* FourButton();
	wxButton* FiveButton();
	wxButton* SixButton();
	wxButton* SevenButton();
	wxButton* EightButton();
	wxButton* NineButton();
	wxButton* AdditionButton();
	wxButton* SubtractionButton();
	wxButton* MultiplicationButton();
	wxButton* DivisionButton();
	wxButton* ModulusButton();
	wxButton* EqualsButton();
	wxButton* BinaryButton();
	wxButton* HexButton();
	wxButton* DecimalButton();
	wxButton* ClearButton();
};

