#define _CRT_SECURE_NO_WARNINGS
#define ADD(X,Y) ((X)+(Y))  //宏  替换  不是计算
#include<stdio.h>
int main()
{
	int sum = ADD(2, 3);   //sum=2+3;
	printf("%d\n", sum);
	sum = 10 * ADD(2, 3);   //sum=10*(2+3)   如果定义时没有括号，sum=10*2+3;
	printf("%d\n", sum);
	return 0;
}