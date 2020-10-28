#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a;
	float s;
	float sum;
	
	a = 0;
		while (a != 1)
		{
			printf("enter sales in dollar(-1 to end):");
			scanf("%f", &s);
			sum = (s * 0.09) + 200;
			if (s == -1)
			{
				break;
			}
			printf("salary is %f\n", sum);

			
	    }
		return 0;
}
