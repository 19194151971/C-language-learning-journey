#define _CRT_SECURE_NO_WARNINGS 1

#include"stdio.h"
int main2()
{
	printf("%d\n",sizeof(int *));
	printf("%d\n", sizeof(char *));
	printf("%d\n", sizeof(double *));
	printf("%d\n", sizeof(long long*));
	printf("%d\n", sizeof(float *));

	return 0;
}