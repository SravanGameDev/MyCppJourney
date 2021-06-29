#include "PrintLoop.h"

void PrintLoop::getUserInput(void)
{
	cout << "Enter a number: ";
	cin >> number;
}

void PrintLoop::displayData(void)
{
	//for (size_t i = 1; i < number; i++)
	//{
	//	//cout << i;
	//	for (size_t j = 1; j < i; j++)
	//	{
	//		cout << i;
	//	}
	//	cout << endl;
	//}

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