 #define _CRT_SECURE_NO_WARNINGS 1

#include "stdio.h"

int main1()
{
	int a = 110;//���ڴ��п���һ��ռ�
	int* p = &a;//ָ���������a�ĵ�ַ�����p�����У�p����һ��ָ�����
	printf("%p", p);
	return 0;
}