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

	//清屏
	system("cls");	 
	//读入学生信息
	ReadData(stu, STUDENT_COUNT);

	//计算学生总成绩
	SUM=Sum(stu,STUDENT_COUNT);

	//将学生成绩拷贝进新数组
	for(int k=0;k<STUDENT_COUNT;k++)
	{
		s0[k]=stu[k].score[0];
		s1[k]=stu[k].score[1];
		s2[k]=stu[k].score[2];
	}
	while(1)
	{
		//显示功能菜单,并获得选择的菜单项
		menuitem = Menu();

		switch(menuitem)
		{
		//按总分排序
		case SUM_SORT:
			{
				Sort(stu,STUDENT_COUNT,3);
				ShowInfo(stu,STUDENT_COUNT);
				getchar();
				getchar();
				break;
			}

		//按数学成绩排序
		case MATH_SORT:
			{
				Sort(stu,STUDENT_COUNT,0);
				ShowInfo(stu,STUDENT_COUNT);
				getchar();
				getchar();
				break;
			}

		//按英语成绩排序
		case ENGLISH_SORT:
			{
				Sort(stu,STUDENT_COUNT,1);
				ShowInfo(stu,STUDENT_COUNT);
				getchar();
				getchar();
				break;
			}

		//按计算机成绩排序
		case COMPUTER_SORT:
			{
				Sort(stu,STUDENT_COUNT,2);
				ShowInfo(stu,STUDENT_COUNT);
				getchar();
				getchar();
				break;
			}

		//统计数学成绩不及格人数
		case MATH_STATISTICS:
			{
				printf("数学不及格的人数为:%d",Statistics(s0,STUDENT_COUNT));
				getch();
				break;
			}

		//统计英语成绩不及格人数
		case ENGLISH_STATISTICS:
			{
				printf("英语不及格的人数为:%d",Statistics(s1,STUDENT_COUNT));
				getch();
				break;
			}

		//统计计算机成绩不及格人数
		case COMPUTER_STATISTICS:
			{
				printf("计算机不及格的人数为:%d",Statistics(s2,STUDENT_COUNT));
				getch();
				break;
			}

		//按学号搜索学生，并显示学生成绩
		case SEARCH:
			{
				printf("请输入学生ID:");
				scanf("%d",&studentID);
				int flag=Search(stu,STUDENT_COUNT,studentID,student);
				if (flag!=-1)
				{
					printf(" \t\t                   数 英 计 总\n");
					printf("\t\t%d %-9s %d %d %d %d\n", stu[flag].id, stu[flag].name, stu[flag].score[0], stu[flag].score[1], stu[flag].score[2], stu[flag].sum);
					printf("\n");
					getch();
				}
				else
				{
					printf("未找到该学生！");
					getch();
				}
			}

		}
	}
}


/************************************************************************************************/
//Sort function
//功能：排序
//参数：Student stu[]
//		int count：要排序的学生数目
//		int lessonId：要排序的课程编号
//		数学:MATH_SORT; 英语:ENGLISH_SORT;计算机:COMPUTER_SORT;总分:SUM_SORT
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
//功能：按学号搜索学生
//参数：Student stu[]:学生 
//		int count：学生数目
//		int studentId：要搜索的学号
//		Student * student: 搜索到的学生
//返回值：如果搜索到的学生返回1，否则返回0
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
//功能：计算所有课程的总分
//参数：Student stu[]
//		int count：学生数目
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
//功能：统计不及格人数
//参数：int score[]:学生所有的课程成绩
//		int n: 学生人数 
//返回值：不及格人数
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
//功能：显示学生信息
//参数：Student stu[]
//		int count：学生数目
//返回值：无
/************************************************************************************************/
void ShowInfo(Student stu[] , int count)
{
	for(int i=0;i<count;i++)
	{
		printf("\t\t                   数 英 计 总\n");
		printf("\t\t%d %-9s %d %d %d %d\n", stu[i].id, stu[i].name, stu[i].score[0], stu[i].score[1], stu[i].score[2], stu[i].sum);
		printf("\n");
	}
}

