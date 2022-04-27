#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int ret = 0;
	int i = 0;
	int x = 0;
	int n = 0;
	for (n = 1; n <= 10; n++)
	{
		x = 1;
		for (i = 1; i <= n; i++)
		{
			x = x * i;
		}
		ret = ret + x;
	}
	printf("%d\n", ret);
	return 0;
}