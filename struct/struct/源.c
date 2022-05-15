#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

struct date {
	int year;
	int month;
	int day;
};
struct stu {
	int num;
	char name[20];
	char sex;
	struct date birthday;
};
typedef struct student {
	int num;
	char name[20];
	float score;
}STU;
int main()
{
	float sum = 0;
	int i;
	struct stu bob;
	struct stu cat ={
			101,
			"aaa",
			'a'
	};
	bob.num = 100;
	printf("bob.num=%d\n", bob.num);
	strcpy(bob.name, "bob");
	printf("bob.name=%s\n", bob.name);
	printf("%d\n", cat.num);
	struct stu boy = {
		101,
		"lucy",
		'f'
	};
	struct stu boy2;
	boy2 = boy;
	boy.birthday.year = 2000;
	boy.birthday.month = 3;
	boy.birthday.day = 1;
	printf("%d %s %c\n", boy.num, boy.name, boy.sex);
	printf("%d %s %c\n", boy2.num, boy2.name, boy2.sex);//相同类型的结构体变量可以直接赋值
	printf("%d %d %d\n",  boy.birthday.month, boy.birthday.year, boy.birthday.day);
	STU edu[3] = {
		{101,"Lucy",78},
		{102,"Bob",59.5},
		{103,"Tom",85}
	};
	for (i = 0; i < 3; i++)
	{
		sum = sum + edu[i].score;
	}
	printf("%f\n", (float)sum / 3);
	return 0;
}