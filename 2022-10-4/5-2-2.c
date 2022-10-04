#include<stdio.h>
int main()
{
	int m,i,sum;
	m=2;
	while(m<=1000)
	{
		sum=0;
	    i=1;
	    while(i<=m/2)
		 {
			 if(m%i==0)
	         {
			  sum+=i;
	         }
			 i++;
	     }
	if(m==sum)
	{
		printf("%d\n",m);
    }
	m++;	 
	}
	return 0;
}