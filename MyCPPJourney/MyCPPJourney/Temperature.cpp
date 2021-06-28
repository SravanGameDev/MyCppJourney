#include "Temperature.h"

void Temperature::getTempData(void)
{
	cout << "Enter a temperature in Fahrenheit: ";
	cin >> degrees;
	cout << "\nFahrenheit: " << degrees << "F";
}

void Temperature::convertToCelsius(void)
{
	degrees *= celsius;
	cout << "\nCelsius: " << degrees<<"C" << endl;
}