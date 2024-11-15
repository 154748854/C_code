#define _CRT_SECURE_NO_WARNINGS 1
//
//#include "game.h"
//
//void menu()
//{
//	printf("*************************\n");
//	printf("********  1.play  *******\n");
//	printf("********  0.exit  *******\n"); 
//	printf("*************************\n");
//}
//
//void game()
//{
//	char mine[ROW][COL] = { 0 };//存放雷的信息
//	char show[ROWS][COLS] = { 0 };//存放排查出的雷的信息
//
//	//初始化棋盘
//	InitBoard(mine, ROW, COL, '0');
//	InitBoard(show, ROWS, COLS, '*');
//
//	//打印棋盘
//	DisplayBoard(show, ROW, COL);
//
//
//}
//
//
//
//
//void test()
//{
//	int input = 0;
//	do
//	{
//		menu();//游戏菜单
//		printf("请选择：>\n");//选择游戏
//		scanf("%d ", &input);
//		switch (input)
//		{
//		case 1:
//			printf("扫雷\n");
//			game();
//			break;
//
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("请重新选择\n");
//			break;
//		}
//
//
//	} while (input);
//	
//}
//
//
//int main()
//{
//	test();
//
//	return 0;
//}


#include "game.h"

void menu()
{
	printf("***********************");
	printf("*******  1.play  ******");
	printf("*******  0.exit  ******");
	printf("***********************");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };

	//初始化棋盘
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');

	//打印棋盘
	DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);

}

int main()
{
	int input = 0;
	scanf("%d ", &input);

	do
	{
		menu();
		printf("请选择:>");
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("选择错误，请重新选择");
			break;
		}
	} while (input);



	return 0;
}