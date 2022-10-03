#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char a, b, c, d, e;
	a = getchar();
	b = getchar();
	c = getchar();
	d = getchar();
	e = getchar();
	a += 3;
	b += 3;
	c += 3;
	d += 3;
	e += 3;
	printf("√‹¬Î:%c%c%c%c%c", a, b, c, d, e);
	return 0;
}