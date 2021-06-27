#include <iostream>
#include <stdio.h>
#include "PlayerInformation.h"
using namespace std;

int main()
{
	PlayerInformation  playerInfo;
	playerInfo.getdata();
	playerInfo.displaydata();
}

void AverageNumber()
{
	//Average of two numbers
	float number1;
	float number2;
	float sum;
	float average;

	cout << "Enter a Number\n";
	cin >> number1;
	cin >> number2;

	sum = number1 + number2;
	average = sum / 2;
	cout << "Average is " << average << "\n";
}