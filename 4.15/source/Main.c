#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	
	int j,a;
	float i,r = 5000;

	a = 0;
	for (i =0.10; i <0.125 ;i=i+0.005)
	{
		for (j = 0; j < 15; j++)
		{
			if (j == 0)
			{
				
				a=a+1;
				printf("��%d�ضײv\n",a);
			}
			
			r = r +(r * i);
			printf("��%d�~�Q���[�s�ڬ�:%.2f,�ײv:%.2f\n",j+1, r,i);
		
	    }
		

	}

	return 0;



}
