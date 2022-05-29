#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
typedef union data {
	unsigned char a;
	unsigned int b;
}DATA;
int main()
{
	DATA temp;
	temp.b = 0xffffffff;
	printf("%x\n", temp.b);
	printf("%x\n", temp.a);
	temp.a = 0xaa;
	printf("%x\n", temp.b);
	printf("%x\n", temp.a);
	return 0;
}