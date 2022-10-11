#include<stdio.h>
int main()
{
	int year=1;
	float money=8000,p;
	while(year<=3)
	{
		money*=1.028;
		year++;
	}
	while(money<=10000&&year<10&&year>3)
	{
		money*=1.027;
		if(money>10000||year>10)
			{
			break;
		}
		year++;
	}
		printf("year=%d\n",year);
		printf("money=%f\n",money);
	return 0;
}