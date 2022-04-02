#define _CRT_SECURE_NO_WARNINGS

//数组:  chuncuyizushuju   类型相同  连续空间
#include<stdio.h>

//int main()
//{
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };//四十个字节的空间
//	printf("%d", a[0]);//下标从零开始；
//	return 0;
//}
//指针数组  char *a[10]
//多维数组：  int a[30]  int a[2][20]   int a[4][2][10];
//三维数组是由多个二维数组构成
int main()
{
	int a[10];
	int b[] = { 10,20,30 };
	printf("%d\n", sizeof (b));

	//全局初始化
	 int c[2][4] = { {1,1,1},{11} };
	printf("%d\n ", c[0][0]);
	printf("%d", sizeof(c));
	printf("%d %d\n", a, c);
	return 0;
}
