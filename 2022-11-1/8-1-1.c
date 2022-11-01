#include<stdio.h>
int main()
{
    int x,y,*px=&x,*py=&y,*p;
    char ch;
    printf("请输入两个整数:");
    scanf("%d%d",&x,&y);
    getchar();
    printf("请指定排序方式(a-升序 d-降序):");
    scanf("%c",&ch);
    if(x>y&&ch=='a'||x<y&&ch=='d')
    {
        p=px;
        px=py;
        py=p;
    }
    printf("排序结果:%d\t%d\n",*px,*py);
    return 0;
}