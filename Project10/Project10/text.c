#define _CRT_SECURE_NO_WARNINGS

//����:  chuncuyizushuju   ������ͬ  �����ռ�
#include<stdio.h>

//int main()
//{
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };//��ʮ���ֽڵĿռ�
//	printf("%d", a[0]);//�±���㿪ʼ��
//	return 0;
//}
//ָ������  char *a[10]
//��ά���飺  int a[30]  int a[2][20]   int a[4][2][10];
//��ά�������ɶ����ά���鹹��
int main()
{
	int a[10];
	int b[] = { 10,20,30 };
	printf("%d\n", sizeof (b));

	//ȫ�ֳ�ʼ��
	 int c[2][4] = { {1,1,1},{11} };
	printf("%d\n ", c[0][0]);
	printf("%d", sizeof(c));
	printf("%d %d\n", a, c);
	return 0;
}
