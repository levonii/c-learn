#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	FILE* fpl,*ret;
	fpl = fopen(".\\text.txt", "wb+");
	if (fpl == NULL)
	{
		printf("ʧ��\n");
		perror("");
		return 0;
	}
	else
	{
		printf("�ɹ�\n");
		
	}
	ret = fclose(fpl);
	if (ret == NULL)
	{
		printf("�ɹ�\n");
	}
	else
	{
		printf("ʧ��\n");
	}
	return 0;
}