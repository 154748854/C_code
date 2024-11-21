#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//使用递归导致运算效率下降的例子

//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return  Fib(n - 1) + Fib(n - 2);
//}
//
//int Fib(int n);

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//
//	return 0;
//}
//
//
//
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//
//	}
//	return c;
//}
//


//看计算机行情去喽QVQ