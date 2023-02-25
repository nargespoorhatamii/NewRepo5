// Araye10 in 10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <conio.h>

int main()
{
	int a[10][10];
	for (int i= 0; i <= 9; i++)
	{
		for (int j = 0; j <= 9; j++)
			std::cin >> a[i][j];

	}
	int c, counter_c = 0; 
	std::cin >> c >> counter_c;
	for (int j = 0; j <= 9; j++)
	{
		for (int i = 0; i <= 9; i++)
		{
			{if (a[10][10] == counter_c)
				counter_c++; }
		}
	}
	std::cout << "the repeat of the number is:" << counter_c;

	return 0;

}

