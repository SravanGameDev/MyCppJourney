#include "PolygonShape.h"
#include <iostream>
using namespace std;


float PolygonShape::Area(float base, float height)
{
	float value;

	value = base * height;
	value = value / 2;
	cout << "Area of a triangle is: " << value<<endl;

	return value;
}

float PolygonShape::Area(float radius)
{
	float value;

	value = 3.14 * radius * radius;
	cout << "Area of a cricle is : " << value<<endl;

	return value;
}