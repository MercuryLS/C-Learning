#include<stdio.h>
int main()
{
	int num,count;
	printf("������������");
	scanf("%d",&num);
	count=1;
	if(num<0)
		num=-1*num;
	while(num/10)
	{
		num=num/10;
		count++;
	}
	printf("������λ��Ϊ��%d\n",count);
	return 0;
}