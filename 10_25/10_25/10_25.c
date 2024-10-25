#define _CRT_SECURE_NO_WARNINGS 1
//好累啊今天┭┮﹏┭┮补药写代码
#include <stdio.h>
//ε=(´ο｀*)))唉，while语句


int main()
{
	//int a = 1;
	//while (a)
	//	printf("hehe");


//在屏幕上打印一到十
	//int a = 0;
	//while (a >= 10)//第一次写，写错了，导致表达式返回值直接为0，应该是n <= 10
	//{
	//	a++;
	//	printf("%d", a);

	//}

	//int a = 0;
	//while (a <= 10)
	//{
	//	a++;
	//	printf("%d", a);//第二次写，这多打了一个11，原因是循环语句我所写的代码先执行的是++

	//}

	/*int a = 1;
	while (a <= 10)
	{
		
		printf("%d", a);
		a++;

	}*/


	//输⼊⼀个正的整数，逆序打印这个整数的每⼀位
		


	//int num = 0;
	//int n = 0;
	//scanf("%d", &num);
	//while (num)
	//{
	//	n = num % 10;
	//	printf("%d", n);
	//	num = num / 10;
	//}

// the better
	//int n = 0;
	//scanf("%d", &n);
	//while (n)//判断表达式相当于n != 0
	//{
	//	printf("%d ", n % 10);//有空格更好看
	//	n /= 10;
	//}





	//for循环
	/*int i = 0;
	for (i = 1 ; i <= 10 ; i++)
	{
		printf("%d ", i);
	}*/



	//计算1~100之间3的倍数的数字之和
	//int n = 0;
	//int sum = 0;
	//for (n = 3; n <= 100; n += 3)
	//{
	//	if (n % 3 == 0)
	//	{
	//		sum += n;
	//	}
	//	
	//}
	//printf("%d", sum);

	//the better
	int i = 0;
	int s = 0;
	for (i = 3; i <= 100; i += 3)
	{
		s += i;
	}
	printf("%d", s);

	return 0;
}




