#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char input[20];
    system("shutdown -s -t 60");
again:
    printf("���Խ���һ���Ӻ�ػ��������룺˧�ԣ�����\n������:");
    scanf("%s", &input);
    if (strcmp(input, "˧��") == 0)
    {
        system("shutdown -a");
    }
    else
    {
        goto again;
    }
    return 0;
}
