#include <iostream>
using namespace std;

void displaydata()
{
	string playerName;
	int yearsPlayed;

	cout << "Enter your username: ";
	cin >> playerName;
	cout << "Enter number of years played: ";
	cin >> yearsPlayed;
	cout << "\nPLAYER PROFILE CREATED";
	cout << "\nName of the player: " << playerName;
	cout << "\nNumber of years played: " << yearsPlayed;
	cout << "\n";
}

void ASCIIValues()
{
	using namespace std;

	char c1, c2, c3, c4, c5;

	cout << "Enter 5 letter word ";
	cin >> c1 >> c2 >> c3 >> c4 >> c5;
	cout << "\nASCII Message: "
		<< int(c1) << " "
		<< int(c2) << " "
		<< int(c3) << " "
		<< int(c4) << " "
		<< int(c5) << " ";
}