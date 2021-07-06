#include "GuessingGame.h"

void GuessingGame::getUserInputs()
{
	cout << "Host choose a number between 1 to 10: ";
	cin >> hostUserNum;
	system("cls");
	cout << "Guest guess the number which host thought: ";
	cin >> guestUserNum;
	(hostUserNum == guestUserNum) ? cout << "Correct!" : cout << "Failed!";
}