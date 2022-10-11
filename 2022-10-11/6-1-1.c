#include<stdio.h>
#define N 10
int main()
{
	float score[N],sum,min,max,ave;
	int i;
	printf("请输入%d位评委的评分:\n",N);
	printf("请输入第1位评委的评分:\n");
	scanf("%f",&score[0]);
	sum=min=max=score[0];
	for(i=1;i<N;i++)
	{
		printf("请输入%d位评委的评分:\n",i+1);
		scanf("%f",&score[i]);
		sum+=score[i];
		if(score[i]>max) max=score[i];
		if(score[i]<min) min=score[i];
	}
	sum=sum-max-min;
	ave=sum/(N-2);
	printf("该选手的得分是:%.2f\n",ave);
	return 0;
}