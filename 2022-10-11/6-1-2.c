#include<stdio.h>
#define N 30
int main()
{
	float a[N],temp,ave,sum=0;
	int i,j,flag,count=0;
	printf("请输入%d个数：\n",N);
	for(i=0;i<N;i++)
	{
		scanf("%f",&a[i]);
	}
	for(i=0;i<N-1;i++)
	{
		for(flag=0,j=0;j<=N-1-i;j++)
		{
			if(a[j]<a[j+1])
			{
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
				flag=1;
			}
		}
	}
	printf("排序后的%d个数:\n",N);
	for(i=0;i<N;i++)
		printf("%f\n",a[i]);
	printf("\n");
	for(i=0;i<N;i++)
		sum+=a[i];
	ave=sum/N;
	printf("ave=%f\n",ave);
	for(i=0;i<=N-1;i++)
	{
		if(a[i]>ave) count++;
	}
	printf("count=%d",count);
	return 0;
}