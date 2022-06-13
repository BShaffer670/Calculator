#include "ButtonFactory.h"



ButtonFactory::ButtonFactory(cMain* _frame)
{
	calcFrame = _frame;
}

ButtonFactory::~ButtonFactory()
{

}

wxButton* ButtonFactory::ZeroButton() {
	wxButton* btn = new wxButton(calcFrame, 10, "0", wxPoint(60, 310), wxSize(50, 50));
	return btn;
}
wxButton* ButtonFactory::OneButton() {
	wxButton* btn = new wxButton(calcFrame, 1, "1", wxPoint(10, 260), wxSize(50, 50));
	return btn;
}
wxButton* ButtonFactory::TwoButton() {
	wxButton* btn = new wxButton(calcFrame, 2, "2", wxPoint(60, 260), wxSize(50, 50));
	return btn;
}
wxButton* ButtonFactory::ThreeButton() {
	wxButton* btn = new wxButton(calcFrame, 3, "3", wxPoint(110, 260), wxSize(50, 50));
	return btn;
}
wxButton* ButtonFactory::FourButton() {
	wxButton* btn = new wxButton(calcFrame, 4, "4", wxPoint(10, 210), wxSize(50, 50));
	return btn;
}
wxButton* ButtonFactory::FiveButton() {
	wxButton* btn = new wxButton(calcFrame, 5, "5", wxPoint(60, 210), wxSize(50, 50));
	return btn;
}
wxButton* ButtonFactory::SixButton() {
	wxButton* btn = new wxButton(calcFrame, 6, "6", wxPoint(110, 210), wxSize(50, 50));
	return btn;
}
wxButton* ButtonFactory::SevenButton() {
	wxButton* btn = new wxButton(calcFrame, 7, "7", wxPoint(10, 160), wxSize(50, 50));
	return btn;
}
wxButton* ButtonFactory::EightButton() {
	wxButton* btn = new wxButton(calcFrame, 8, "8", wxPoint(60, 160), wxSize(50, 50));
	return btn;
}
wxButton* ButtonFactory::NineButton() {
	wxButton* btn = new wxButton(calcFrame, 9, "9", wxPoint(110, 160), wxSize(50, 50));
	return btn;
}
wxButton* ButtonFactory::AdditionButton() {
	wxButton* btn = new wxButton(calcFrame, 11, "+", wxPoint(160, 310), wxSize(50, 50));
	return btn;
}
wxButton* ButtonFactory::SubtractionButton() {
	wxButton* btn = new wxButton(calcFrame, 12, "-", wxPoint(160, 260), wxSize(50, 50));
	return btn;
}
wxButton* ButtonFactory::MultiplicationButton() {
	wxButton* btn = new wxButton(calcFrame, 13, "*", wxPoint(160, 210), wxSize(50, 50));
	return btn;
}
wxButton* ButtonFactory::DivisionButton() {
	wxButton* btn = new wxButton(calcFrame, 14, "/", wxPoint(160, 160), wxSize(50, 50));
	return btn;
}
wxButton* ButtonFactory::ModulusButton() {
	wxButton* btn = new wxButton(calcFrame, 15, "%", wxPoint(160, 110), wxSize(50, 50));
	return btn;
}
wxButton* ButtonFactory::EqualsButton() {
	wxButton* btn = new wxButton(calcFrame, 16, "=", wxPoint(110, 310), wxSize(50, 50));
	return btn;
}
wxButton* ButtonFactory::BinaryButton() {
	wxButton* btn = new wxButton(calcFrame, 17, "bin", wxPoint(60, 110), wxSize(50, 50));
	return btn;
}
wxButton* ButtonFactory::HexButton() {
	wxButton* btn = new wxButton(calcFrame, 18, "hex", wxPoint(110, 110), wxSize(50, 50));
	return btn;
}
wxButton* ButtonFactory::DecimalButton() {
	wxButton* btn = new wxButton(calcFrame, 19, "dec", wxPoint(10, 110), wxSize(50, 50));
	return btn;
}
wxButton* ButtonFactory::ClearButton() {
	wxButton* btn = new wxButton(calcFrame, 20, "C", wxPoint(10, 310), wxSize(50, 50));
	return btn;
}