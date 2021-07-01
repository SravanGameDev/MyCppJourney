#include "SwapingNumbers.h"


void SwapingNumbers::getData(void)
{
	cout << "Enter two numbers" << endl;
	cin >> number1;
	cin >> number2;
	cout << "\nNumber1: " << number1 << " Number2: " << number2;
}

void SwapingNumbers::swapNumbers(void)
{
	sum = number1;
	number1 = number2;
	number2 = sum;

	cout << "\nNumber1: " << number1 << " Number2: " << number2;
}

//Average of two numbers
void SwapingNumbers::AverageNumber(void)
{
	cout << "Enter a Number\n";
	cin >> number1;
	cin >> number2;

	sum = number1 + number2;
	average = sum / 2;
	cout << "Average is " << average << "\n";
}