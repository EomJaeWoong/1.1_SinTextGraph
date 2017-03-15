#include <stdio.h>
#include <math.h>
#include <Windows.h>

void main()
{
	int iAngle = 0;
	double dRadian;
	double dStar;

	while (1)
	{
		for (iAngle = 0; iAngle < 180; iAngle += 5)
		{
			dRadian = iAngle * 3.14 / 180;
			for (dStar = 0.0; dStar < sin(dRadian); dStar += 0.015){
				printf("*");
			}
			Sleep(20);
			printf("\n");
		}
	}
}