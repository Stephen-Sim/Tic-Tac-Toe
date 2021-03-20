#include <bits/stdc++.h>
using namespace std;

#ifndef T_COIN
	#define T_COIN

extern string Player1, Player2;

bool throw_coin()
{
	int randNum = rand() % 101;
	char guessFace;

	cout << "A coin is throwing.." << endl;
	cout << Player1 << " please enter the guess (H/ T): ";
	cin >> guessFace;
	guessFace = toupper(guessFace);

	if(randNum % 2 == 0) // Head
	{
		cout << "It is Head." << endl;
		if(guessFace == 'H')
		{
			cout << Player1 << " starts first.";
			return true;
		}
		else 
		{
			cout << "Unfortunately, " << Player2 << " starts first.";
			return false;
		}
	}
	else // Tail
	{
		cout << "It is Tail." << endl;
		if(guessFace == 'T')
		{
			cout << Player1 << " starts first.";
			return true;
		}
		else 
		{
			cout << "Unfortunately, " << Player2 << " starts first.";
			return false;
		}
	}
}


#endif