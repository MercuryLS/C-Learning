#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    float x,y;
    printf("请输入利润：");
    scanf("%f",&x);
    if (x <= 10)
        y = 0.1 * x;
    else if (x <= 20)
        y = 0.075 * x + 0.25;
    else if (x <= 40)
        y = 0.05 * x + 0.75;
    else if (x <= 60)
        y = 0.03 * x + 1.55;
    else if (x <= 100)
        y = 0.015 * x + 2.45;
    else
        y = 0.01 * x + 2.95;
    printf("奖金为:%f",y);
    return 0;
}
