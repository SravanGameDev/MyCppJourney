#include "SwapingNumbers.h"


void SwapingNumbers::getUserInputs(void)
{
	cout << "Enter two numbers" << endl;
	cin >> a;
	cin >> b;
	cout << "\na: " << a << " b: " << b;
	arithemticMethod();
}

void SwapingNumbers::ExtraVariableMethod(void)
{
	sum = a;
	a = b;
	b = sum;

	cout << "\a: " << a << " b: " << b;
}

void SwapingNumbers::arithemticMethod(void)
{
	cout << "\nAfter swaping the numbers";
	a = 20;
	b = 10;
	a = a + b;//20+10=30
	b = a - b;//30-10=20
	a = a - b;//30-20=10
	cout << "\na: " << a << " b: " << b;
}



//Average of two numbers
void SwapingNumbers::AverageNumber(void)
{
	cout << "Enter a Number\n";
	cin >> a;
	cin >> b;

	sum = a + b;
	average = sum / 2;
	cout << "Average is " << average << "\n";
}