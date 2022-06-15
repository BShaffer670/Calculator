#include "cMain.h"
#include "ButtonFactory.h"

wxBEGIN_EVENT_TABLE(cMain, wxFrame)

EVT_BUTTON(wxID_ANY, OnButtonClicked)

wxEND_EVENT_TABLE()

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
	btn = factory.MakeButton(this, 20 , "C", 10, 310); //Clear
	
	

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