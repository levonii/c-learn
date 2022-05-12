/*#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
//找出字符串中某个字符的个数和位置
int main()
{
	char* str = "helloworldhelloworldhelloworld";
	int num = 0;
	char* p;
	char* q = str;
	while ((p = strchr(q, 'w')) != NULL)
	{
		num++;
		q = p + 1;
		printf("第%d个w的位置:%d\n", num, p - str);
	}
	printf("共有%d个w\n",num);
	return 0;
}*/