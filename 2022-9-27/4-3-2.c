#include<stdio.h>
int main()
{
	double a,b,c,max1,max;
	printf("请输入a,b,c:\n");
	scanf("%lf%lf%lf",&a,&b,&c);
	max1= b>c?b:c;
	max=a>max1?a:max1;
	printf("最大值为：%lf",max);
	return 0;
}