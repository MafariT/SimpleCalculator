#include <iostream>
#include "userInput.h"

char userInput::userEnteredOperator()
{
	std::cout << "Enter an operator '+'-'/'*' or 'q' to quit \n";
	char operationEntered{};
	std::cin >> operationEntered;
	return operationEntered;
}