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
	struct Book b1 = { "C����",99 };
	struct Book* p = &b1;
	printf("����:%s\n", p->name);
	printf("�۸�:%d\n", p->price);
	strcpy(b1.name ,"c++");  //��Ϊ�۸��Ǳ���������ֱ�Ӹ�
	b1.price = 66;
	printf("����:%s\n", p->name);
	printf("�۸�:%d", p->price);
}