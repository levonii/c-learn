#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#pragma warning(disble:4996)
//�и��ַ���
int msg_deal(char*msg_src,char*msg_done[],char*str)
{
	int i = 0;
	msg_done[i] = strtok(msg_src, str);
	while (msg_done[i] != NULL)
	{
		i++;
		msg_done[i] = strtok(NULL, str);
	}
	return i;
}

int main()
{
	char s[100] = "+CMGR:REC UNREAD,+861346630259,98/10/01,18:22:11+00,ABCdefGHI";
	char* p[6];
	int num,i;
	num = msg_deal(s, p, ",");
	//printf("num=%d\n", num);
	/*for (i = 0; i < num; i++)
	{
		//printf("p[%d]%s\n", i, p[i]);
	}*/
	printf("�ֻ���:%s\n", p[1] + 3);
	printf("����:%s\n", p[2]);
	*(p[3] + 8) = '\0';
	printf("ʱ��:%s\n", p[3]);
	printf("����:%s\n", p[4]);
	return 0;
}