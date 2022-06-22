#include "pch.h"
#include "CppUnitTest.h"
#include "../Calculator/ButtonFactory.h"
#include "../Calculator/ButtonFactory.cpp"
#include "../Calculator/cMain.h"
//#include "../Calculator/cMain.cpp"
#include<string>
#include "wx/wx.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalculatorTest
{
	TEST_CLASS(CalculatorTest)
	{
	public:
		TEST_METHOD(NineButton)
		{
			//cMain* frame = new cMain();
			//ButtonFactory factory = ButtonFactory();
			
			//wxButton* btn = factory.MakeButton(frame, 9, "9", 110, 160);

			//Assert::AreEqual(btn->GetId(), 9);
		}
		
	};
}
