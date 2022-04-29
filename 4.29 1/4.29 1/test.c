#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int Fac(int i)
{
	if (i == 1)
		return 1;
	else
		return i * Fac(i - 1);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = 0;
	ret = Fac(n);
	printf("%d", ret);
	return 0;
}