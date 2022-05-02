#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	char buf[20];
	int num;
	sscanf("1234 5678", "%*d %s", buf);
	printf("%s\n", buf);
	sscanf("num=%d\n", "%*d %d", &num);
	return 0;
}