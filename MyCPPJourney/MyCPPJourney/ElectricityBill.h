#pragma once
#include<iostream>
using namespace std;

class ElectricityBill
{
public:
	float currentUnits;
	float bill;

	void getUnits(void);
	void generateBill(int currentUnits);

};

