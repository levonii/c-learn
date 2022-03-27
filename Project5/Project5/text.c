#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	double c = 0;
//	a += 5;
//	b -= 3;
//	c = a ^ b;
//	printf("%d %d %lf", a, b, c);
//	return 0;
//}
// 计算数组元素个数****
int main()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	int b = 0;
	b = sizeof(a) / sizeof(a[0]);
	printf("%d\n", sizeof(a));
	printf("%d\n", b);
	return 0;
}