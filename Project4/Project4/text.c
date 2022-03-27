#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a, b, c;
//	scanf("%d %d", &a, &b);
//	printf("c=%d", c=add(a, b));
//	return c;
//}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	while (i < 10)
	{
		printf("%d\n", arr[i]);
		i++;
	}

	return 0;
}