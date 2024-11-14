#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//数组作函数的参数
//写⼀个函数将⼀个整型数组的内容，全部置为-1，再写⼀个函数打印数组的内容。

//void set_arr(int arr[10], int sz, int set)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = -1;
//	}
//}
//
//void print_arr(int arr[10], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_arr(arr, sz);
//	set_arr(arr, sz, 0);
//	print_arr(arr,sz);
//	return 0;
//}

//void print(int arr[][5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int a = 0;
//		for (a = 0; a < c; a++)
//		{
//			printf("%d ", arr[i][a]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
//	//打印二维数组内容
//	print(arr, 3, 5);
//
//	return 0;
//}

//嵌套调用和链式访问
//假设我们计算某年某月有多少天


//31 28 31 30 31 30 31 31 30 31 30 31
//   29
//只有闰年2月有29天

#include <stdbool.h>
//bool is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return true;
//	else
//		return false;
//}
int is_leap_year(int y)
{
	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
		return 1;
	else
		return 0;
}

int get_days_of_month(int y, int m)
{
	int days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int day = days[m];
	if (is_leap_year(y) && m == 2)
	{
		day++;

		
	}
	return day;
}
//int get_days_of_month(int y, int m)
//{
//	int days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	int day = days[m];
//	if (is_leap_year(y) && m == 2)
//		day += 1;
//	return day;
//}
int main()
{
	int year = 0;
	int month = 0;
	scanf("%d %d", &year, &month);
	int day = get_days_of_month(year, month);
	printf("%d\n", day);
	return 0;
}