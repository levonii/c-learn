#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
typedef struct stu {
	int num;
	char name[20];
	float score;
}STU;
int main()
{
	STU boy;
	/*printf("%p\n", &boy);
	printf("%p\n",&boy.num);*/
	STU edu[3];
	printf("edu=%p\n", edu);
	printf("%p\n",&edu[0]);		//�ṹ������ĵ�ַ���ǽṹ��������׸���ַ
	return 0;
}