#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//随机数生成

#include <stdlib.h>
#include <time.h>

//int main()
//{
//	srand(2);
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//
//
//
//	return 0;
//}

//int main()
//{
//	//设置随机数的生成起点（种子）
//	/*srand((unsigned int)time(NULL));
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());*/
//
//
//
//	return 0;
//}


//正式打字游戏

void menu()
{
	printf("*************************\n");
	printf("******** 1.play  ********\n");
	printf("******** 2.exit  ********\n");
	printf("*************************\n");

}

void game()
{
	//游戏逻辑
	//1，生成随机数
	int r = rand() % 100 + 1;//生成1到100内的随机数
	//2，猜数字
	while (1)
	{
		printf("请猜数字:");
		int guest = 0;
		scanf("%d\n", &guest);
		if (guest > r)
		{
			printf("猜大了");
		}

		else if (guest < r)
		{
			printf("猜小了");
		}

		else
		{
			printf("猜对了");
			break;

		}
	}



}
int main()
{
	srand((unsigned int)time(NULL));
	//设置随机数的生成起点，srand函数整个工程只需要调用一次就行，所以放在main函数中，而不是game函数。
	int input = 0;
	//一上来就进行选择，且可以多次游玩，适合使用do while循环
	do
	{
		//打印菜单
		menu();

		//选择游戏
		
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("请重新输入0或1\n");
			break;
		}
	} while (input);



	return 0;
}

//熄灯了，程序失败，好伤心o(╥﹏╥)o