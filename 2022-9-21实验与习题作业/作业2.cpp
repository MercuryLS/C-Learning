#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	double a, r, n, D, I;
	printf("������a, r, n:");
	scanf("%lf%lf%lf", &a, &r, &n);
	I = 1 + r;
	D = a*(pow(I, n)-1)/(I-1)/pow(I,n);
	printf("������:%f", D);
	return 0;
}