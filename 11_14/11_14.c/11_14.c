#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//函数声明
//int is_leap_year(int y);
//int main()
//{
//	int year = 0;
//	scanf("%d ", &year);
//	
//	if (is_leap_year(year))
//	{
//		printf("是闰年\n");
//	}
//	else
//	{
//		printf("不是闰年");
//	}
//	return 0;
//}
//
//int is_leap_year(int y )
//{
//	if ((y % 400 == 0) || (y % 4 == 0) && (y % 100 != 0))
//		return 1;
//	else
//		return 0;
//}
//#include "add.h"
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c =add(a, b);
//	printf("%d ", c);
//
//}


//static 和 extern
//void test()
//{
//	/*int a = 1;*/
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		test();
//	}
//	return 0;
//}


//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}


extern int add(int, int);

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int c =add(a, b);
	printf("%d ", c);

}