#include<stdio.h>

int f(int a,int b)
{
	int x,n;
	n=a>b?b:a;
	while (a%n!=0||b%n!=0)
		--n;
	x=a*b/n;
	return x;
}

int main()
{
	int a,b,c,d,e;
	int x,y,z,result;
	printf("Please input 5 numbers:\n");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	x=f(a,b);
	y=f(c,d);
	z=f(x,y);
	result=f(z,e);
	printf("The result is:%d\n",result);
	return 0;
}