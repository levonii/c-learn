#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
//�ַ����и��
int main()
{
	char str[100] = "xiaoming:21,,,��,Ů,����:haidian";
	char *p[7];
	int i = 0,j=0;
	p[i] = strtok(str, ":,.");
	printf("p[%d]=%s\n", i, p[i]);
	printf("str=%s\n", str);
	while (p[i] != NULL)
	{
		i++;
		p[i] = strtok(NULL, ":,.");
	}
	for (j = 0; j < i; j++)
	{
		printf("p[%d]=%s\n", j, p[j]);
	}
	return 0;
}