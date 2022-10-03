#include<stdio.h>
int main()
{
	double x,y;
	printf("请输入货款：\n");
	scanf("%lf",&x);
	if(x>=1000)
		y=0.8*x;
	else if(x>=500)
		y=0.9*x;
	else if(x>=200)
		y=0.95*x;
	else if(x>=100)
		y=0.97*x;
	else
		y=x;
	printf("该交的货款为：%lf\n",y);
	return 0;
}