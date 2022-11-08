#include<stdio.h>
int main()
{
    char str[80],*p;
    int word=0;
    printf("请输入英文句子:");
    gets(str);
    for(p=str;p<str+80;p++)
        {
            if(*p==32)
                {
                    word=0;
                }
            else if((*p>=97)&&(*p<=122)&&(word==0))
                {
                    *p-=32;
                    word=1;
                }
        }
    printf("经过处理的字符串为:%s\n",str);        
    return 0;
}