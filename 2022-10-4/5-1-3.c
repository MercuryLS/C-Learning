#include<stdio.h>
int main()
{
	int num,count;
	printf("请输入整数：");
	scanf("%d",&num);
	count=1;
	if(num<0)
		num=-1*num;
	while(num/10)
	{
		num=num/10;
		count++;
	}
	printf("整数的位数为：%d\n",count);
	return 0;
}