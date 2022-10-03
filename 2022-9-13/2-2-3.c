#include<stdio.h>
#include<math.h>
int main(void)
{	
    double a,b,c,s,area;
	printf("ÇëÊäÈëa,b,cµÄÖµ£º\n");
	scanf("%lf,%lf,%lf",&a,&b,&c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("area=%f\n",area);
	return 0;
}