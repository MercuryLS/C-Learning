#include<stdio.h>
int main()
{
	int n=1,m=1,k=1;
	double sum=0;
	while(n<=100)
	{
		sum+=n;
		n++;
	}
	while(m<=50)
	{
		sum+=m*m;
		m++;
	}
	while(k<=10)
	{
		sum+=1.0/k;
		k++;
	}
	printf("sum=%lf\n",sum);
	return 0;
}