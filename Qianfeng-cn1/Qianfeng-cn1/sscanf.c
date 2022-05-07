#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//格式化字符串操作函数
#include<string.h>
#pragma warning(disable:4996)
int main()
{
	int a, b, c;
	sscanf("2013 10 1", "%d %d %d", &a, &b, &c);
	printf("%d %d %d\n", a, b, c);
	return 0;
}