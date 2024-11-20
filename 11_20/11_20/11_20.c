#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//
//	printf("hehe\n");
//	main();
//    return 0;
//}




////函数递归算n的阶乘
//int Fact(int n)
//{
//	if (n == 0)//存在限制条件且每次递归n越来越接近0
//		return 1;
//	else if (n > 0)
//		return n * Fact(n - 1);//函数自己调用自己
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int r = Fact(n);
//	printf("%d\n", r);
//
//	return 0;
//}




//顺序打印⼀个整数的每⼀位
//int Print(int n)
//{
//	if (n > 9)
//		Print(n / 10);
//
//	printf("%d ", n % 10);
//	
//		
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print(n);
//
//	return 0;
//}

//int Fact(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int r = Fact(n);
//	printf("%d ", r);
//
//	return 0;
//}
int Fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);//加了return才能带回来值
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int r = Fib(n);
	printf("%d ", r);

	return 0;
}