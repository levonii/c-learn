#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)

int main()
{
	char* str = "helloworldhelloworldhelloworld";
	char* p = str;
	char* q;
	int num=0;
	while ((q=(strchr(p,'w'))) != NULL)
	{
		num++;
		p = q + 1;
		printf("��%d��w��λ��:%d\n", num, q - str);

	}
	printf("�ܹ���%d��w�ַ�", num);
	return 0;
}