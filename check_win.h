// the first player uses 'O' and the second player uses 'X'
#ifndef CHECK_WIN
	#define CHECK_WIN
int win_condition(char arr[9])
{
	if(arr[0] == 'O' && arr[1] == 'O' && arr[2] == 'O')
	{
		return 1;
	}
	else if(arr[3] == 'O' && arr[4] == 'O' && arr[5] == 'O')
	{
		return 1;
	}
	else if (arr[6] == 'O' && arr[7] == 'O' && arr[8] == 'O')
	{
		return 1;
	}
	else if (arr[0] == 'O' && arr[3] == 'O' && arr[6] == 'O')
	{
		return 1;
	}
	else if (arr[1] == 'O' && arr[4] == 'O' && arr[7] == 'O')
	{
		return 1;
	}
	else if (arr[2] == 'O' && arr[5] == 'O' && arr[8] == 'O')
	{
		return 1;
	}
	else if (arr[0] == 'O' && arr[4] =='O' && arr[8] == 'O')
	{
		return 1;
	}
	else if (arr[2]== 'O' && arr[4] == 'O' && arr[6] == 'O')
	{
		return 1;
	}

	if(arr[0] == 'X' && arr[1] == 'X' && arr[2] == 'X')
	{
		return 2;
	}
	else if(arr[3] == 'X' && arr[4] == 'X' && arr[5] == 'X')
	{
		return 2;
	}
	else if (arr[6] == 'X' && arr[7] == 'X' && arr[8] == 'X')
	{
		return 2;
	}
	else if (arr[0] == 'X' && arr[3] == 'X' && arr[6] == 'X')
	{
		return 2;
	}
	else if (arr[1] == 'X' && arr[4] == 'X' && arr[7] == 'X')
	{
		return 2;
	}
	else if (arr[2] == 'X' && arr[5] == 'X' && arr[8] == 'X')
	{
		return 2;
	}
	else if (arr[0] == 'X' && arr[4] =='X' && arr[8] == 'X')
	{
		return 2;
	}
	else if (arr[2]== 'X' && arr[4] == 'X' && arr[6] == 'X')
	{
		return 2;
	}
	return 0; // keep continue
}

#endif