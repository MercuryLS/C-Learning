#include<stdio.h>
int main()
{
	int num,a,b,c,k;
	printf("请输入一个三位正整数:");
	scanf("%d",&num);
	if(num>=100&num<=999){
		a=num%10;
		b=num/10%10;
		c=num/100;
		k=100*a+10*b+c;
		printf("%d",k);
	}else{
		printf("输入错误\n");
	}
	return 0;
}