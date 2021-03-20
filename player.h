#include <bits/stdc++.h>
using namespace std;

#ifndef PLAYER
	#define PLAYER
// the first player uses 'O' and the second player uses 'X'
void playerName(string &Player1, string &Player2)
{
	cout << "Player1, please enter the name: ";
	getline(cin, Player1);

	cout << "Player2, please enter the name: ";
	getline(cin, Player2);
}

void check_taken(int sel[9], int input)
{
	for(int i = 1; i <= 9; i++)
	{
		while(f == i && )
		{
			cout << "The position is taken, reenter: ";
			cin >> f;
		}
		
	}
}

void firstPly_input(int sel[9])
{
	int f;
	cout << "Enter the position: ";
	cin >> f;



}

#endif