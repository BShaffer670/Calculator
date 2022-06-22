#include "pch.h"
#include "CppUnitTest.h"
#include "../Calculator/ButtonFactory.h"
#include "../Calculator/ButtonFactory.cpp"
#include "../Calculator/cMain.h"
#include "../Calculator/cMain.cpp"
#include <string>
#include "wx/wx.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalculatorTest
{
	TEST_CLASS(CalculatorTest)
	{
	public:
		TEST_METHOD(NineButton)
		{
			cMain* frame = new cMain();
			ButtonFactory factory = ButtonFactory();
			
			wxButton* btn = factory.MakeButton(frame, 9, "9", 110, 160);

			Assert::AreEqual(btn->GetId(), 9);
		}
		TEST_METHOD(ZeroButton)
		{
			cMain* frame = new cMain();
			ButtonFactory factory = ButtonFactory();

			wxButton* btn = factory.MakeButton(frame, 10, "0", 60, 310);

			Assert::AreEqual(btn->GetId(), 10);
		}
		TEST_METHOD(MultButton)
		{
			cMain* frame = new cMain();
			ButtonFactory factory = ButtonFactory();

			wxButton* btn = factory.MakeButton(frame, 13, "*", 160, 210);

			Assert::AreEqual(btn->GetId(), 13);
		}
		TEST_METHOD(FiveButton)
		{
			cMain* frame = new cMain();
			ButtonFactory factory = ButtonFactory();

			wxButton* btn = factory.MakeButton(frame, 5, "5", 60, 210);

			Assert::AreEqual(btn->GetId(), 5);
		}
		TEST_METHOD(ModButton)
		{
			cMain* frame = new cMain();
			ButtonFactory factory = ButtonFactory();

			wxButton* btn = factory.MakeButton(frame, 15, "%", 160, 110);

			Assert::AreEqual(btn->GetId(), 15);
		}
		TEST_METHOD(HexButton)
		{
			cMain* frame = new cMain();
			ButtonFactory factory = ButtonFactory();

			wxButton* btn = factory.MakeButton(frame, 18, "hex", 110, 110);

			Assert::AreEqual(btn->GetId(), 18);
		}
		TEST_METHOD(ClearButton)
		{
			cMain* frame = new cMain();
			ButtonFactory factory = ButtonFactory();

			wxButton* btn = factory.ClearButton(frame);

			Assert::AreEqual(btn->GetId(), 20);
		}
		TEST_METHOD(DecButton)
		{
			cMain* frame = new cMain();
			ButtonFactory factory = ButtonFactory();

			wxButton* btn = factory.MakeButton(frame, 19, "dec", 10, 110);

			Assert::AreEqual(btn->GetId(), 19);
		}
		TEST_METHOD(DivideButton)
		{
			cMain* frame = new cMain();
			ButtonFactory factory = ButtonFactory();

			wxButton* btn = factory.MakeButton(frame, 14, "/", 160, 160);

			Assert::AreEqual(btn->GetId(), 14);
		}
		TEST_METHOD(AdditionButton)
		{
			cMain* frame = new cMain();
			ButtonFactory factory = ButtonFactory();

			wxButton* btn = factory.MakeButton(frame, 11, "+", 160, 310);

			Assert::AreEqual(btn->GetId(), 11);
		}
	};
}
