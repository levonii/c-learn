#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

enum week {
	Mon,tue,wed,thu,fri,sat,sun
};
int main()
{
	enum week workday;
	workday = fri;
	printf("workday=%d\n", fri);
	return 0;
}