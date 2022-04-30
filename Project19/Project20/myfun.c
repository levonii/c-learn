#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"myfun.h"
void myfun1()
{
	printf("hello world!");
	return 0;
}
void myfun2(int a, int b)
{
	int sum;
	sum = a + b;
	printf("%d\n", sum);
	return sum;
}