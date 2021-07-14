#include "Loops.h"
#include<iostream>
#include<iomanip>

void PrintLoop()
{
	using namespace std;
	int number;
	cout << "Enter a number: ";
	cin >> number;

	for (size_t i = 0; i < number; i++)
	{
		for (size_t j = 0; j < i; j++)
		{
			cout << i;
		}
		cout << endl;
		number++;
	}
}

void ExampleDoWhile()
{
	const int userPin = 1234;
	int pin, errorcounter;

	errorcounter = 0;
	do
	{
		std::cout << "Enter your PIN: ";
		std::cin >> pin;
		if (pin != userPin)
		{
			errorcounter++;
		}

	} while (errorcounter < 3 && pin != userPin);

	if (errorcounter < 3)
	{
		std::cout << "Loading...!";
	}
	else
	{
		std::cout << "Blocked";
	}
}

/// <summary>
/// Factorial of a number
/// </summary>
void ExampleForLoop()
{
	int number;

	int factorial = 1;
	std::cout << "Enter a number: ";
	std::cin >> number;

	if (0 <= number)
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

/// <summary>
/// Write out all the numbers between 100 - 500 that 
/// divisble by 3 and 5 
/// </summary>
void ExampleWhileLoop()
{
	int counter;
	counter = 100;
	while (counter <= 500)
	{
		if (counter % 3 == 0 && counter % 5 == 0)
		{
			std::cout << counter << " is divisible\n";
		}
		counter++;
	}
}

/// <summary>
/// User enter a number, 
/// Count digits of a number;
/// </summary>
void ExampleWhileLoop1()
{
	using namespace std;
	int number;
	int counter;

	cout << "Enter a number: ";
	cin >> number;

	if (number == 0)
	{
		cout << "You have entered 0.\n";
	}
	else
	{
		if (number < 0)
		{
			number *= -1;
		}

		counter = 0;
		while (number > 0)
		{
			number /= 10;
			counter++;
		}
		cout << "Number of digits are " << counter;
	}
}
/// <summary>
/// reversing number
/// </summary>
void ExampleWhileLoop2()
{
	using namespace std;
	int reversedNumber = 0;
	int number;

	cout << "Enter a number: ";
	cin >> number;

	while (number != 0)
	{
		reversedNumber *= 10;
		int lastDigit = number % 10;
		reversedNumber += lastDigit;
		number /= 10;
	}
	cout << "Reversed number: " << reversedNumber;
}

void NestedLoops()
{
	int subjects;
	int grade;
	int sum = 0;
	std::cout << "Grading System from 1 to 10";
	std::cout << "\nHow many subjects do you have? ";
	std::cin >> subjects;

	for (int i = 0; i < subjects; i++)
	{
		do
		{
			std::cout << "Enter your first subject grade " << i + 1 << ": ";
			std::cin >> grade;
		} while (grade < 1 || grade >9);

		sum += grade;
	}

	std::cout << "Total points: " << sum;
	std::cout << "\nAverage grade: " << sum / subjects;
}

void NestedForLoop()
{
	for (size_t i = 1; i <= 10; i++)
	{
		for (size_t j = 1; j <= 10; j++)
		{
			std::cout << i << " * " << j<<" = " << i * j << std::endl;
		}
		std::cout << "\n";
	}
}

void DrawShape()
{
	int height, width;
	char symbol;
	std::cout << "Enter a height: ";
	std::cin >> height;
	std::cout << "Enter a width: ";
	std::cin >> width;
	std::cout << "Enter a symbol-> ";
	std::cin >> symbol;
	
	for (int h = 0; h < height; h++)
	{
		for (int w = 0; w < width; w++)
		{
			std::cout<<std::setw(3)<<symbol;
		}
		std::cout << std::endl;
	}
}

void EquilateralTriangle()
{
	int height;
	std::cout << "Enter height for a triangle: ";
	std::cin >> height;
	
	for (size_t h = 1; h <= height; h++)
	{
		for (size_t w = 0; w < h; w++)
		{
			std::cout << std::setw(3) << "*";
		}
		std::cout << std::endl;
	}
}

void InvertedEquilateralTriangle()
{
	int height;
	std::cout << "Enter height for a triangle: ";
	std::cin >> height;
	
	for (size_t h = height; h >=1; h--)
	{
		for (size_t w = 0; w < h; w++)
		{
			std::cout << std::setw(3) << "*";
		}
		std::cout << std::endl;
	}
}

