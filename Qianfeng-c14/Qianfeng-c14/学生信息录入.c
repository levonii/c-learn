#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
typedef struct stu {
	int num;		//ѧ��
	char name[20];	//����
	char score;		//�༶     ���������޸Ĳ���
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