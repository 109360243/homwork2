#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int temp;
	int i;
	int j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 13; j++)
		{
			
			if (i == 0 || i == 2||j==0||j==12)
			{
				printf("+");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
   }
	return 0;
}
