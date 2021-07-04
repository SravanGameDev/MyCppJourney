#include "IdentifyNumberType.h"

void IdentifyNumberType::getUserInputs()
{
	cout << "Enter a number: ";
	cin >> number;

	if (number % 2 == 0)
	{
		cout << "You have entered even number: " << number<<endl;
	}
	else
	{
		cout << "You have entered odd number: " << number<<endl;
	}
	
	cout << "\n";
	getUserInputs();
}