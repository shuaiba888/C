#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int my_strlen(char* str)
{
    while (*str != '\0')
    {
        return 1 + my_strlen(str + 1);
        str++;
    }
    return 0;
}
int main()
{
    char str[] = { "shuaiba" };
    int ret = my_strlen(str);
    printf("%d", ret);
    return 0;
}
