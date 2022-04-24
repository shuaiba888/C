#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char str[] = "HELLO WORLD!";
	char* p = str;
	int i = 0;
	while(*p)
	{
		if (*p >= 'A' && *p <= 'Z')
		{
			*p = *p + 32;
		}
		p++;
	}
	printf("%s\n", str);
}