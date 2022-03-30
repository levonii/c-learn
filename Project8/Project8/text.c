#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//typedef unsigned int u_int;
//static
void st()
{
	static int a = 0;
	a++;
	printf("%d", a);
}

int main()
{
	//unsigned int num = 100;
	int i = 0;
	while (i < 10)
	{
		st();
		i++;
	}
	return 0;
}