#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(int argc, char* argv[])
{
	int a[6] = { 1,2,3,4,5,6 };
	int i;
	for (i = 0; i < sizeof a / sizeof(int); i++)
	{
		printf("a[%d]=%d\n",i, a[i]);
	}
	int b[3][4] = {1,2,3,4,
			 5,6,7,8,
			 9,10,11,12 };
	for (int j = 0; j <= 2; j++)
	{
		for (int k = 0; k <= 3; k++)
		{
			printf("b[%d][%d]=%d\n", j, k, b[j][k]);
		}
	}
	return 0;
}