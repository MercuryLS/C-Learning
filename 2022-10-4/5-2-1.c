#include<stdio.h>
#include<math.h>
int main()
{
	int n,i=1,j=1,x,sum=0;
	printf("«Î ‰»În:");
	scanf("%d",&n);
	while(i<=n)
	{
		x=i;
		while(j<i)
		{
			x=10*x+i;
			j++;
		}
		sum+=x;
		i++;
	}
	printf("sun=%d\n",sum);
	return 0;
}