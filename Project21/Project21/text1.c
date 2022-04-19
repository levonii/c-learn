#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main(int argc, char* argv[])
{
	int a = 100;
	int* p;
	p = &a;
	printf("%d %d", a, p);
	printf("%d %d", *p, &a);
	return 0;
}