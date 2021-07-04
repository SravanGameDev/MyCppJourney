#include "Triangle.h"

void Triangle::getUserInputs()
{
	cout << "Enter three sides of a triangle\n";
	cin >> a >> b >> c;

	if (a==b && b==c)
		cout << "\nEquilateral triangle";
	else
	{
		if (a!=b && a!=c && b!=c)
			cout << "\nScalene triangle";
		else
			cout << "\nIsosceles triangle";
	}
}