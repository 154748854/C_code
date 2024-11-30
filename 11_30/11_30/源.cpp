#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int n = 10;
//	int m = 20;
//
//	int const* p = &n;
//	*p = 15;//err
//	p = &m;//OK
//
//	int* const u = &m;
//	*u = 25;//OK
//	u = &n;//err
//
//
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	              //0 1 2 3 4 5 6 7 8 9
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[0];
//
//	for (i = 0; i < sz; i++)//我是傻比，循环语句不要加；会变成空语句
//	{
//		printf("%d ", *p);
//		p++;
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//0 1 2 3 4 5 6 7 8 9
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[sz-1];
//
//	for (i = 0; i < sz; i++)//我是傻比，循环语句不要加；会变成空语句
//	{
//		printf("%d ", *p);
//		p--;
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d", &arr[9] - &arr[0]);//返回值为9
//
//	return 0;
//}

//写一个函数求字符串的长度
#include <string.h>

//size_t my_strlen(char* p)
//{
//	size_t count = 0;
//	while (*p != '\0')
//	{
//		count++;
//		p++;
//	}
//	return count;
//
//}
//
//
//
//int main()
//{
//	char arr[] = "abcdef";
//	size_t len = my_strlen(arr);//数组其实是数组首元素的地址 arr = &arr[0]
//	printf("%zd", len);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = &arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	while (p < &arr[sz])
//	{
//		printf("%d ", *p);
//		p++;
//	}
//
//	return 0;
//}


int* test()
{
	int n = 100;
	return &n;
}
int main()
{
	int* p = test();
	printf("%d", *p);
	return 0;
}