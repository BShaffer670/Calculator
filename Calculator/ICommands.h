#pragma once
#include <string>
#include <vector>

class ICommands
{
public:
	std::vector <char> commands;
	std::vector <int> nums;

	CalculatorProcessor* processor = CalculatorProcessor::GetInstance();

	//Make this pure virutal and put the addition, subtraction, multiplication, etc.. in own header files
	//Using commands size prevents final number from being added

	std::string Execute() {
		processor->SetBaseNumber(nums[0]);
		for (int i = 0; i < commands.size(); i++) {
			if (commands[i] == '+') {
				processor->Add(nums[i+1]);
			}
			else if (commands[i] == '-') {
				processor->Subtract(nums[i+1]);
			}
			else if (commands[i] == '*') {
				processor->Multiply(nums[i+1]);
			}
			else if (commands[i] == '/') {
				processor->Divide(nums[i+1]);
			}
			else if (commands[i] == '%') {
				processor->Modulus(nums[i+1]);
			}
		}
		return processor->GetDecimal();
	}
};

