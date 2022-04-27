#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int is_prime(int m)
{
	int n = 0;
	for(n=2;n<=sqrt(m);n++)
	{
		if (m % n == 0)
		{
			return 0;
		}
    }
	return 1;
}
int main()
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 101; i <= 200; i+=2)
	{
		if (is_prime(i) == 1)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\n");
	printf("%d", count);
	return 0;
}