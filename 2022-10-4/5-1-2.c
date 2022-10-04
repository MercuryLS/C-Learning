#include<stdio.h>
#include<math.h>
int main()
{
	int a,n,count=1;
	int sn=0,tn=0;
	printf("Please input a and n:\n");
	scanf("%d%d",&a,&n);
	printf("a=%d,n=%d\n",a,n);
	tn=a;
	do
	{
		tn=tn*10+a;
		sn+=tn;
		count++;
	}while(count<=n-1);
	sn+=a;
	printf("a+aa+бнбн=%ld\n",sn);
	return 0;
}