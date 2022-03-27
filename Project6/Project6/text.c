#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a = 2;
//	printf("%d\n", ~a);
//	return 0;
//}
////-1   0010  1101

////条件操作符
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	c = a + b < 10 ? a + b : a - b;
//	printf("%d", c);
//	return 0;
//}

//逗号表达式
//int main()
//{
//	int a=0, b = 0, c = 0, d = 0;
//	d = (a = a + 1, b = a + 1, c = b + 1);
//	printf("%d", d);
//	return 0;
//}

int main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d", a[2]);

	return 0;
}