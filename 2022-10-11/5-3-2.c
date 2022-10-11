#include<stdio.h>
int main()
{
	int k=0;
	char c ='A';
	do
	{
		switch(c++)
		{
		case 'A':k++;break;
		case 'B':k--;
		case 'C':k+=2;break;
		case 'D':k=k%2;continue;
		case 'E':k=k*10;break;
		default:k/=3;
		}
		k++;
	}while(c<'G');
	printf("k=%d\n",k);
	return 0;
}
//1. 6次
//2. 第三次循环，转向k++
//3. 转向k++,终止switch
//4. k=4