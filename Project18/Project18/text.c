#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void main(int argc, char *argv[])
{
	//һά����
	int a[6] = { 111,222,333,444,555,666 };
	int i;
	for (i = 0; i < sizeof(a) / sizeof(int); i++) //�������
	{
		printf("%6d ", a[i]);
	}

	//��ά����
	int b[2][3] = { {1,2,3},{4,5,6} };

	printf("%d\n", b[0][0]);

	//�ַ�����
	char ch[32] = "";  //���������

	scanf("%s", ch);

	printf("ch=%s\n", ch);
	return 0;
}