#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int m =0;
	int n =0;
	int min = 0;
	printf("请输入两个数字：");
	scanf("%d%d", &m, &n);
	while (1)
	{
		if (m < n)
		{
			min = m;
			m = n;
			n = min;
		}
		int c = m % n;
		if (c== 0)
		{
			break;
		}
		else
		{
			m = n;
			n = c;
		}
	}
		printf("%d", n);
	return 0;
}