#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
char character_1, character_2;
printf("请输入两个字符；\n");
character_1 = getchar();
character_2 = getchar();
printf("用putchar语句输出结果为：");
putchar(character_1);
putchar(character_2);
printf("\n");
printf("--------------\n");
printf("用printf语句输出结果为：\n");
printf("%c\n", character_1);
printf("%c\n", character_2);
return 0;
}