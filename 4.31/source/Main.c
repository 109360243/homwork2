#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

 
int main()
{
	int i, j;
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 5 - i; j++)
		{
			printf(" ");
		}
		for (j = 5 - i + 1; j < 5 + i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (i = 5 - 1; i >= 1; i--)
	{
		for (j = 1; j <= (5 - i); j++)
		{
			printf(" ");
		}
		for (j = 5 - i + 1; j < 5 + i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
