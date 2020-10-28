#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{

	int an, be, tc, tcr, cl,nb;
	an = 0;
	while (an != -1||nb<cl) 
	{
		printf(" enter account number(-1 to end)");
		scanf("%d", &an);
		if (an == -1)
		{
			break;
		}
		printf("begining balance:");
		scanf("%d", &be);
		printf("total charges:");
		scanf("%d", &tc);
		printf("total credit:");
		scanf("%d", &tcr);
		printf("credit limit:");
		scanf("%d", &cl);
		nb = be + tc - tcr;

		printf("account:%d\n", an);
		printf("credit limit:%d\n", cl);
		printf("balance:%d\n", nb);
		if (nb > cl)
		{
			printf("credit limit exceed \n");
		}
	}
	
	return 0;

}