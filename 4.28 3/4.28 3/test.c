#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int str[] = { 1,2,3,4,20,6,7,10,9,8 };
	int i = 0;
	int sz = sizeof(str) / sizeof(str[0]);
	int max = str[0];
	for (i = 1; i < sz; i++)
	{
		if (max <= str[i])
		{
			max = str[i];
		}
	}
	printf("%d", max);
}