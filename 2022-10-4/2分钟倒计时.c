#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
int main(void)
{
	int time = 120;
	system("color FC");
	while (time >= 0)
	{
		system("cls");
		printf("%d:%02d", time/60, time%60);//%02d����˼�����������λ�������0����
		Sleep(1000);
		time--;
	}
	return 0;
}