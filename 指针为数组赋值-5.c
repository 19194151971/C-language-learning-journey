#define _CRT_SECURE_NO_WARNINGS 1

#include "stdio.h"
int main5()
{
	int arr[10] = { 0 };
	int* p = arr;
	int i = 0;

	for (; i < 10; i++)
	{
		*(p + i) = 1;
	}

	return 0;
}
