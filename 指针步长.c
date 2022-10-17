#define _CRT_SECURE_NO_WARNINGS 1

#include "stdio.h"

int main4()
{
	int a = 0x11223344;
	int* p = &a;
	char* p1 = &a;
	double* p2 = &a;
	printf("%p\n", p);
	printf("%p\n", p+1);
	printf("%p\n", p1);
	printf("%p\n", p1+1);
	printf("%p\n", p2);
	printf("%p\n", p2+1);

	/*
	11.	指针类型决定了指针的步长
    Int*p;p+1?4
    Char *p;p+1?1
    Double *p;p+1?8

	*/
	return 0;
}