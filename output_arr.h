#include <iostream>
using namespace std;

#ifndef OUTPUT_ARR
	#define OUTPUT_ARR

void output_arr(char arr[9])
{
	for(int i = 1; i <= 9; i++)
	{
		cout << arr[i - 1];
		if(i % 3 == 0)
		{
			cout << endl;
		}
		else 
		{
			cout << " ";
		}

	}
}

#endif