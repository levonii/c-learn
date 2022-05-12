#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)

int main()
{
	char* str = "helloworldhelloworldhelloworld";
	char* p = str;
	char* q;
	int num=0;
	while ((q=(strchr(p,'w'))) != NULL)
	{
		num++;
		p = q + 1;
		printf("第%d个w的位置:%d\n", num, q - str);

	}
	printf("总共有%d个w字符", num);
	return 0;
}