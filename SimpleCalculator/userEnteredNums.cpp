#include <iostream>
#include "userInput.h"

double userInput::userEnteredValue()
{
	std::cout << "Enter a number: \n";
	double numEntered{};
	std::cin >> numEntered;
	return numEntered;
}
