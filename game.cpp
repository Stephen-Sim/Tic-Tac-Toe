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
	char toContinue;
	do
	{
		srand(time(NULL));
		char arr[SIZE][SIZE] = 
		{
			{'1', '2', '3'},
			{'4', '5', '6'},
			{'7', '8', '9'}
		};

		char sel[9] = 
		{
			'1', '2', '3',
			'4', '5', '6',
			'7', '8', '9'
		};

		output_arr(arr);

		bool start_first;
		start_first = throw_coin();

		int win = 0;
		do
		{
			firstPly_input(arr, sel);
			secondPly_input(arr, sel);
			win = win_condition(arr);

			int sum = 0;
			for(int  i = 0; i < 9; i++)
			{
				sum = sum + sel[i];
			}

			if(sum == 0)
			{
				cout << "Game Result: Draw Game!" << endl;
				break;
			}

		}while(win == 0);

		if(win == 1)
		{
			cout << "Congratulation, " << Player1 << "win the game." << endl;
		}
		else if(win == 2)
		{
			cout << "Congratulation, " << Player2 << "win the game." << endl;
		}

		cout << "Do you want to continue(Y/N): ";
		cin >> toContinue;

	}while(toContinue == 'Y');

	return 0;
}