#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 4407873;
	int b = 434241;
	printf("%s\n", (char*)&a);
	printf("%s\n", b);
	return 0;
}