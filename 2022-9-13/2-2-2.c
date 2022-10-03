#include<stdio.h>
int main(void)
{	int x,y,z,i,j;
    x=1;
	y=100;
	z=(x+y)*5;
	printf("x=%d,y=%d,z=%d\n",x,y,z);
	x=(i=10,j=5,i*j);
	printf("x=%d\n",x);
	x=i=10,j=5;
	printf("x=%d,i=%d,i*j=%d\n",x,i,i*j);
   return 0;
}