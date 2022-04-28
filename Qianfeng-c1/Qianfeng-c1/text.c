#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main(int argc, char* argv[])
{
	int i;
	for (i = 0; i < 1000; i++)
	{
		int a, b, c;
		a = i / 100;
		b = i % 100 / 10;
		c = i % 10;
		if (i == a * a * a + b * b * b + c * c * c)
		{
			printf("%d   ", i);
		}
	}
	return 0;
}