#define _CRT_SECURE_NO_WARNINGS
#define ADD(X,Y) ((X)+(Y))  //��  �滻  ���Ǽ���
#include<stdio.h>
int main()
{
	int sum = ADD(2, 3);   //sum=2+3;
	printf("%d\n", sum);
	sum = 10 * ADD(2, 3);   //sum=10*(2+3)   �������ʱû�����ţ�sum=10*2+3;
	printf("%d\n", sum);
	return 0;
}