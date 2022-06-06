#pragma once
#include "wx/wx.h"
#include "cMain.h"


class Calculator : public wxApp {


public:
	Calculator();
	~Calculator();
private:
	cMain* m_frame1 = nullptr;
public:
	virtual bool OnInit();


};

