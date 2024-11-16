#define _CRT_SECURE_NO_WARNINGS 1
//
//#include "game.h"
//
//void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
//{
//	int i = 0;
//	for (i = 0; i < rows; i++)
//	{
//		int j = 0;
//		for (j = 0; j < cols; j++)
//		{
//			board[i][j] = set;
//		}
//	}
//}
//
//void DisplayBoard(char board[ROWS][COLS],int row,int col)//����board��11*11���飬���ӡ��ʾ����Ϊ9*9����
//{
//	int i = 0;
//	printf("---------ɨ��----------");
//	for (i = 0; i <= col; i++)
//	{
//		printf("%d ", i);
//	}
//	for (i = 1; i < row; i++)
//	{
//		int j = 0;
//		for (j = 1; j < col; j++)
//		{
//			printf("%c ", board[i][j]);
//		}
//		printf("\n");
//	}
//} 
#include "game.h"
 
//ʵ�ֳ�ʼ�����̺���
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

//ʵ�ִ�ӡ���̺���
void DisplayBoard(char board[ROWS][COLS],int row,int col)
{
	printf("--------ɨ��--------\n");
	int i = 0;
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <=row; i++)
	{
		printf("%d ", i);
		int j = 0;
		for (j = 1; j <=col; j++)//ע��j��ʼֵΪ1�����ӡ9�У���<=col
		{
			
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

//ʵ�ֲ����׺���
//���������������������10�����겼�õ�
void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	int x = 0;
	int y = 0;

	while (count)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;

		if (mine[x][y] != '1')
		{
			mine[x][y] = '1';//����һ����
			count--;
		}
	}
}

/*int i = 0;
	int count = 0;
	for (i = -1; i <= 1; i++)
	{
		int j = 0;
		for (j = -1; j <= 1; j++)
		{
			count += (mine[x + i][y + i] - '0');
		}
	}
	return count;*/
int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	return (mine[x - 1][y] + mine[x - 1][y - 1] + mine[x][y - 1] + mine[x + 1][y-1]
		+ mine[x + 1][y] +mine[x + 1][y + 1] + mine[x][y + 1] + mine[x - 1][y + 1] - 8 * '0');
}
//ʵ�����׺���
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row * col - EASY_COUNT)
	{
		printf("������Ҫ�Ų�����꣺");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')//������
			{
				printf("���Ұɣ�������ˣ���Ϸ����(*��(oo)��)\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else//���벻����
			{
				int count = GetMineCount(mine, x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, ROW, COL);
				win++;
			}
		}
		else
			printf("���������������������");
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("��ϲ�㣬���׳ɹ�\n");
		DisplayBoard(mine, ROW, COL);
	}
}