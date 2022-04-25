#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
struct Book
{
	char name[20];
	int price;
};
int main()
{
	struct Book b1 = { "C语言",99 };
	struct Book* p = &b1;
	printf("书名:%s\n", p->name);
	printf("价格:%d\n", p->price);
	strcpy(b1.name ,"c++");  //因为价格是变量，可以直接改
	b1.price = 66;
	printf("书名:%s\n", p->name);
	printf("价格:%d", p->price);
}