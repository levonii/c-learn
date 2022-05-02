#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996);
int main()
{
	char buf[20];
	sscanf("12345678", "%2s", buf);
	printf("%s\n", buf);
	sscanf("12345678", "%4s", buf);
	printf("buf=%s\n", buf);
	return 0;
}