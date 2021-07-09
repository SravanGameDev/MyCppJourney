#include "ExampleWhileLoop.h"

void ExampleWhileLoop::getUserInputs()
{
	Question1();
}

/// <summary>
/// Write out all the numbers between 100 - 500 that 
/// divisble by 3 and 5 
/// </summary>
void ExampleWhileLoop::Question1()
{
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
void ExampleWhileLoop::Question2()
{
	using namespace std;
	cout << "Enter a number: ";
	cin >> number;

	if (number == 0)
		cout << "You have entered 0.\n";
	else
		counter = 0;
	while (number > 0)
	{
		number /=  10;
		counter++;
	}
	cout << "Number of digits are " << counter;
}