#include<stdio.h>
int main()
{
    int i, j, s, n;
    printf("请输入所选范围上限：");
    scanf("%d", &n);
    for( i=2; i<=n; i++ )
    {
        s=0;
        for( j=1; j<i; j++ )
        {
            if(i%j == 0)
                s += j;
        }
        if(s == i)
            printf("It's a perfect number:%d\n", i);
    }
	return 0;
}