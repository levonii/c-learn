#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
int main()
{
	char buf[20] = "abc#def@hij";
	sscanf("abc#def@hij","%*[^#]%*c%[^@]",buf);//*������ĳ���ַ���
	printf("%s", buf);
	return 0;
}