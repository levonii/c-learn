#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int min, sec;
	sscanf("[02:06.85]", "[%2d:%2d", &min, &sec);
	printf("%02d\n", min);
	printf("%02d\n", sec);
	return 0;
}