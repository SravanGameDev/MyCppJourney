#include<iostream>
using namespace std;

int a,b,c;
int average,sum;

void SwapingNumbers()
{
	cout << "Enter two numbers" << endl;
	cin >> a;
	cin >> b;
	cout << "\na: " << a << " b: " << b;
}

void ExtraVariableMethod(void)
{
	sum = a;
	a = b;
	b = sum;

	cout << "\a: " << a << " b: " << b;
}

void ArithemticMethod()
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
void AverageNumber(void)
{
	cout << "Enter a Number\n";
	cin >> a;
	cin >> b;

	sum = a + b;
	average = sum / 2;
	cout << "Average is " << average << "\n";
}

void Temperature()
{
	float degrees, celsius=0;
	cout << "Enter a temperature in Fahrenheit: ";
	cin >> degrees;
	cout << "\nFahrenheit: " << degrees << "F";
	degrees *= celsius;
	cout << "\nCelsius: " << degrees << "C" << endl;
}

void Formula(void)
{
	int x;
	cout << "Enter three values\n";
	cin >> a >> b >> c;

	x = a / b;
	x -= c;
	cout << "\nTotal value is: " << x << endl;
}

void Triangle()
{
	cout << "Enter three sides of a triangle\n";
	cin >> a >> b >> c;

	if (a == b && b == c)
		cout << "\nEquilateral triangle";
	else
	{
		if (a != b && a != c && b != c)
			cout << "\nScalene triangle";
		else
			cout << "\nIsosceles triangle";
	}
}

void IdentifyNumberType()
{
	int number;

	cout << "Enter a number: ";
	cin >> number;

	if (number % 2 == 0)
	{
		cout << "You have entered even number: " << number << endl;
	}
	else
	{
		cout << "You have entered odd number: " << number << endl;
	}

	cout << "\n";
}

void ElectricityBill()
{
	float currentUnits;
	float bill;

	std::cout << "Enter your units ";
	std::cin >> currentUnits;

	if (currentUnits < 100)
	{
		bill = 50;
	}
	else if (currentUnits > 100 && currentUnits < 200)
	{
		bill = currentUnits * 0.6;
	}
	else if (currentUnits > 200 && currentUnits < 300)
	{
		bill = currentUnits * 0.8;
	}
	else
	{
		bill = currentUnits * 0.9;
	}

	if (bill > 300)
	{
		float extraCharge;
		extraCharge = bill * 0.15;
		bill += extraCharge;
	}

	std::cout << "\nElectricity Bill is: " << bill;
}

void GuessingGame()
{
	using namespace std;
	int hostUserNum, guestUserNum;
	int Lives;

	cout << "Host choose a number between 1 to 10: ";
	cin >> hostUserNum;
	system("cls");

	Lives = 3;
	cout << "You have Lives: " << Lives << endl;
	cout << "Guest guess the number which host thought: ";
	cin >> guestUserNum;

	if (hostUserNum == guestUserNum)
	{
		cout << "Correct!";
	}
	else
	{
		cout << "Failed!" << endl;
		Lives--;
		cout << "------------------------------------------------------" << endl;
		cout << "You have Lives: " << Lives << endl;
		cout << "Guess Again!! ";
		cin >> guestUserNum;

		if (hostUserNum == guestUserNum)
		{
			cout << "Correct!";
		}
		else
		{
			cout << "Failed!" << endl;
			Lives--;
			cout << "------------------------------------------------------" << endl;
			cout << "You have Lives: " << Lives << endl;
			cout << "The last Guess!! ";
			cin >> guestUserNum;
			(hostUserNum == guestUserNum) ? cout << "Correct!\nCongratulations" : cout << "Failed! Try again";
		}

	}
}