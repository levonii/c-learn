#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

typedef struct stu {
	int num;
		char name[20];
	float score;
}STU;

void fun(STU* p)
{
	p->num = 101;
	strcpy(p->name, "lucy");
	p->score = 88.6f;//(*p).score=88.6;   *加指针等于地址
}
int main()
{
	STU girl;
	fun(&girl);
	printf("%d %s %.1f\n", girl.num, girl.name, girl.score);

	return 0;
}
