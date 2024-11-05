#define _CRT_SECURE_NO_WARNINGS 1

//继续学习数组
//一维数组在内存中的存储


#include <stdio.h>

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7,8 ,9, 10 };
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//
//
//	return 0;
//}

int main()
{
	int arr[] = { 1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,9 ,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组个数
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);

	}


	return 0;
}