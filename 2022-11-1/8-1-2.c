#include<stdio.h>
void filter(float *,float *,float *, float *,float *);

int main()
{
    float x,y,z,max,min;
    float *px=&x,*py=&y,*pz=&z;
    printf("请输入三个数:");
    scanf("%f%f%f",px,py,pz);
    filter(px,py,pz,&max,&min);
    printf("最大数:%f\n最小数:%f\n",max,min);
    return 0;
}

void filter(float *p1,float *p2,float *p3, float *m,float *n)
{
    *m=*p1>*p2? *p1:*p2;
    *m=*m>*p3? *m:*p3;
    *n=*p1>*p2? *p2:*p1;
    *n=*n>*p3? *p3:*n;
}