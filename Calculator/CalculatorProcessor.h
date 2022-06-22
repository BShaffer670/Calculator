#pragma once
#include <string>

class CalculatorProcessor
{
private:
	static CalculatorProcessor* _processor;
	int base;

	CalculatorProcessor() {}

public:
	static CalculatorProcessor* GetInstance() {
		if (_processor == nullptr) {
			_processor = new CalculatorProcessor();
		}
		return _processor;
	}
	void SetBaseNumber(int _num) {
		base = _num;
	}

	CalculatorProcessor(CalculatorProcessor& other) = delete;
	void operator=(const CalculatorProcessor& other) = delete;

	

	std::string GetDecimal() {
		return std::to_string(base);
	}

	std::string GetHexadecimal() {
		std::string results = "";
		int number = base;
		while (number > 0) {
			int mod = number % 16;
			if (mod < 10) {
				results = std::to_string(mod) + results;
			}
			else {
				if (mod == 10) {
					results = 'A' + results;
				}
				else if (mod == 11) {
					results = 'B' + results;
				}
				else if (mod == 12) {
					results = 'C' + results;
				}
				else if (mod == 13) {
					results = 'D' + results;
				}
				else if (mod == 14) {
					results = 'E' + results;
				}
				else if (mod == 15) {
					results = 'F' + results;
				}
			}
			number = number / 16;
		}
		results = "0x" + results;

		return results;
	}

	std::string GetBinary() {
		std::string results = "";
		int number = base;
		for (int i = 0; i < 32; i++) {
			if (number % 2 == 0)
				results = "0" + results;
			else
				results = "1" + results;
			number = number / 2;
		}
		return results;
	}

	void Add(int second) {
		base = base + second;
	}

	void Subtract(int second) {
		base = base - second;
	}

	void Multiply(int second) {
		base = base * second;
	}

	void Divide(int second) {
		base = base / second;
	}

	void Modulus(int second) {
		base = base % second;
	}
};

