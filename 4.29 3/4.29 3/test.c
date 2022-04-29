#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int Fib(int i)
{
	int a = 1;
	int b = 1;
	int c = 0;
	while (i>2)
	{
		c = a + b;
		a = b;
		b = c;
		i--;
	}
	return c;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d", ret);
	return 0;
}