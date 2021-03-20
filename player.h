#include <iostream>
#include "output_arr.h"
using namespace std;

#ifndef PLAYER
	#define PLAYER
// the first player uses 'O' and the second player uses 'X'
char input_pos()
{
	char input;
	do
	{
		cout << "Enter the position: ";
		cin >> input;

	}while(input <= 48 && input >= 58);

	return input;

}

char check_taken(char arr[9])
{
	char input = input_pos();

	for(int i = 1; i <= 9; i++) 
	{	
		if(input == (48 + i) && (arr[i - 1] == 'O' || arr[i - 1] == 'X'))
		{
			cout << "The position is taken.";
			input = check_taken(arr);
		}
		
		if(input == (48 + i) && !(arr[i - 1] == 'O' || arr[i - 1] == 'X')) // 48 == 0 in char
		{
			return input;
		}
	}
}

void firstPly_input(char arr[9]) // 'O'
{
	char f;
	cout << "Player 1 ";
	f = check_taken(arr);

	for(int i = 0; i < 9; i++)
	{
		if(f == arr[i])
		{
			arr[i] = 'O';
		}
	}

	output_arr(arr);
	cout << endl;
}

void secondPly_input(char arr[9]) // 'X'
{
	char s;
	cout << "Player 2 ";
	s = check_taken(arr);
	for(int i = 0; i < 9; i++)
	{
		if(s == arr[i])
		{
			arr[i] = 'X';
		}
	}
	output_arr(arr);
	cout << endl;
}

#endif