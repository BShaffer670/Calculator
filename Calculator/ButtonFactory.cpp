#include "ButtonFactory.h"



ButtonFactory::ButtonFactory()
{
	
}

ButtonFactory::~ButtonFactory()
{

}

wxButton* ButtonFactory::MakeButton(cMain* _frame, int _id, wxString _label, int xPos, int yPos) {
	wxButton* btn = new wxButton(_frame, _id, _label, wxPoint(xPos, yPos), wxSize(50, 50));
	return btn;
}