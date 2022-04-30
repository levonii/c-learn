#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include<corecrt.h>
void help()
{
	printf("打字游戏测试中\n");
}

int main()
{
	char ch;
	char str[51] = "";
	int i,count;
	time_t start_time, end_time;
	while (1)
	{
		help();
		ch = _getch();
		srand(rand());

		for (i = 0; i < 50; i++)
		{
			str[i] = rand() % 26 + 'a';		//随机字符串
		}
		str[50] = '\0';
		printf("%s\n", str);
		count = 0;
		for (i = 0; i < 50;i++)
		{
			ch = _getch();
			if (i == 0)
			{
				start_time = time(NULL);
			}

			if (ch == str[i])
			{
				count++;
				printf("%c", ch);
			}
			else
			{
				printf("_");
			}
			
		}
		end_time = time(NULL);
		printf("\n 正确率为%d %c\n", count*100/50,'%');
		printf("用时%lld秒\n", (long int)end_time - start_time);
		while (1)
		{
			ch = _getch();
			if (ch == ' ')
			{
				break;
			}
			if(ch==27)
			{
				return 0;
			}
		}
	}
	
	 
	return 0;
}