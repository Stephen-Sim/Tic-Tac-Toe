#include <bits/stdc++.h>
#include "player.h"
#include "t_coin.h"
#include "check_win.h"
#include "output_arr.h"
using namespace std;

#define SIZE 3

string Player1, Player2;

int main()
{
	cout << "Welcome to Stephen\'s Tic Tac Toe Game" << endl;
	playerName(Player1, Player2);

	do
	{
		srand(time(NULL));
		char arr[SIZE][SIZE] = 
		{
			{'1', '2', '3'},
			{'4', '5', '6'},
			{'7', '8', '9'}
		};

		int  sel[9] = 
		{
			1, 2, 3,
			4, 5, 6,
			7, 8, 9
		};

		bool start_first;

		output_arr(arr);
		start_first = throw_coin();

		do
		{

		}while();

	}while();

	return 0;
}