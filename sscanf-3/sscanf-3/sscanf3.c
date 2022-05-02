#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	char buf[20];
	sscanf("adbwf345mny tykjkjkj", "%[a-z]", buf);
	printf("%s\n", buf);
	sscanf("abd wf345mny", "%[a-f]", buf);
	printf("%s\n", buf);

	return 0;
}