#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	FILE* fp1,*fp2;
	char ch;
	fp1 = fopen("text.txt", "r");
	if (fp1 == NULL)
	{
		perror("fopen");
		return 0;
	}
	fp2 = fopen("test2.txt", "w");
	
	while ((ch = fgetc(fp1)) != EOF)
	{
		fputc(ch, fp2);
	}
	fclose(fp1);
	fclose(fp2);
	return 0;
}