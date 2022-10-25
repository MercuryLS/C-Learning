#include<stdio.h>
#include<conio.h>
#define SIZE 10

int FindEvenNumbers(int list[SIZE]);
int main()
{
	int list[SIZE];
	int even[SIZE];
	int count;
	int i;
	printf("输入%d个整数:\n",SIZE);
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",&list[i]);
	}
	count=FindEvenNumbers(list);
	printf("有%d个偶数:\n",count);
	for(i=0;i<count;i++)
	{
		printf("%d ",even[i]);
	}
	printf("\n");
	printf("请按任意键继续……");
	getch();
	return 0;
}

int FindEvenNumbers(int list[SIZE])
{
	int k,count=0;
	int even[SIZE];
	for(k=0;k<SIZE;k++)
	{
		if(list[k]%2==0)
		{
			even[count]=list[k];
			count++;
		}
	}
	return count;
}