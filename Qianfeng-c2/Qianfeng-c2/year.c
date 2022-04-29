#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int date[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int year, month, day,j;
	while (1)
	{
		printf("是否执行指令：");
		scanf("%d", &j);
		if(j==1)
		{ 
		printf("请输入日期：");
		scanf("%d %d %d", &year, &month, &day);
		int i, sum = 0;
		for (i = 0; i < month - 1; i++)
		{
			sum = sum + date[i];
		}
		sum += day;
		if (month > 2 && ((month % 4 == 0 && month % 100 != 0) || month % 400 == 0))
		{
			sum = sum + 1;
		}
		printf("%d\n", sum);

	
		}
		else {
			break;
		}
	}
	return 0;
}