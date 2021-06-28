#include "MathFormulas.h"
#include<iostream>
using namespace std;

void MathFormulas::getdata(void)
{
	cout<< "Enter three values\n";
	cin >> a>>b>>c;
}

void MathFormulas::Formula(void)
{
	x = a / b;
	x -= c;
	cout << "\nTotal value is: " << x << endl;
}