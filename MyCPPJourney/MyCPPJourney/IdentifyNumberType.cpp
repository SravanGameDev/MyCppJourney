#include "IdentifyNumberType.h"

void IdentifyNumberType::getUserInputs()
{
	cout << "Enter a number: ";
	cin >> number;

	if (number % 2 == 0)
	{
		cout << "Your entered number is a even number: " << number<<endl;
	}
	else
	{
		cout << "Your entered number is an odd number: " << number<<endl;
	}
	
	cout << "\n";
	getUserInputs();
}