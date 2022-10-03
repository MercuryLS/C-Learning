#include <stdio.h>
int main(void)
{
   int a,b;
   float x,y; 
   char c1,c2;
   printf("请按格式要求正确输入数据:\n");
   scanf("a=%d b=%d",&a,&b);
   fflush(stdin);
   scanf("x=%f,y=%e",&x,&y);
   fflush(stdin);
   scanf("c1=%c c2=%c",&c1,&c2);
   printf("\na=%d,b=%d,x=%f,y=%.2f,c1=%c,c2=%c\n",a,b,x,y,c1,c2);
   return 0;
}
