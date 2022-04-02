#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "myfun.h"
int main(int a, int b)
{
	scanf("%d %d", &a, &b);
	int c= myfun(a, b);
	printf("%d", c);
}