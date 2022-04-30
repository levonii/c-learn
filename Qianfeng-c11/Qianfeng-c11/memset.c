#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
//空间设定函数
int main()
{
	char str[100] = "helloworld";
	printf("str=%s\n", str);
	memset(str, 'a', 5);
	printf("str=%s", str);
	return 0;
}