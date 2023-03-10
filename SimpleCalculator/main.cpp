#include <iostream>
#include "userInput.h"

int main()
{
	userInput input;
	bool isCalculatingDone{ false };

	while (!isCalculatingDone)
	{
		char opera{ input.userEnteredOperator() };

		if (opera == 'q')
		{
			isCalculatingDone = true;
			break;
		}

		double x{ input.userEnteredNums() };
		double y{ input.userEnteredNums() };
		if (opera == '+')
		{
			std::cout << x << " + " << y << " = " << x + y << '\n';
		}
		else if (opera == '-')
		{
			std::cout << x << " - " << y << " = " << x - y << '\n';
		}
		else if (opera == '*')
		{
			std::cout << x << " * " << y << " = " << x * y << '\n';
		}
		else if (opera == '/')
		{
			std::cout << x << " / " << y << " = " << x / y << '\n';
		}
		else
		{
			std::cout << "Enter a valid operator \n";
		}
	}
}
