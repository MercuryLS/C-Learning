#include <stdio.h>
int main(void)
{  int a=6,b=7,c=8;
   float x=1.5,y=3.6,z=-6.9;
   long m=53588,n=123456;
   char c1='A',c2='a';
      /*按题目要求格式输出各个不同类型的变量值*/
   printf("%d,%d,%d\n",a,b,c);
   printf("%f,%f,%f\n",x,y,z);
   printf("%d,%d\n",m,n);
   printf("%c,%d\n",c1,c1);
   printf("%c,%d\n",c2,c2);
   return 0;
}