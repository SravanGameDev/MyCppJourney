#include "ElectricityBill.h"

void ElectricityBill::getUnits(void)
{
	cout << "Enter your units ";
	cin >> currentUnits;
	generateBill(currentUnits);
}

void ElectricityBill::generateBill(int currentUnits)
{
	if (currentUnits < 100)
	{
		bill = 50;
	}
	else if (currentUnits>100 && currentUnits<200)
	{
		bill = currentUnits * 0.6;
	}
	else if (currentUnits > 200 && currentUnits<300)
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
	
	cout << "\nElectricity Bill is: " << bill;
}