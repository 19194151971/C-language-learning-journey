#define _CRT_SECURE_NO_WARNINGS 1

#include "stdio.h"

int main3()
{
	int a = 0x11223344;
	int* pa = &a;
	*pa = 0;
	/*char* p1 = &a;
	*p1 = 0;
	double* p2 = &a;
	*p1 = 0;*/
	return 0;
}