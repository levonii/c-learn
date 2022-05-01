#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//格式化字符串操作
#include<string.h>
#pragma warning(disable:4996)
int main()
{
	char buf[100];
	sprintf(buf, "%d:%d:%d", 2013, 10, 1);
	printf("buf=%s\n", buf);
	return 0;
}