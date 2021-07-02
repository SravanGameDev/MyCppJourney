#include "ASCIIProgram.h"

void ASCIIProgram::getUserInputs()
{
	cout << "Enter 5 letter word ";
	cin >> c1 >> c2 >> c3 >> c4 >> c5;
	cout << "\nASCII Message: "
		<< int(c1) << " "
		<< int(c2) << " "
		<< int(c3) << " "
		<< int(c4) << " "
		<< int(c5) << " ";
}