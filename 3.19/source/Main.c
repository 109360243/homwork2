#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	float i, p, r, d,a;
	printf("input the infortmain about interest\n");
	printf ("enter loan principal:");
	scanf("%f", &p);
	
	printf("enter interest rate:");
	scanf("%f", &r);
	printf("enter term of the loan in days:");
	scanf("%f", &d);


	for(i=0;i<2;i++)
	{
		if (p == -1)
		{
			break;
		}
	}
	
	
	i = p * r*(d / 365);
	printf("the interst charge is%f",i);

	return 0;

}