#include<stdio.h>
int main()
{
    char a[3][80];
    int i,j,capital=0,lowercase=0,digital=0,blank=0,others=0;
    for(i=0;i<3;i++)
        {
            printf("请输入文章第%d行的80个字符",i+1);
            for(j=0;j<80;j++)
                {
                    scanf("%c",&a[i][j]);
                    if(65<=a[i][j]&&a[i][j]<=90) capital++;
                    else if(97<=a[i][j]&&a[i][j]<=122) lowercase++;
                    else if(48<=a[i][j]&&a[i][j]<=57) digital++;
                    else if(a[i][j]==32) blank++;
                    else others++;
                }
            getchar();
        }
    printf("英文大写字母个数:%d\n",capital);
    printf("英文小写字母:%d\n",lowercase);
    printf("数字个数:%d\n",digital);
    printf("空格个数:%d\n",blank);
    printf("其他字符个数:%d\n",others);
    return 0;
}