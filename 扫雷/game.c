#include "game.h"

void menu()
{
	printf("*****************************\n");
	printf("********* 扫雷游戏 **********\n");
	printf("******** 1.玩游戏   *********\n");
	printf("******* 0.退出游戏   ********\n");
	printf("*****************************\n");
}
//初始化数组
void init_board(char board[ROWS][COLS], int rows, int cols, char ret)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = ret;
		}
	}
}
//放置地雷
void put_mine(char board[ROWS][COLS], int row, int col, int num)
{

	while (num)
	{
		int i = rand() % row + 1;
		int j = rand() % col + 1;
		if (board[i][j] != '1')
		{
			board[i][j] = '1';
			num--;
		}
	}
}
//打印数组
void printf_board(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
//计算玩家选择坐标周围有几个雷
static int  mine_num(char mine[ROWS][COLS], int x, int y)
{

		return mine[x - 1][y - 1] +
			mine[x - 1][ y ] +
			mine[x - 1][y + 1] +
			mine[x][y - 1] +
			mine[x][y + 1] +
			mine[x + 1][y - 1] +
			mine[x + 1][ y ] +
			mine[x + 1][y + 1] - 8 * '0';
}

//玩家操作
void gamer_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int ret = row * col - NUM;
	while (1)
	{
		printf("请玩家选择扫雷位置:->\n");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("很抱歉，你被炸死了！\n");
				printf_board(mine, ROW, COL);
				break;
			}
			else
			{
				int tmp = mine_num(mine, x, y);
				show[x][y] = tmp + '0';
				printf_board(show, row, col);
				ret--;
			}

		}
		else
		{
			printf("输入非法，请重新输入\n");
		}
		if (ret == 0)
		{
			printf("恭喜，你赢了！\n");
			break;
		}
	}
}
