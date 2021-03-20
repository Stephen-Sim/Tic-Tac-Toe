#include <bits/stdc++.h>
#include "output_arr.h"
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

char check_taken(char sel[9])
{
	char input;
	do
	{
		cout << "Enter the position: ";
		cin >> input;
	}while(input <= 48 && input >= 58);

	for(int i = 1; i <= 9; i++) 
	{	
		if(input == (48 + i) && sel[i - 1] == '0')
		{
			cout << "The position is taken.";
			input = check_taken(sel);
		}
		
		if(input == (48 + i) && sel[i - 1] != '0') // 48 == 0 in char
		{
			sel[i] = '0';
			return input;
		}
	}
}

void firstPly_input(char arr[3][3], char sel[9]) // 'O'
{
	char f;
	f = check_taken(sel);

	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; i < 3; j++)
		{
			if(f == arr[i][j])
			{
				arr[i][j] = 'O';
			}
		}
	}
	output_arr(arr);
	cout << endl;
}

void secondPly_input(char arr[3][3], char sel[9]) // 'X'
{
	char s;
	s = check_taken(sel);

	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; i < 3; j++)
		{
			if(s == arr[i][j])
			{
				arr[i][j] = 'X';
			}
		}
	}
	output_arr(arr);
	cout << endl;
}

#endif