#include "GuessingGame.h"

void GuessingGame::getUserInputs()
{
	using namespace std;

	cout << "Host choose a number between 1 to 10: ";
	cin >> hostUserNum;
	system("cls");

	Lives = 3;
	cout << "You have Lives: " << Lives << endl;
	cout << "Guest guess the number which host thought: ";
	cin >> guestUserNum;

	if (hostUserNum == guestUserNum)
	{
		cout << "Correct!";
	}
	else
	{
		cout << "Failed!" << endl;
		Lives--;
		cout << "------------------------------------------------------"<<endl;
		cout << "You have Lives: " << Lives << endl;
		cout << "Guess Again!! ";
		cin >> guestUserNum;

		if (hostUserNum == guestUserNum)
		{
			cout << "Correct!";
		}
		else
		{
			cout << "Failed!" << endl;
			Lives--;
			cout << "------------------------------------------------------"<<endl;
			cout << "You have Lives: " << Lives << endl;
			cout << "The last Guess!! ";
			cin >> guestUserNum;
			(hostUserNum == guestUserNum) ? cout << "Correct!\nCongratulations" : cout << "Failed! Try again";
		}
			
	}
}