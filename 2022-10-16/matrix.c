#include<stdio.h>
 int main()
{   int a[2][4], b[4][3], c[2][3];
    int i, j, k, sum; 
    printf("输入一个2×4的矩阵：\n"); 
    for(i=0;i<2;i++)                    //处理矩阵a中的一行中各元素
    	for(j=0;j<4;j++)               //处理矩阵a中某一列中各元素
			scanf("%d",&a[i][j]);   //输入数据
	printf("输入一个4×3的矩阵；\n"); 
	for(i=0;i<4;i++)                   //处理矩阵b中的一行中各元素
		for(j=0;j<3;j++)               //处理矩阵b中某一列中各元素
			scanf("%d",&b[i][j]);    //输入数据
	for(i=0;i<2;i++)                 //对矩阵c进行处理
	{	for(j=0;j<3;j++)             
		{	sum=0;
			for(k=0;k<4;k++)   //矩阵c中每一个元素的循环计算
			{   
			  sum+=a[i][k]*b[k][j]; //对矩阵c中的某一元素进行计算
			}
			c[i][j]=sum;          //给矩阵c中的某一元素进行赋值
		}	
	}
	printf("得到一个2×3的矩阵：\n");
	for(i=0;i<2;i++)            //输出矩阵c
	{
		for(j=0;j<3;j++)	 
 			printf("%5d",c[i][j]);
 		printf("\n");
		 }
}