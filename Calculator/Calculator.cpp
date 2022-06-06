#include "Calculator.h"

wxIMPLEMENT_APP(Calculator);

Calculator::Calculator() {

}

Calculator::~Calculator() {

}

bool Calculator::OnInit() {
	m_frame1 = new cMain();
	m_frame1->Show();

	return true;
}
