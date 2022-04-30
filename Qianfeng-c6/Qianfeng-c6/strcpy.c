#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
int main()
{
	char str[100] = "aaaaaaaaaaaaaaaaa";
	strcpy(str, "hello");
	printf("%s\n", str);		//×¢ÒâÄÚ´æÎÛÈ¾
	printf("str+6=%s\n", str + 6);
	return 0;
}