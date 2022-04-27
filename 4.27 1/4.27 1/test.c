#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int binary_search(int str[], int k, int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (str[mid] < k)
		{
			left = mid + 1;
		}
		else if (str[mid] > k)
		{
			right = right - 1;
		}
		else if (str[mid] == k)
		{
			return mid;
		}
	}
	return 1;
}
int main()
{
	int str[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(str) / sizeof(str[0]);
	int k = 6;
	int ret = binary_search(str, k, sz);
	if (ret == 1)
	{
		printf("找不到");
	}
	else
	{
		printf("找到了，下标是：%d\n", ret);
	}
	return 0;
}