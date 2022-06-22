#include "pch.h"
#include "CppUnitTest.h"
#include "../Calculator/CalculatorProcessor.h"
#include<string>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalculatorTest
{
	TEST_CLASS(CalculatorTest)
	{
	public:
		
		TEST_METHOD(BinConversion50)
		{
			CalculatorProcessor* processor = CalculatorProcessor::GetInstance();
			processor->SetBaseNumber(50);
			std::string compare = "00000000000000000000000000110010";
			Assert::AreEqual(processor->GetBinary(), compare);
		}
		TEST_METHOD(BinConversion120)
		{
			CalculatorProcessor* processor = CalculatorProcessor::GetInstance();
			processor->SetBaseNumber(120);
			std::string compare = "00000000000000000000000001111000";
			Assert::AreEqual(processor->GetBinary(), compare);
		}
		TEST_METHOD(BinConversion476)
		{
			CalculatorProcessor* processor = CalculatorProcessor::GetInstance();
			processor->SetBaseNumber(476);
			std::string compare = "00000000000000000000000111011100";
			Assert::AreEqual(processor->GetBinary(), compare);
		}
		TEST_METHOD(BinConversion3947)
		{
			CalculatorProcessor* processor = CalculatorProcessor::GetInstance();
			processor->SetBaseNumber(3947);
			std::string compare = "00000000000000000000111101101011";
			Assert::AreEqual(processor->GetBinary(), compare);
		}
		TEST_METHOD(BinConversion52001)
		{
			CalculatorProcessor* processor = CalculatorProcessor::GetInstance();
			processor->SetBaseNumber(52001);
			std::string compare = "00000000000000001100101100100001";
			Assert::AreEqual(processor->GetBinary(), compare);
		}
		TEST_METHOD(HexConversion132) 
		{
			CalculatorProcessor* processor = CalculatorProcessor::GetInstance();
			processor->SetBaseNumber(132);
			std::string compare = "0x84";
			Assert::AreEqual(processor->GetHexadecimal(), compare);
		}
		TEST_METHOD(HexConversion69)
		{
			CalculatorProcessor* processor = CalculatorProcessor::GetInstance();
			processor->SetBaseNumber(69);
			std::string compare = "0x45";
			Assert::AreEqual(processor->GetHexadecimal(), compare);
		}
		TEST_METHOD(HexConversion80085)
		{
			CalculatorProcessor* processor = CalculatorProcessor::GetInstance();
			processor->SetBaseNumber(80085);
			std::string compare = "0x138D5";
			Assert::AreEqual(processor->GetHexadecimal(), compare);
		}
		TEST_METHOD(HexConversion1234567890)
		{
			CalculatorProcessor* processor = CalculatorProcessor::GetInstance();
			processor->SetBaseNumber(1234567890);
			std::string compare = "0x499602D2";
			Assert::AreEqual(processor->GetHexadecimal(), compare);
		}
		TEST_METHOD(HexConversion571585)
		{
			CalculatorProcessor* processor = CalculatorProcessor::GetInstance();
			processor->SetBaseNumber(571585);
			std::string compare = "0x8B8C1";
			Assert::AreEqual(processor->GetHexadecimal(), compare);
		}
	};
}
