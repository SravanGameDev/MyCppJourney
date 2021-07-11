#include "ExampleForLoop.h"

void ExampleForLoop::getUserInputs()
{
	Question1();
}

/// <summary>
/// Factorial of a number
/// </summary>
void ExampleForLoop::Question1()
{
	int factorial=1;
	std::cout << "Enter a number: ";
	std::cin >> number;

	if (0<=number)
	{
		for (int i = 1; i <= number; i++)
		{
			factorial = factorial * i;
		}
		std::cout << "Factorial of " << number << "! is: " << factorial;
	}
	else
	{
		std::cout << "Enter a vaild number which greater than zero";
	}

}
