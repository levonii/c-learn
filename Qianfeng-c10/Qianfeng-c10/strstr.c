#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//�ַ�������
int main()
{
	char* str = "hello world";
	char* p;
	p = strstr(str, "world");
	printf("%d", p - str);
	return 0;
}