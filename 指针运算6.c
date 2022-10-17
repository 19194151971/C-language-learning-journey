#define _CRT_SECURE_NO_WARNINGS 1

 /*
 指针运算
 * 指针 + - 整数
 * 指针 - 指针
 * 指针的关系运算
 */

#include "stdio.h"
#define N_VALUES 5

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[9];


	//for (i = 0; i < sz; i++)
	//{
	//	printf("  %d", *p);
	//	//p = p + 1;  //指针 + 整数
	//	p++;
	//}
	

	//for (i = 0; i <5; i++)
	//{
	//	printf("  %d", *p);
	//	p -= 2;//指针 - 整数
	//}

	//float values[N_VALUES];
	//float* vp;
	//// 指针 +- 整数；指针的关系运算
	//for (vp = &values[0]; vp < &values[N_VALUES];)
	//{
	//	*vp++ = 0;
	//}

//	return 0;
//}

//指针 - 指针
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d", &arr[9] - &arr[0]);
//	return 0;
//} 


//********************************指针之间可以相减，，，但不能想加
//
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
// 	return end - start;
//}
//
//int main()
//{
//	//strlen - 求字符串长度
//
//	char arr[] = "bitjbh 25 iuijno";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}
