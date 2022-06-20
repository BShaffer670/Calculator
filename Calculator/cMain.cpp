#include "cMain.h"
#include"ButtonFactory.h"
#include "CalculatorProcessor.h"
#include <string>

wxBEGIN_EVENT_TABLE(cMain, wxFrame)

EVT_BUTTON(wxID_ANY, OnButtonClicked)

wxEND_EVENT_TABLE()

wxString output;
int num2;
char op = ' ';

CalculatorProcessor* processor = CalculatorProcessor::GetInstance();

cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(30, 30), wxSize(240, 410)) {

	wxFont font(24, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);

	text = new wxTextCtrl(this, wxID_ANY, "", wxPoint(10, 10), wxSize(200, 100));

	ButtonFactory factory = ButtonFactory();

	btn = factory.MakeButton(this, 10, "0", 60, 310); //Zero
	btn = factory.MakeButton(this, 1, "1", 10, 260); //One
	btn = factory.MakeButton(this, 2, "2", 60, 260); //Two
	btn = factory.MakeButton(this, 3, "3", 110, 260); //Three
	btn = factory.MakeButton(this, 4, "4", 10, 210); //Four
	btn = factory.MakeButton(this, 5, "5", 60, 210); //Five
	btn = factory.MakeButton(this, 6, "6", 110, 210); //Six
	btn = factory.MakeButton(this, 7, "7", 10, 160); //Seven
	btn = factory.MakeButton(this, 8, "8", 60, 160); //Eight
	btn = factory.MakeButton(this, 9, "9", 110, 160); //Nine
	btn = factory.MakeButton(this, 11, "+", 160, 310); //Add
	btn = factory.MakeButton(this, 12, "-", 160, 260); //Subtract
	btn = factory.MakeButton(this, 13, "*", 160, 210); //Mult
	btn = factory.MakeButton(this, 14, "/", 160, 160); //Div
	btn = factory.MakeButton(this, 15, "%", 160, 110); //Mod
	btn = factory.MakeButton(this, 16, "=", 110, 310); //Equal
	btn = factory.MakeButton(this, 17, "bin", 60, 110); //Bin
	btn = factory.MakeButton(this, 18, "hex", 110, 110); //Hex
	btn = factory.MakeButton(this, 19, "dec", 10, 110); //Dec
	btn = factory.ClearButton(this); //Clear
	
	

}
cMain::~cMain() {
	delete[]btn;
}

void cMain::OnButtonClicked(wxCommandEvent& evt) {

	wxButton* onBtn = dynamic_cast<wxButton*>(evt.GetEventObject());

	int id = evt.GetId();
	if (id < 11) {
		output += onBtn->GetLabel();
		text->AppendText(onBtn->GetLabel());		
	}
	else if(id == 11){
		text->Clear();
		processor->SetBaseNumber(wxAtoi(output));
		output = "";
		op = '+';
	}
	else if (id == 12) {
		text->Clear();
		processor->SetBaseNumber(wxAtoi(output));
		output = "";
		op = '-';
	}
	else if (id == 13) {
		text->Clear();
		processor->SetBaseNumber(wxAtoi(output));
		output = "";
		op = '*';
	}
	else if (id == 14) {
		text->Clear();
		processor->SetBaseNumber(wxAtoi(output));
		output = "";
		op = '/';
	}
	else if (id == 15) {
		text->Clear();
		processor->SetBaseNumber(wxAtoi(output));
		output = "";
		op = '%';
	}
	else if (id == 16) {
		if (op == '+') {
			processor->Add(wxAtoi(output));
		}
		else if (op == '-') {
			processor->Subtract(wxAtoi(output));
		}
		else if (op == '*') {
			processor->Multiply(wxAtoi(output));
		}
		else if (op == '/') {
			processor->Divide(wxAtoi(output));
		}
		else if (op == '%') {
			processor->Modulus(wxAtoi(output));
		}
		op = ' ';
		text->Clear();
		text->AppendText(processor->GetDecimal());
	}
	else if (id == 17) {
		output = "";
		output = processor->GetBinary();
		text->Clear();
		text->AppendText(output);
	}
	else if (id == 18) {
		output = "";
		output = processor->GetHexadecimal();
		text->Clear();
		text->AppendText(output);
	}
	else if (id == 19) {
		output = "";
		output = processor->GetDecimal();
		text->Clear();
		text->AppendText(output);
	}
	else {
		text->Clear();
		processor->SetBaseNumber(0);
		output = "";
	}
}