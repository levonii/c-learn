
#include<stdio.h>
#pragma warning(disable:4996)
#include<string>
int main()
{
	char str1[20] = "hello";
	char* str2 = "hello";
	printf("sizeof(sdtr1)=%d\n", sizeof(str1));
	printf("sizeof(str2)=%d\n", sizeof(str2));

	//printf("strlen(str1)=%d\n", strlen(str1));
	//printf("strlen(str2)=%d\n", strlen(str2));
	return 0;
}