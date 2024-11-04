#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdlib.h>
//#include <time.h>
#include <stdio.h>
//
//void game()
//{
//	int r = rand() % 100 + 1;
//	int guess = 0;
//	while (1)
//	{
//		printf("请猜数字:");
//		scanf("%d\n", &guess);
//		if (guess < r)
//		{
//			printf("小了");
//		}
//		else if (guess > r)
//		{
//			printf("大了");
//		}
//		else
//		{
//			printf("猜对了");
//			break;
//		}
//	}
//}
//
//void menu()
//{
//	printf("***********************\n");
//	printf("******  1. play  ******\n");
//	printf("******  0. exit  ******\n");
//	printf("***********************\n");
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//
//	do
//	{
//		menu();
//		printf("请选择");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\0");
//			break;
//		default:
//			printf("请重新输入\n");
//			break;
//		}
//	} while (input);
//
//		return 0;
//}
////why!!!!!

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void game()
//{
//	int r = rand() % 100 + 1;
//	int guess = 0;
//	while (1)
//	{
//		printf("猜数字\n");
//		scanf("%d", &guess);
//		if (guess < r)
//		{
//			printf("小了\n");
//		}
//		else if (guess > r)
//		{
//			printf("大了\n");
//		}
//		else
//		{
//			printf("对了\n");
//			break;
//		}
//	}
//
//}
//	
//void menu()
//{
//	printf("***********************\n");
//	printf("******  1. play  ******\n");
//	printf("******  0. exit  ******\n");
//	printf("***********************\n");
//}
//	
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("结束");
//				break;
//		default:
//			printf("重选");
//				break;
//		}
//	}while (input);
//
//
//
//	return 0;
//}

//总算成功了，我快哭了，为什么之前的就是不行呢


//数组

int main()
{
	//创建
	/*int math[20];
	char ch[5];
	double arr[6];*/

	//初始化
	//int math[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};//完全初始化
	//char ch[5] = { 2 };//不完全初始化，剩下的元素默认初始化为0
	//char ch[5] = { 'a', 'b' };
	//char ch[5] = { "abc" };
	//double arr[6] = {1};

	//使用数组
	/*int math[20] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	printf("%d \n", math[5]);*/

	//打印整个数组
	/*int i = 0;
	for (i = 0; i <= 19; i++)
	{
		printf("%d ", math[i]);
	}*/

	//int i = 0;

	//do
	//{
	//	printf("%d ", math[i]);
	//	i++;
	//} while (i - 20 < 0);//自己写出来了，(*^▽^*)


	//给数组中输入10个值
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d ", &arr[i]);//这里需要取地址的原因是数组元素是一个整型元素，数组名才是地址
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}

	
	return 0;
}

//perfect！！收工