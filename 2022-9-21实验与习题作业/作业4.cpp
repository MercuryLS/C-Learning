#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
char character_1, character_2;
printf("�����������ַ���\n");
character_1 = getchar();
character_2 = getchar();
printf("��putchar���������Ϊ��");
putchar(character_1);
putchar(character_2);
printf("\n");
printf("--------------\n");
printf("��printf���������Ϊ��\n");
printf("%c\n", character_1);
printf("%c\n", character_2);
return 0;
}