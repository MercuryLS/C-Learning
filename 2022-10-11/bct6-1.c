#include<stdio.h>
#define N 20
int main()
{
    int i;
    float n[N],sum=0;
    printf("Please input 20 integers:\n");
    for(i=0;i<=N-1;i++)
        {
            scanf("%f",&n[i]);
        }
    for(i=0;i<=N-1;i++)
        {
            if(n[i]>0)
            {
                sum+=n[i];
            }
        }
    printf("sum=%f\n",sum);
}