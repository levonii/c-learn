#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

static int num;

void myfun()
{
	num++;
}

int main(int argc, char* argv[])
{
	myfun();
	printf("%d", num);
	return 0;
}