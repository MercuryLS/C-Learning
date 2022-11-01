#include<stdio.h>
void find(int n);
void judge(int n);

int main()
{
    int i, j, s, n,m;
    printf("请输入所选范围上限：");
    scanf("%d", &n);
    find(n);
    printf("请输入要判断的数:");
    scanf("%d",&m);
    judge(m);
	return 0;
}

void find(int n)
{
    int i,j,s;
    for(i=2; i<=n; i++)
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
}

void judge(int n)
{
    int i,j,s;
    s=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0) s+=i;
    }
    if(s==n) printf("It's a perfect number.");
    else printf("It's not a perfect number.");
}