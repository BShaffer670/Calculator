#include "ButtonFactory.h"



ButtonFactory::ButtonFactory()
{
	
}

ButtonFactory::~ButtonFactory()
{

}

wxButton* ButtonFactory::MakeButton(cMain* _frame, int _id, wxString _label, int x, int y) {
	wxButton* btn = new wxButton(_frame, _id, _label, wxPoint(x, y), wxSize(50, 50));
	return btn;
}

wxButton* ButtonFactory::ClearButton(cMain* _frame) {
	wxButton* btn = new wxButton(_frame, 20, "C", wxPoint(10, 310), wxSize(50, 50));
	return btn;
}