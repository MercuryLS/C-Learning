#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
#include "ReadData.C"
#include "Menu.C" 


int main()
{
	Student stu[STUDENT_COUNT];
	int menuitem,SUM;
	int i,s,studentID;
	Student * student;
	int s0[STUDENT_COUNT],s1[STUDENT_COUNT],s2[STUDENT_COUNT];

	//����
	system("cls");	 
	//����ѧ����Ϣ
	ReadData(stu, STUDENT_COUNT);

	//����ѧ���ܳɼ�
	SUM=Sum(stu,STUDENT_COUNT);

	//��ѧ���ɼ�������������
	for(int k=0;k<STUDENT_COUNT;k++)
	{
		s0[k]=stu[k].score[0];
		s1[k]=stu[k].score[1];
		s2[k]=stu[k].score[2];
	}
	while(1)
	{
		//��ʾ���ܲ˵�,�����ѡ��Ĳ˵���
		menuitem = Menu();

		switch(menuitem)
		{
		//���ܷ�����
		case SUM_SORT:
			{
				Sort(stu,STUDENT_COUNT,3);
				ShowInfo(stu,STUDENT_COUNT);
				getchar();
				getchar();
				break;
			}

		//����ѧ�ɼ�����
		case MATH_SORT:
			{
				Sort(stu,STUDENT_COUNT,0);
				ShowInfo(stu,STUDENT_COUNT);
				getchar();
				getchar();
				break;
			}

		//��Ӣ��ɼ�����
		case ENGLISH_SORT:
			{
				Sort(stu,STUDENT_COUNT,1);
				ShowInfo(stu,STUDENT_COUNT);
				getchar();
				getchar();
				break;
			}

		//��������ɼ�����
		case COMPUTER_SORT:
			{
				Sort(stu,STUDENT_COUNT,2);
				ShowInfo(stu,STUDENT_COUNT);
				getchar();
				getchar();
				break;
			}

		//ͳ����ѧ�ɼ�����������
		case MATH_STATISTICS:
			{
				printf("��ѧ�����������Ϊ:%d",Statistics(s0,STUDENT_COUNT));
				getch();
				break;
			}

		//ͳ��Ӣ��ɼ�����������
		case ENGLISH_STATISTICS:
			{
				printf("Ӣ�ﲻ���������Ϊ:%d",Statistics(s1,STUDENT_COUNT));
				getch();
				break;
			}

		//ͳ�Ƽ�����ɼ�����������
		case COMPUTER_STATISTICS:
			{
				printf("����������������Ϊ:%d",Statistics(s2,STUDENT_COUNT));
				getch();
				break;
			}

		//��ѧ������ѧ��������ʾѧ���ɼ�
		case SEARCH:
			{
				printf("������ѧ��ID:");
				scanf("%d",&studentID);
				int flag=Search(stu,STUDENT_COUNT,studentID,student);
				if (flag!=-1)
				{
					printf(" \t\t                   �� Ӣ �� ��\n");
					printf("\t\t%d %-9s %d %d %d %d\n", stu[flag].id, stu[flag].name, stu[flag].score[0], stu[flag].score[1], stu[flag].score[2], stu[flag].sum);
					printf("\n");
					getch();
				}
				else
				{
					printf("δ�ҵ���ѧ����");
					getch();
				}
			}

		}
	}
}


/************************************************************************************************/
//Sort function
//���ܣ�����
//������Student stu[]
//		int count��Ҫ�����ѧ����Ŀ
//		int lessonId��Ҫ����Ŀγ̱��
//		��ѧ:MATH_SORT; Ӣ��:ENGLISH_SORT;�����:COMPUTER_SORT;�ܷ�:SUM_SORT
/************************************************************************************************/
void Sort(Student stu[] , int count , int lessonId)
{
	Student temp;
	int i,j;
	if (lessonId!= 3)
		for (i = 0;i <count;i++)
		{
			for (j =1;j <count- i;j++)
			{
				if (stu[j].score[lessonId] > stu[j - 1].score[lessonId])
				{
					temp= stu[j];
					stu[j] = stu[j - 1];
					stu[j - 1] =temp;
				}
			}
		}
	else
	{
		for (i = 0;i <count;i++)
			for (j = 1;j<count-i;j++)
			{
				if (stu[j].sum > stu[j - 1].sum)
				{
					temp = stu[j];
					stu[j] = stu[j - 1];
					stu[j - 1] =temp;
				}
			}
	}
}

/************************************************************************************************/
//���ܣ���ѧ������ѧ��
//������Student stu[]:ѧ�� 
//		int count��ѧ����Ŀ
//		int studentId��Ҫ������ѧ��
//		Student * student: ��������ѧ��
//����ֵ�������������ѧ������1�����򷵻�0
/************************************************************************************************/
int Search(Student stu[] , int count, int studentId, Student * student)
{
	int i=0,flag=-1;
	student=stu;
	for(i=0;i<count;i++)
		if ( (*(student++)).id==studentId)
		{
			flag=i;
			break;
		}
	return flag;
}

/************************************************************************************************/
//���ܣ��������пγ̵��ܷ�
//������Student stu[]
//		int count��ѧ����Ŀ
/************************************************************************************************/
int Sum(Student stu[],int count)
{
	int n,sum=0;
	for(n=0;n<count;n++)
	{
		stu[n].sum=stu[n].score[0]+stu[n].score[1]+stu[n].score[2];
		sum+=stu[n].sum;
	}
	return sum;
}


/************************************************************************************************/
//���ܣ�ͳ�Ʋ���������
//������int score[]:ѧ�����еĿγ̳ɼ�
//		int n: ѧ������ 
//����ֵ������������
/************************************************************************************************/
int Statistics(int score[],int n)
{
	int i,nopass=0;
	for(i=0;i<n;i++)
	{
		if(score[i]<60)
		{
			nopass++;
		}
	}
	return nopass;
}

/************************************************************************************************/
//���ܣ���ʾѧ����Ϣ
//������Student stu[]
//		int count��ѧ����Ŀ
//����ֵ����
/************************************************************************************************/
void ShowInfo(Student stu[] , int count)
{
	for(int i=0;i<count;i++)
	{
		printf("\t\t                   �� Ӣ �� ��\n");
		printf("\t\t%d %-9s %d %d %d %d\n", stu[i].id, stu[i].name, stu[i].score[0], stu[i].score[1], stu[i].score[2], stu[i].sum);
		printf("\n");
	}
}
