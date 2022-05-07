#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
typedef struct stu {
	int num;		//学号
	char name[20];	//姓名
	char score;		//班级     可以自由修改参数
}STU;
void fun(STU* p, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d %s %c\n", p[i].num, p[i].name, p[i].score);
	}
}
int main()
{
	STU edu[3] = {
		{101,"lucy",'a'},    
		{102,"bob",'b'},
		{103,"xiao",'c'}
	};
	fun(edu, 3);
	return 0;
}