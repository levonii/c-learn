/*#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
//�ҳ��ַ�����ĳ���ַ��ĸ�����λ��
int main()
{
	char* str = "helloworldhelloworldhelloworld";
	int num = 0;
	char* p;
	char* q = str;
	while ((p = strchr(q, 'w')) != NULL)
	{
		num++;
		q = p + 1;
		printf("��%d��w��λ��:%d\n", num, p - str);
	}
	printf("����%d��w\n",num);
	return 0;
}*/