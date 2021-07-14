#include<iostream>

/// <summary>
/// return type function
/// </summary>
/// <param name="number"> prime number</param>
/// <returns> true / flase </returns>
bool IsPrimeNumber(int number)
{
	for (size_t i = 2; i < number; i++)
	{
		if (number % i == 0)
		{
			return false;
		}
	}
	return true;
}

void PrimeNumber()
{
	int number;

	std::cout << "Number: ";
	std::cin >> number;

	for (size_t i = 1; i < number; i++)
	{
		bool isPrimeFlag = IsPrimeNumber(i);
		if (isPrimeFlag)
			std::cout << i << " is a prime number\n";
		
	}

}


void main()
{
	PrimeNumber();

	system("pause>0");
}