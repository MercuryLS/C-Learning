#include<stdio.h>
int main()
{
	int num;
	float money;
	char a,b;
	printf("������������");
	scanf("%d",&num);
	printf("�Ƿ�Ӽ���Y/N\n");
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
	default:printf("�������\n");
	}
	printf("��Ҫ��Ǯ��Ϊ��%f\n",money);
	return 0;
}