#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char str1[] = "lishenghan!!!!!";
	char str2[] = "***************";
	int left = 0;
	int right = strlen(str1)-1;
	while (left <= right)
	{
		str2[left] = str1[left];
		str2[right] = str1[right];
		printf("%s\n", str2);
		Sleep(1000);
		system("cls");
		left++;
		right--;
	}
	printf("%s\n", str2);
}