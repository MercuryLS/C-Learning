#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<cmath>
#include<math.h>
int main()
{
	double x,y,k;
	x = 0;
	y = 0;
	scanf("%lf%lf",&x,&y);
	k = sin(abs(x)+abs(y))/sqrt(cos(abs(x+y)));
	printf("kµÄÖµÎª:%lf",k);
	return 0;
}