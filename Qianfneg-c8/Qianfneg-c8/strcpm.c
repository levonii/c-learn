#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
int main()
{
	char* str1 = "55555";
	char* str2 = "55554";

	int ret;
	ret = strcmp(str1, str2);
	if (ret > 0)
	{
		printf("str1大于str2");
	}
	else if (ret < 0)
		printf("str1小于str2");
	else
		printf("相等");
	return 0;
}