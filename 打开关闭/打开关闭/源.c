#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	FILE* fpl,*ret;
	fpl = fopen(".\\text.txt", "wb+");
	if (fpl == NULL)
	{
		printf("失败\n");
		perror("");
		return 0;
	}
	else
	{
		printf("成功\n");
		
	}
	ret = fclose(fpl);
	if (ret == NULL)
	{
		printf("成功\n");
	}
	else
	{
		printf("失败\n");
	}
	return 0;
}