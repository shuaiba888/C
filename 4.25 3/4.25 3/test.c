#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char password[20];
	int ret = 0;
	printf("���������룺");
	int ch = getchar();
	while (getchar()!= '\n')
	{
		;
	}
	printf("��ȷ�ϣ�Y/N):");
	ret = getchar();
	if (ret == 'Y')
	{
		printf("����ɹ���");
	}
	else
	{
		printf("����ʧ�ܣ�����������");
	}

}