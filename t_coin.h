#include <bits/stdc++.h>
using namespace std;

#define SIZE 3

#ifndef T_COIN
	#define T_COIN


void output_arr(char arr[SIZE][SIZE])
{
	for(int i = 0; i < SIZE; i++)
	{
		for(int j = 0; j < SIZE; j++)
		{
			cout << arr[i][j] << "  ";
		}
		cout << endl;
	}
}


#endif