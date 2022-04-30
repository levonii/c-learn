#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//º¯ÊýÆª
void myfun1();
void myfun2(int a, int b);
int main(int argc, char* argv[])
{
	int a, b;
	scanf("%d %d", &a, &b);
	myfun2(a, b);
	myfun1();
	return 0;
}

void myfun1()
{
	printf("hello world!\n");
	return 0;
}

void myfun2(int a,int b)
{
	int sum;
	sum = a + b;
	printf("%d\n", sum);
	return sum;
}
