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
////初始化棋盘
//void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
//
////打印棋盘
//void DisplayBoard(char board[ROWS][COLS], int row, int col);
//
////布置雷
//
////排查雷
//
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 10

//声明初始化棋盘函数
void InitBoard(char board[ROWS][COLS], int rows, int cols);

//声明打印棋盘函数
//传的是show数组（是11*11的），只需要访问9*9(注意下标），但不能只传9*9
void DisplayBoard(char board[ROWS][COLS], int row, int col);

//声明布置雷函数
void SetMine(char mine[ROWS][COLS], int row, int col);

//声明排雷函数
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);