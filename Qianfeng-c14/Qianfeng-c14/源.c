/*#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
typedef struct stu {
	int num;
	char name[20];
	float score;
}STU;
void fun(STU* p,int n)
{
	int i;
	for (i=0;i<n;i++)
	{
		printf("%d %s %f\n", p[i].num, p[i].name,p[i].score);
	}
}
int main()
{
	STU edu[3] = {
		{101,"lucy",88.3f},
		{102,"bob",78.6f},
		{103,"lilei",93.7f}
	};
	fun(edu,3);
}*/