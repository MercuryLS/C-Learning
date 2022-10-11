#include<stdio.h>
#define N 4
int main()
{
    int i,n[N],temp,k;
    printf("Please input the password:\n");
    for(i=0;i<=N-1;i++)
    {
        scanf("%d",&n[i]);
        n[i]=(n[i]+5)%10;
    }
    for(k=N-1;k>=0;k--)
    {
        printf("%d",n[k]);
    }
    printf("\n");
    return 0;
}