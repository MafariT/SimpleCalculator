#include <iostream>

double userEnteredValue()
{
	std::cout << "Enter a number: \n";
	double numEntered{};
	std::cin >> numEntered;
	return numEntered;
}

char userEnteredOperation()
{
	std::cout << "Enter an operator '+'-'/'*' or 'q' to quit \n";
	char operationEntered{};
	std::cin >> operationEntered;
	return operationEntered;
}

int main()
{
	bool isCalculatingDone{ false };
	while (!isCalculatingDone)
	{
		char opera{ userEnteredOperation() };

		if (opera == 'q')
		{
			isCalculatingDone = true;
			break;
		}

		double x{ userEnteredValue() };
		double y{ userEnteredValue() };
		if (opera == '+')
		{
			std::cout << x << " + " << y << " = " << x + y << '\n';
			isCalculatingDone = false;
		}
		else if (opera == '-')
		{
			std::cout << x << " - " << y << " = " << x - y << '\n';
			isCalculatingDone = false;
		}
		else if (opera == '*')
		{
			std::cout << x << " * " << y << " = " << x * y << '\n';
			isCalculatingDone = false;
		}
		else if (opera == '/')
		{
			std::cout << x << " / " << y << " = " << x / y << '\n';
			isCalculatingDone = false;
		}
		else
		{
			std::cout << "Enter a valid operator \n";
		}
	}
}
