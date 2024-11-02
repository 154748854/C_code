#define _CRT_SECURE_NO_WARNINGS 1

//
//#include <stdio.h>
//
////循环嵌套
//
////找出100~200之间的素数，并打印在屏幕上。
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i++)//先产生一到一百的数字
//	{
//		int flag = 1;
//		//判断i是不是素数，就用2到i减一之间的数字去试除i
//		int j = 0;
//		for (j = 2; j <= i - 1; j++)//产生2到i - 1之间的数字
//		{
//			if (i % j == 0)
//			{
//				flag == 0;
//				break;//if语句如果成立就说明i被2到i-1之间某个数整除了（i就不是素数），用break跳出循环
//			}
//			
//
//		}
//
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	
//		
//	}
//	printf("\n%d ", count);
//	
//	return 0;
//}
//还是不行，好难啊


//int main()
//{
//	int flag = 1;
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;//打破这个for循环
//			}
//		}
//		//
//		if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//
//
//	return 0;
//}

//goto体验
#include <stdio.h>
//int main()
//{
//	again:
//	printf("hehe\n");
//	if (1)
//	{
//		printf("haha\n");
//		goto again;
//	}
//
//
//
//	return 0;
//}



//关机程序
//1;程序运行起来后，60s后关机
//2：输入 我是怂包 ，就取消关机
#include <string.h>
#include <stdlib.h>

//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");//库函数system是执行系统命令
//	again:
//	printf("你的电脑将在60秒后关机，因为你太怂了，请输入 我是怂包 就取消关机\n");
//	scanf("%s", input);//输入的信息放在input数组中
//	if (strcmp("我是怂包", input) == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//
//
//	return 0;
//}
//perfect 

//关机程序循环也可以用别的循环实现，尽量少使用goto

//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");//库函数system是执行系统命令
//	while (1)
//	{
//		printf("你的电脑将在60秒后关机，因为你太怂了，请输入 我是怂包 就取消关机\n");
//		scanf("%s", input);//输入的信息放在input数组中
//		if (strcmp("我是怂包", input) == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	
//	
//
//
//	return 0;
//}


//收工
