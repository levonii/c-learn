#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//–ﬁ Œ±‰¡ø ÷ª∂¡
#pragma warning(disable:4996)
void new()
{
	const int a = 100;
	printf("a=%d\n", a);
	//a = 200;
	printf("a=%d\n", a);

	return 0;
}

void pointer()
{
	char buf[20]="helloworld";
	const char* str = buf;
	strcpy(str, "hellokitty");
	printf("buf=%s\n", buf);
	return 0;
}
void pointer1()
{
	char buf[20]="helloworld";
	char* const str = buf;
	printf("%s\n",str);
	return 0;
}
int main()
{
	//new();
	pointer1();
	//pointer();
	return 0;
}