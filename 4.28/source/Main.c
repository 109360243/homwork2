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
		printf("輸入代碼無效");
		account = 5;
	}
	switch (account)
	{
	default:
	case 1:
		
		printf("經理人員固定周薪為:500");
		
		break;
	case 2:
	
		printf("請輸入時薪工本周上班時數");
		scanf("%f", &hour);
		printf("請輸入時薪");
		scanf("%f", &hoursalary);
		if (hour <= 40)
		{
			a = hour * hoursalary;

		}
		else {
			a = hour * hoursalary + (hour - 40)*1.5*hoursalary;
		}
		printf("時薪工周薪為:%f",a);

		break;
	
	case 3:
	
		printf("請輸入本周銷售金額:");
		scanf("%f", & moneyweek);
		salaryweek = 250 + moneyweek * 0.057;
		printf("抽傭金工周薪為%f:", salaryweek);

		break;
	
	case 4:
	
		printf("請輸入該員工生產件數");
		scanf("%f",& product);
		printf("生產之報酬為每件5元\n");
		b = product * 5;
		printf("零工周薪為%f", b);
		break;

	 case 5:
		break;


	}
	


	return 0;


}