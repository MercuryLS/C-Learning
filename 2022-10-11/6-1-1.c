#include<stdio.h>
#define N 10
int main()
{
	float score[N],sum,min,max,ave;
	int i;
	printf("������%dλ��ί������:\n",N);
	printf("�������1λ��ί������:\n");
	scanf("%f",&score[0]);
	sum=min=max=score[0];
	for(i=1;i<N;i++)
	{
		printf("������%dλ��ί������:\n",i+1);
		scanf("%f",&score[i]);
		sum+=score[i];
		if(score[i]>max) max=score[i];
		if(score[i]<min) min=score[i];
	}
	sum=sum-max-min;
	ave=sum/(N-2);
	printf("��ѡ�ֵĵ÷���:%.2f\n",ave);
	return 0;
}