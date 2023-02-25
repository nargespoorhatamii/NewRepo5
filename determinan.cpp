// determinan.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>


int main()
{
	int a[3][3];
	for (int i = 0; i <= 2; i++)
	{
		for (int j = 0; j <= 2; j++)
		{
			std::cin >> a[i][j];
		}
	}
	int det =0;
	std::cin >> det;

	for (int i = 0; i <= 2; i++)
	{
		{for (int j = 0; j <= 2; j++)

			det = a[0][0] * ((a[1][1] * a[2][2]) - (a[2][1] * a[1][2])) - a[0][1] * ((a[1][0] * a[2][2]) - (a[1][2] * a[2][0])) + a[0][2] * ((a[1][1] * a[2][0]) - (a[1][0] * a[2][1]));
		}
	}
		std::cout << "determinan is:" << det;
	
return 0;

}

