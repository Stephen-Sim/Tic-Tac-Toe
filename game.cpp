#include <bits/stdc++.h>
#include "player.h"
#include "t_coin.h"
#include "check_win.h"
#include "output_arr.h"
using namespace std;

int main()
{
	cout << "Welcome to Stephen\'s Tic Tac Toe Game" << endl;
	char toContinue;
	do
	{
		srand(time(NULL));

		char arr[9] = 
		{
			'1', '2', '3',
			'4', '5', '6',
			'7', '8', '9'
		};

		output_arr(arr);

		bool start_first;
		start_first = throw_coin();
		cout << "The player 1 uses \'O\', the player 2 uses \'X\'." << endl;

		int win = 0;
		do
		{
			firstPly_input(arr);
			win = win_condition(arr);

			if(win != 0)
			{
				break;
			}

			int sum = 0;
			for(int  i = 0; i < 9; i++)
			{
				sum = sum + arr[i];
			}

			if(sum == 747)
			{
				cout << "Game Result: Draw Game!" << endl;
				break;
			}

			secondPly_input(arr);
			win = win_condition(arr);
			if(win != 0)
			{
				break;
			}
			
			

		}while(win == 0);

		if(win == 1)
		{
			cout << "Congratulation, player 1 wins the game.\n" << endl;
		}
		else if(win == 2)
		{
			cout << "Congratulation, player 2 wins the game.\n" << endl;
		}

		do
		{
			cout << "Do you want to continue(Y/N): ";
			cin >> toContinue;
			toContinue = toupper(toContinue);
		}while(!(toContinue == 'Y' || toContinue == 'N'));

		cout << endl;

	}while(toContinue == 'Y');

	cout << "Thank you guys for playing this game !!! " << endl;

	return 0;
}