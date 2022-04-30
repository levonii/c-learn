#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
//×Ö·û´®×ª»»ÊýÖµ
int main()
{
	int num;
	num = atoi("123");
	printf("num=%d\n", num);
	char p;
	p = atoi("123");
	printf("%s",p);

	return 0;
}