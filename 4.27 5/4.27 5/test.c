#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int run(int m)
{
	if ((m % 4 == 0 && m % 100 != 0 )||( m % 400 == 0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int count = 0;
	int i = 0;
	for (i = 1000; i <= 2000; i++)
	{
		if (run(i) == 1)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\n");
	printf("%d", count);
	return 0;
}