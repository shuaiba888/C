#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int y = 0;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			y = i * j;
			printf("%d*%d=%-2d ",i,j,y);
		}
		printf("\n");
	}
	return 0;
}