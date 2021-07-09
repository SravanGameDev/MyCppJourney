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
	while (counter <= 500)
	{
		if (counter % 3 == 0 && counter % 5 == 0)
		{
			std::cout << counter << " is divisible\n";
		}

		counter++;
	}
}