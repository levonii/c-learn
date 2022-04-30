#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
int main()
{
	char* str = "hello world w";
	char* p;
	p = strrchr(str, 'w');
	printf("%d", p-str);
	return 0;
}