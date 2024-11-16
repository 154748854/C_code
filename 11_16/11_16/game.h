#pragma once
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//
//#define ROW 9
//#define COL 9
//
//#define ROWS ROW+2
//#define COLS COL+2
//
//
////��ʼ������
//void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
//
////��ӡ����
//void DisplayBoard(char board[ROWS][COLS], int row, int col);
//
////������
//
////�Ų���
//
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 10

//������ʼ�����̺���
void InitBoard(char board[ROWS][COLS], int rows, int cols);

//������ӡ���̺���
//������show���飨��11*11�ģ���ֻ��Ҫ����9*9(ע���±꣩��������ֻ��9*9
void DisplayBoard(char board[ROWS][COLS], int row, int col);

//���������׺���
void SetMine(char mine[ROWS][COLS], int row, int col);

//�������׺���
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);