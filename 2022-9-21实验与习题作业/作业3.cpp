#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	double a=0,b=0,h=0,s;
	printf("������a,b,h��");
	scanf("%lf%lf%lf",&a,&b,&h);
	s = (a+b)*h/2;
	printf("���:%lf", s);
	return 0;
}