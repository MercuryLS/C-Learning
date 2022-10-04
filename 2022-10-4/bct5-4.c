#include<stdio.h>
int main()
{
	int num,num2,count,i=1,a,sum=0;
	printf("请输入整数：");
	scanf("%d",&num);
	num2=num;
	count=1;
	if(num<0)
		num=-1*num;
	while(num/10)
	{
		num=num/10;
		count++;
	}
	printf("整数的位数为：%d\n",count);
	while(i<=count)
	{
		a=num2%10;
		sum+=a;
		num2=num2/10;
		i++;
	}
	printf("和为：%d\n",sum);
	return 0;
}