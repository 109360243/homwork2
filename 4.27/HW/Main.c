#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int side1,side2,tri,a;
	for (side1 = 1; side1 < 501; side1++)
	{
		for (side2 = 1; side2 < 501; side2++)
		{
			for (tri = 1; tri < 501; tri++)
			{
				
				if (side1*side1 + side2* side2 == tri* tri)
				{
					printf("side1=%d\n side2=%d\n tri=%d\n", side1, side2, tri);
				}
			}
		}
	}
	return 0;

}