#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//函数的传参方式：复制传参
void myfun1(int a,int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	printf("%d %d\n", a, b);
	return 0;
}

void test1()
{
	int a = 100, b = 20;
	printf("%d %d", a, b);
	myfun1(a,b);
	printf("%d %d", a, b);
	return 0;
}

int main(int argc, char* argv[])
{
	test1();
}