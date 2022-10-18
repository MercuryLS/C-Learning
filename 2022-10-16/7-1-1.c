#include<math.h>
#include<stdio.h>

float fun(float x)
{
	return x*x+6*x-7;
}

int main()
{
	float x,f1,f2,f3;
	printf("Please input the value of x:");
	scanf("%f",&x);
	f1=fun(x);
	printf("f1 is:%f\n",f1);
	printf("Please input the value of x:");
	scanf("%f",&x);
	f2=fun(x+8);
	printf("f2 is:%f\n",f2);
	printf("Please input the value of x:");
	scanf("%f",&x);
	f3=fun(cos(x));
	printf("f3 is:%f\n",f3);
	return 0;
}