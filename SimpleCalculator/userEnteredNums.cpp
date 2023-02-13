#include <iostream>
#include "userInput.h"

double userInput::userEnteredNums()
{
	std::cout << "Enter a number: \n";
	double numEntered{};
	std::cin >> numEntered;
	return numEntered;
}
