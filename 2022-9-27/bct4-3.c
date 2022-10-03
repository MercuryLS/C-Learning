#include<stdio.h>
int main()
{
	int num;
	float money;
	char a,b;
	printf("请输入字数：");
	scanf("%d",&num);
	printf("是否加急：Y/N\n");
	b=getchar();
	scanf("%c",&a);
	switch(a)
	{
	case 'Y':if(num<10)
			 {
				 money=15;
			 }
			 if(num>=10)
			 {
				num+=1;
				money=num*1.5;
			 }
			 ;break;
	case 'N':if(num<=10)
			 {
				money=7.5;
			 }
			 if(num>10)
			 {
				money=num*0.75;
			 }
			 ;break;
	default:printf("输入错误\n");
	}
	printf("需要的钱数为：%f\n",money);
	return 0;
}