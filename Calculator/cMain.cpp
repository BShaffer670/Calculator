#include "cMain.h"
#include "ButtonFactory.h"

wxBEGIN_EVENT_TABLE(cMain, wxFrame)

EVT_BUTTON(wxID_ANY, OnButtonClicked)

wxEND_EVENT_TABLE()

cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(30, 30), wxSize(240, 410)) {

	wxFont font(24, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);

	text = new wxTextCtrl(this, wxID_ANY, "", wxPoint(10, 10), wxSize(200, 100));

	ButtonFactory factory = ButtonFactory(this);

	btn = factory.ZeroButton();
	btn = factory.OneButton();
	btn = factory.TwoButton();
	btn = factory.ThreeButton();
	btn = factory.FourButton();
	btn = factory.FiveButton();
	btn = factory.SixButton();
	btn = factory.SevenButton();
	btn = factory.EightButton();
	btn = factory.NineButton();
	btn = factory.AdditionButton();
	btn = factory.SubtractionButton();
	btn = factory.MultiplicationButton();
	btn = factory.DivisionButton();
	btn = factory.ModulusButton();
	btn = factory.EqualsButton();
	btn = factory.BinaryButton();
	btn = factory.HexButton();
	btn = factory.DecimalButton();
	btn = factory.ClearButton();
	
	//row 1
	 // %
	 // bin
	 // hex
	 // decimal

	//row 2
	 //7
	 //8
	 //9
	 // /

	//row 3
	 //4
	 //5
	 //6
	 //*

	//row 4
	 //1
	 //2
	 //3
	 //-	

	//row 5
	 // clear
	 //0
	 //=
	 //+



}
cMain::~cMain() {
	delete[]btn;
}

void cMain::OnButtonClicked(wxCommandEvent& evt) {
	int id = evt.GetId();
	if (id < 20) {
		wxButton* onBtn = dynamic_cast<wxButton*>(evt.GetEventObject());
		wxString output = onBtn->GetLabel();
		text->AppendText(output);
	}
	else {
		text->Clear();
	}
}