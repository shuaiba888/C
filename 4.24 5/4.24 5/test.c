#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int Max(int x, int y)
{
	return(x>y ? x: y);
}
int main()
{
	int a = 0;
	int b = 0;
	int max = 0;
	printf("输入两个数字：");
	scanf("%d%d", &a, &b);
	max = Max(a, b);
	printf("max=%d\n", max);
}