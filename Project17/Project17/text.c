#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(int argc, int argv[])
{
	int a;
	scanf("%d", &a);
	printf("%d\n", a);
	int m = 456;
	printf("%5d", m);
	printf("%-5d", m);
	return 0;
}