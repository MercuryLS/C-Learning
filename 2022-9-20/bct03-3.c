#include<stdio.h>
int main()
{
	int num,a,b,c,k;
	printf("������һ����λ������:");
	scanf("%d",&num);
	if(num>=100&num<=999){
		a=num%10;
		b=num/10%10;
		c=num/100;
		k=100*a+10*b+c;
		printf("%d",k);
	}else{
		printf("�������\n");
	}
	return 0;
}