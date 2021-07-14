#include<iostream>
using namespace std;

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

#pragma region  Function Overloading

float Area(float base, float height)
{
	float value;

	value = base * height;
	value = value / 2;
	cout << "Area of a triangle is: " << value << endl;

	return value;
}

float Area(float radius)
{
	float value;

	value = 3.14 * radius * radius;
	cout << "Area of a cricle is : " << value << endl;

	return value;
}
#pragma endregion

void main()
{
	PrimeNumber();

	system("pause>0");
}