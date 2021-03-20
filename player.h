#include <bits/stdc++.h>
using namespace std;

#ifndef PLAYER
	#define PLAYER

void playerName(string &Player1, string &Player2)
{
	cout << "Player1, please enter the name: ";
	getline(cin, Player1);

	cout << "Player2, please enter the name: ";
	getline(cin, Player2);
}

#endif