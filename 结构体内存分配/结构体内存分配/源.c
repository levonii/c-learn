#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#pragma warning(disable:4996)
//�ṹ��
typedef struct stu1 {
	int a;
	int b;
	int c;
}STU1;
//������
typedef union stu2 {
	int a;
	int b;
	int c;
}STU2;
int main()
{
	STU1 tmp1;
	STU2 tmp2;
	printf("�ṹ�����tmp1��СΪ%d\n", sizeof(tmp1));
	printf("�ṹ�����tmp2��СΪ%d\n", sizeof(tmp2));
	printf("�ṹ�����tmp2��СΪ%d\n", sizeof(tmp2));

	return 0;
}