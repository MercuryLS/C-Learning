#include <stdio.h>
#include <stdlib.h>

#include "main.h"

//��ʾ���ܲ˵�,����ѡ��Ĳ˵���
int Menu()
{
	int menuitem ;
	int item;
	while(1)
	{
		menuitem = -1;
		item = -1;
		while ( menuitem != 1 && menuitem != 2 && menuitem != 3 )
		{
			system("cls");	//���� 
			printf("\n\t\t   �����ܲ˵�\n") ;	
			printf("\t\t***********************\n");	
			printf("\n\t\t1. �ɼ�����\n");
			printf("\t\t2. ������ɼ�ͳ��\n");
			printf("\t\t3. ����\n");
			printf("\t\t0. �˳�\n\n");
			printf("\t\t***********************\n");
			printf("\t\t��ѡ��(0-3):");
			scanf("%d",&menuitem);
			if (menuitem == 0) 
			{
				printf("���س�������...") ;
				getchar();
				getchar();
				exit(0);
			}
		}
		switch(menuitem)
		{
		case 1:
			{
				while(item != 1 && item != 2 && item != 3 && item != 4)
				{
					system("cls");	//���� 
					printf("\n\t\t  ��ѡ������ʽ\n");
					printf("\t\t***********************\n");
					printf("\n\t\t1. ����ѧ�ɼ�����\n");
					printf("\t\t2. ��Ӣ��ɼ�����\n");
					printf("\t\t3. ��������ɼ�����\n");
					printf("\t\t4. ���ܷ�����\n");
					printf("\t\t0. ����\n");
					printf("\t\t***********************\n");
					printf("\t\t��ѡ��(0-4):");
					scanf("%d",&item);
					if (item == 0) break;
				}

				switch(item)
				{
				case 1:
					return MATH_SORT;
				case 2:
					return ENGLISH_SORT;
				case 3:
					return COMPUTER_SORT;
				case 4:
					return SUM_SORT;
				}
				break;
			}
		case 2:
			{
				while(item != 1 && item != 2 && item != 3 && item != 4)
				{
					system("cls");	//���� 
					printf("\n\t\t  ͳ�ƹ���ѡ��\n");
					printf("\t\t***********************\n");
					printf("\n\t\t1. ͳ����ѧ�ɼ�\n");
					printf("\t\t2. ͳ��Ӣ��ɼ�\n");
					printf("\t\t3. ͳ�Ƽ�����ɼ�\n");
					printf("\t\t0. ����\n\n");
					printf("\t\t***********************\n");
					printf("\t\t��ѡ��(0-4):");
					scanf("%d",&item);
					if (item == 0) break;
				}

				switch(item)
				{
				case 1:
					return MATH_STATISTICS;
				case 2:
					return ENGLISH_STATISTICS;
				case 3:
					return COMPUTER_STATISTICS;
				case 4:
					return SUM_STATISTICS;
				}
				break;
			}
		case 3:
			{
				return SEARCH;
			}
		}
	}
}