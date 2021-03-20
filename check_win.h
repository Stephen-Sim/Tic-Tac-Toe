#include <bits/stdc++.h>
using namespace std;

// the first player uses 'O' and the second player uses 'X'
#ifndef CHECK_WIN
	#define CHECK_WIN
int win_condition(char arr[3][3])
{
	//arr[][] = 'O' && arr[][] = 'O' && arr[][] = 'O'
	if(arr[0][0] == 'O' && arr[0][1] == 'O' && arr[0][2] == 'O')
	{
		return 1;
	}
	else if(arr[1][0] == 'O' && arr[1][1] == 'O' && arr[1][2] == 'O')
	{
		return 1;
	}
	else if (arr[2][0] == 'O' && arr[2][1] == 'O' && arr[2][2] == 'O')
	{
		return 1;
	}
	else if (arr[0][0] == 'O' && arr[1][0] == 'O' && arr[2][0] == 'O')
	{
		return 1;
	}
	else if (arr[1][0] == 'O' && arr[1][1] == 'O' && arr[1][2] == 'O')
	{
		return 1;
	}
	else if (arr[2][0] == 'O' && arr[2][1] == 'O' && arr[2][2] == 'O')
	{
		return 1;
	}
	else if (arr[0][0] == 'O' && arr[1][1] =='O' && arr[2][2] == 'O')
	{
		return 1;
	}
	else if (arr[2][0]== 'O' && arr[1][1] == 'O' && arr[0][2] == 'O')
	{
		return 1;
	}

	if(arr[0][0] == 'X' && arr[0][1] == 'X' && arr[0][2] == 'X')
	{
		return 2;
	}
	else if(arr[1][0] == 'X' && arr[1][1] == 'X' && arr[1][2] == 'X')
	{
		return 2;
	}
	else if (arr[2][0] == 'X' && arr[2][1] =='X' && arr[2][2] == 'X')
	{
		return 2;
	}
	else if (arr[0][0] =='X' && arr[1][0] == 'X' && arr[2][0] == 'X')
	{
		return 2;
	}
	else if (arr[1][0] == 'X' && arr[1][1] == 'X' && arr[1][2] == 'X')
	{
		return 2;
	}
	else if (arr[2][0] == 'X' && arr[2][1] == 'X' && arr[2][2] == 'X')
	{
		return 2;
	}
	else if (arr[0][0] == 'X' && arr[1][1] == 'X' && arr[2][2] == 'X')
	{
		return 2;
	}
	else if (arr[2][0] == 'X' && arr[1][1] == 'X' && arr[0][2] == 'X')
	{
		return 2;
	}

	return 0; // keep continue
}

#endif