#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	  int account;
		 float moneyweek,salaryweek,hour,hoursalary,a,product,b;
	printf("enter account number:");
	scanf("%d",&account);
	if (account > 4)
	{
		printf("��J�N�X�L��");
		account = 5;
	}
	switch (account)
	{
	default:
	case 1:
		
		printf("�g�z�H���T�w�P�~��:500");
		
		break;
	case 2:
	
		printf("�п�J���~�u���P�W�Z�ɼ�");
		scanf("%f", &hour);
		printf("�п�J���~");
		scanf("%f", &hoursalary);
		if (hour <= 40)
		{
			a = hour * hoursalary;

		}
		else {
			a = hour * hoursalary + (hour - 40)*1.5*hoursalary;
		}
		printf("���~�u�P�~��:%f",a);

		break;
	
	case 3:
	
		printf("�п�J���P�P����B:");
		scanf("%f", & moneyweek);
		salaryweek = 250 + moneyweek * 0.057;
		printf("��Ī��u�P�~��%f:", salaryweek);

		break;
	
	case 4:
	
		printf("�п�J�ӭ��u�Ͳ����");
		scanf("%f",& product);
		printf("�Ͳ������S���C��5��\n");
		b = product * 5;
		printf("�s�u�P�~��%f", b);
		break;

	 case 5:
		break;


	}
	


	return 0;


}