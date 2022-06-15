#pragma once
#include "wx/wx.h"

class cMain : public wxFrame
{
public:
	cMain();
	~cMain();
	wxButton* btn = nullptr;
	wxTextCtrl* text = nullptr;
public:
	wxDECLARE_EVENT_TABLE();

	void OnButtonClicked(wxCommandEvent& evt);

};

