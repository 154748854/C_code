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
//	char mine[ROW][COL] = { 0 };//����׵���Ϣ
//	char show[ROWS][COLS] = { 0 };//����Ų�����׵���Ϣ
//
//	//��ʼ������
//	InitBoard(mine, ROW, COL, '0');
//	InitBoard(show, ROWS, COLS, '*');
//
//	//��ӡ����
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
//		menu();//��Ϸ�˵�
//		printf("��ѡ��>\n");//ѡ����Ϸ
//		scanf("%d ", &input);
//		switch (input)
//		{
//		case 1:
//			printf("ɨ��\n");
//			game();
//			break;
//
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("������ѡ��\n");
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

	//��ʼ������
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');

	//��ӡ����
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
		printf("��ѡ��:>");
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("ѡ�����������ѡ��");
			break;
		}
	} while (input);



	return 0;
}