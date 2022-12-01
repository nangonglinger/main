#pragma once
//引用头文件
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//变量的定义
#define ROW 3/*行*/  //游戏棋盘的行列
#define COL 3/*列*/
#define Q
#define J

//引用函数的声明
//菜单打印
void menu();

//游戏功能实现
void game();

//打印棋盘
void printf_board(char board[ROW][COL], int row, int col);

//初始化棋盘
void init_board(char board[ROW][COL], int row, int col);
//玩家下棋
void game_player(char board[ROW][COL], int row, int col);
//电脑下棋
void computer_player(char board[ROW][COL], int row, int col);
//检测输赢
char win_lose(char board[ROW][COL], int row, int col);
//检测和局
int isfull(char board[ROW][COL], int row, int col);