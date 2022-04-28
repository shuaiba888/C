#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 0;
	double sum = 0;
	int j = 1;
	for (i = 1; i <= 100; i++)
	{
		sum +=  j * 1.0 / i;
		j=-j;
	}
	printf("sum=%lf\n", sum);
	return 0;
}