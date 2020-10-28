#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int hour, rate, sal;

	printf("enter of hours worked:");
	scanf("%d", &hour);
	printf("enter hourly rate of the worker ($100.00):");
	scanf("%d", &rate);
	sal = hour * rate;
	printf("salary is %d",sal );
	return 0;
}
