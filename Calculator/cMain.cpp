#include "cMain.h"

wxBEGIN_EVENT_TABLE(cMain, wxFrame)
EVT_BUTTON(wxID_ANY, OnButtonClicked)
wxEND_EVENT_TABLE()

cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(30, 30), wxSize(240, 410)){

	wxFont font(24, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);

	text = new wxTextCtrl(this, wxID_ANY, "", wxPoint(10, 10), wxSize(200, 100));
	
	//row 1
	btn = new wxButton(this, 15, "%", wxPoint(160, 110), wxSize(50, 50)); // %
	btn = new wxButton(this, 17, "bin", wxPoint(60, 110), wxSize(50, 50)); // bin
	btn = new wxButton(this, 18, "hex", wxPoint(110, 110), wxSize(50, 50)); // hex
	btn = new wxButton(this, 19, "dec", wxPoint(10, 110), wxSize(50, 50)); // decimal

	//row 2
	btn = new wxButton(this, 7, "7", wxPoint(10, 160), wxSize(50, 50)); //7
	btn = new wxButton(this, 8, "8", wxPoint(60, 160), wxSize(50, 50)); //8
	btn = new wxButton(this, 9, "9", wxPoint(110, 160), wxSize(50, 50)); //9
	btn = new wxButton(this, 14, "/", wxPoint(160, 160), wxSize(50, 50)); // /

	//row 3
	btn = new wxButton (this, 4, "4", wxPoint(10, 210), wxSize(50, 50)); //4
	btn = new wxButton (this, 5, "5", wxPoint(60, 210), wxSize(50, 50)); //5
	btn = new wxButton (this, 6, "6", wxPoint(110, 210), wxSize(50, 50)); //6
	btn = new wxButton(this, 13, "*", wxPoint(160, 210), wxSize(50, 50)); //*

	//row 4
	btn = new wxButton(this, 1, "1", wxPoint(10, 260), wxSize(50, 50)); //1
	btn = new wxButton(this, 2, "2", wxPoint(60, 260), wxSize(50, 50)); //2
	btn = new wxButton(this, 3, "3", wxPoint(110, 260), wxSize(50, 50)); //3
	btn = new wxButton(this, 12, "-", wxPoint(160, 260), wxSize(50, 50)); //-	

	//row 5
	btn = new wxButton(this, 16, "C", wxPoint(10, 310), wxSize(50, 50)); // clear
	btn = new wxButton (this, 10, "0", wxPoint(60, 310), wxSize(50, 50)); //0
	btn = new wxButton(this, 20, "=", wxPoint(110, 310), wxSize(50, 50)); //=
	btn = new wxButton(this, 11, "+", wxPoint(160, 310), wxSize(50, 50)); //+


	
}
cMain::~cMain() {
	delete[]btn;
}

void cMain::OnButtonClicked(wxCommandEvent& evt) {
	wxButton* onBtn = dynamic_cast<wxButton*>(evt.GetEventObject());
	wxString output = onBtn->GetLabel();
	text->AppendText(output);
}