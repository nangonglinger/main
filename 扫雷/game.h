#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//参数的宏定义
//实际游戏大小
#define ROW 9
#define COL 9

//由于游戏要进行判定，为了防止出域，故设计时为四方留有余量
#define ROWS ROW+2
#define COLS COL+2

//放置地雷的数目
#define NUM 10

//函數的定义
//打印菜单
void menu();

//初始化棋盘
void init_board(char board[ROWS][COLS], int rows, int cols, char ret);

//放置地雷
void put_mine(char board[ROWS][COLS], int rows, int cols, int num);

//游戏主要内容实现
void gmae();
//打印棋盘
void printf_board(char board[ROWS][COLS], int row, int col);

//玩家下棋
void gamer_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);