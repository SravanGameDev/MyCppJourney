#include "ExampleDoWhile.h"

void ExampleDoWhile::Question1()
{
	errorcounter = 0;
	do
	{
		std::cout << "Enter your PIN: ";
		std::cin >> pin;
		if (pin!=userPin)
		{
			errorcounter++;
		}

	} while (errorcounter<3 && pin!=userPin);

	if (errorcounter<3)
	{
		std::cout << "Loading...!";
	}
	else
	{
		std::cout << "Blocked";
	}
}