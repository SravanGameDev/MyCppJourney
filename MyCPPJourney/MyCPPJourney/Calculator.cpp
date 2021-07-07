#include "Calculator.h"

void Calculator::getUserInputs()
{
	using namespace std;
	cout << "My Calculator"<<endl;
	cin >> num1 >> operation >> num2;

	switch (operation)
	{
	default:cout << "Enter a vaild number and operators";break;
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