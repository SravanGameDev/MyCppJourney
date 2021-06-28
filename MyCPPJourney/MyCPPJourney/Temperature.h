#pragma once
#include<iostream>
using namespace std;

class Temperature
{
public:
	float degrees;
	const float celsius = -17.2222f;
	void getTempData(void);
	void convertToCelsius(void);
};

