#pragma once
#include "ICommands.h"

class Divide : public ICommands
{
	int Execute(int num1, int num2) {
		return num1 / num2;
	}
};

