#define _CRT_SECURE_NO_WARNINGS 1

//#include "game.h"
//
//void menu()
//{
//	printf("***********************");
//	printf("*******  1.play  ******");
//	printf("*******  0.exit  ******");
//	printf("***********************");
//}
//
//void game()
//{
//	char mine[ROWS][COLS] = { 0 };
//	char show[ROWS][COLS] = { 0 };
//
//	//初始化棋盘
//	InitBoard(mine, ROWS, COLS, '0');
//	InitBoard(show, ROWS, COLS, '*');
//
//	//打印棋盘
//	/*DisplayBoard(mine, ROW, COL);*/
//	DisplayBoard(show, ROW, COL);
//
//}
//
//int main()
//{
//	int input = 0;
//	scanf("%d ", &input);
//
//	do
//	{
//		menu();
//		printf("请选择:>");
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏");
//			break;
//		default:
//			printf("选择错误，请重新选择");
//			break;
//		}
//	} while (input);
//
//
//
//	return 0;
//}


#include <stdio.h>
#include "game.h"//各种函数的声明都在这个头文件中

void menu()
{
	printf("***********************\n");
	printf("*******  1.play  ******\n");
	printf("*******  0.exit  ******\n");
	printf("***********************\n");
}
void game()
{
	char mine[ROWS][COLS];//存放雷的信息
	char show[ROWS][COLS];//存放排查出的雷的信息
	//调用初始化棋盘函数
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	//调用打印棋盘函数
	DisplayBoard(show, ROW, COL);
	//调用布置雷函数
	SetMine(mine, ROW, COL);
    /*DisplayBoard(mine, ROW, COL);*/  //测试
	//调用排查雷函数
	FindMine(mine,show,ROW,COL);
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：》");
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
			printf("诗人我吃，这能输错的\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}