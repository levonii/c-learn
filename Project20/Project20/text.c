#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

static int num;

void myfun()
{
	num = 0;
	num++;
	printf("%d", num);
}

int main(int argc, char* argv[])
{
	static int a = 10;
	a += 1;
	myfun();
	myfun();
	myfun();
	myfun();
	printf("%d %d\n", num,a);
	return 0;
}