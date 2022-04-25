#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	char password[20];
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：");
		scanf("%s", &password);
		if ((strcmp(password, "123456")) == 0)
		{
			printf("输入成功");
			break;
		}
		else
		{
			printf("输入错误，请重新输入\n");
		}
	}
	if (i == 3)
	{
		printf("关闭");
	}
	return 0;
}