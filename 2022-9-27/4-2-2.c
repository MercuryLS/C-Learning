#include<stdio.h>
int main()
{
	float p,w;
	double f;
	int s,c;
	printf("请输入基本运费，货物重量，距离:\n");
	scanf("%f,%f,%d",p,w,s);
	if(s>=3000)
		f=p*w*s*0.85;
	else
	{
	 c=s/250;
	 switch(c)
	 {
	 case 0:f=p*w*s*1;break;
	 case 1:f=p*w*s*0.98;break;
	 case 2:f=p*w*s*0.95;break;
	 case 3:f=p*w*s*0.95;break;
	 case 4:f=p*w*s*0.92;break;
	 case 5:f=p*w*s*0.92;break;
	 case 6:f=p*w*s*0.92;break;
	 case 7:f=p*w*s*0.92;break;
	 case 8:f=p*w*s*0.9;break;
	 case 9:f=p*w*s*0.9;break;
	 case 10:f=p*w*s*0.9;break;
	 case 11:f=p*w*s*0.9;break;
	 }
	}
	printf("运费为：%lf\n",f);
	return 0;
}