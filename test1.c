 #define _CRT_SECURE_NO_WARNINGS 1

#include "stdio.h"

int main1()
{
	int a = 110;//在内存中开辟一块空间
	int* p = &a;//指针变量，将a的地址存放在p变量中，p就是一个指针变量
	printf("%p", p);
	return 0;
}