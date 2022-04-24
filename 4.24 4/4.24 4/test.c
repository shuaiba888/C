#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	printf("输入两个数字：");
	scanf("%d%d", &a, &b);
	sum = Add(a, b);
	printf("sum=%d\n", sum);
}