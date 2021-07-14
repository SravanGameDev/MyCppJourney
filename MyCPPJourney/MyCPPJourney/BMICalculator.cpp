#include "BMICalculator.h"

void BMICalculator::BMIFormula()
{
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