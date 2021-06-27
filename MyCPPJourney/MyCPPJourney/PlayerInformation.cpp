#include "PlayerInformation.h"


void PlayerInformation::getdata(void)
{
	cout << "Enter your username: ";
	cin >> playerName;
	cout << "Enter number of years played: ";
	cin >> yearsPlayed;
}

void PlayerInformation::displaydata(void)
{
	cout << "\nPLAYER PROFILE CREATED";
	cout << "\nName of the player: " << playerName;
	cout << "\nNumber of years played: " << yearsPlayed;
	cout << "\n";
}