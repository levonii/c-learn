#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"myfun.h"
int main(int argc, char* argv[])
{
	int a, b;
	scanf("%d %d", &a, &b);
	myfun2(a, b);
	myfun1();
	return 0;
}