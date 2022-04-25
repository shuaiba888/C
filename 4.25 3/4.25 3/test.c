#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char password[20];
	int ret = 0;
	printf("请输入密码：");
	int ch = getchar();
	while (getchar()!= '\n')
	{
		;
	}
	printf("请确认（Y/N):");
	ret = getchar();
	if (ret == 'Y')
	{
		printf("输入成功！");
	}
	else
	{
		printf("输入失败，请重新输入");
	}

}