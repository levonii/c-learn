#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#pragma warning(disable:4996)
//结构体
typedef struct stu1 {
	int a;
	int b;
	int c;
}STU1;
//共用体
typedef union stu2 {
	int a;
	int b;
	int c;
}STU2;
int main()
{
	STU1 tmp1;
	STU2 tmp2;
	printf("结构体变量tmp1大小为%d\n", sizeof(tmp1));
	printf("结构体变量tmp2大小为%d\n", sizeof(tmp2));
	printf("结构体变量tmp2大小为%d\n", sizeof(tmp2));

	return 0;
}