#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int i = 1;
	int sum = 0;
JOOP:
	sum += i;
	i++;

	if (i > 100)
	{
		printf("%d", sum);
	}
	else
		goto JOOP; //Âß¼­»ìÂÒ  ¿É¶ÁÐÔ²î;
	return 0;
}