#include <iostream>

void BMICalculator()
{
	using namespace std; 
	float weight, height, bmi;

	cout << "Enter weight in Kg"<<endl;
	cin >> weight;
	cout << "Enter height in m" << endl;
	cin >> height;

	bmi = weight / (height * height);

	if (bmi < 18.5)
		cout << "Under Weight" << endl;
	else if (bmi > 25)
		cout << "Over weight" << endl;
	else
		cout << "Normal weight" << endl;

	cout << "You are bmi is: " << bmi;
}

void MathCalculator()
{
	using namespace std;

	float num1, num2;
	char operation;

	cout << "My Calculator" << endl;
	cin >> num1 >> operation >> num2;

	switch (operation)
	{
	default:cout << "Enter a vaild number and operators"; break;
	case '-':cout << num1 << operation << num2 << "=" << num1 - num2; break;
	case '+':cout << num1 << operation << num2 << "=" << num1 + num2; break;
	case '*':cout << num1 << operation << num2 << "=" << num1 * num2; break;
	case '/':cout << num1 << operation << num2 << "=" << num1 / num2; break;
	case '%':
		bool isNum1Int, isNum2Int;

		isNum1Int = ((int)num1 == num1);
		isNum2Int = ((int)num2 == num2);

		if (isNum1Int && isNum2Int)
			cout << num1 << operation << num2 << "=" << (int)num1 % (int)num2;
		else
			cout << "This is not valid";
		break;

	}

}

/// <summary>
/// Shows number of days in a month
/// </summary>
void MonthCalculator()
{
	using namespace std;
	int year, month;

	cout << "Year, Month: ";
	cin >> year >> month;

	switch (month)
	{
	case 2:(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		? cout << "29 days month." : cout << "28 days month."; break;
	case 4:
	case 6:
	case 9:
	case 11:cout << "30 days month."; break;
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:cout << "31 days month."; break;
	default: cout << "Enter a vaild year and month"; break;
	}
}