#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char input[20];
    system("shutdown -s -t 60");
again:
    printf("电脑将在一分钟后关机，若输入：帅霸，则撤销\n请输入:");
    scanf("%s", &input);
    if (strcmp(input, "帅霸") == 0)
    {
        system("shutdown -a");
    }
    else
    {
        goto again;
    }
    return 0;
}
