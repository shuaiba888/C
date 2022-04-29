#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void print(int i)
{
	if (i > 9)
	{
		print(i / 10);
	}
	printf("%d ", i % 10);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	print(n);
	return 0;
}