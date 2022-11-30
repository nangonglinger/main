#include "game.h"


//游戏函数的实现
//菜单打印
void menu()
{
	printf("************三子棋游戏*********\n");
	printf("***********  1，play  *********\n");
	printf("***********  0，exit  *********\n");
	printf("*******************************\n");
}
/*初始化棋盘*/
void init_board(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
//打印棋盘的函数
void printf_board(char board[ROW][COL],int row,int col)
{
	int i = 0;
	int j = 0;
	for (i = 0;i<row;i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		//if (i < row - 1)
		//	printf("---|---|---\n");//分割线打完了也要分行
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}
/*玩家下棋*/	
void game_player(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	//printf("请选择下棋位置->:");
	//scanf("%d %d", &i, &j);
	while (1)
	{
		printf("请玩家下棋：\n");
		printf("请选择下棋位置->:");
		scanf("%d %d", &i, &j);
		if ((i > 0) && (i <= row ) && (i > 0) && (j <= col))//判断输入数据是否合法
		{
			//存放玩家下的棋子
			if (board[i - 1][j - 1] == ' ')
			{
				board[i - 1][j - 1] = '*';
				printf_board(board, ROW, COL);
				break;
			}
			else
				printf("输入位置被占用，请重新输入\n");
		}
		else
			printf("输入非法，请重新输入\n");
	}
}
//电脑下棋
void computer_player(char board[ROW][COL], int row, int col)
{
	srand((unsigned)time(NULL));
	printf("电脑下棋->\n");
	while (1)
	{
		int i = rand() % row;
		int j = rand() % col;
		if (board[i][j] == ' ')
		{
			board[i ][j ] = '#';
			break;
		}
	}
	printf_board(board, ROW, COL);
}
//游戏输赢检测
char win_lose(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	/*行检测*/
	for (i = 0; i < row; i++)
	{
		for (j = 0;j<col;j++)
		{
			if (board[i][j] == board[i][j + 1] && board[i][j + 1] == board[i][j - 1] && board[i][j] != ' ')
			{
				return board[i][j];
			}
		}
	}
	for (j = 0; j < col; j++)
	{
		for (i = 0; i < row; i++)
		{
			if (board[i][j] == board[i + 1][j] && board[i + 1][j] == board[i - 1][j] && board[i][j] != ' ')
			{
				return board[i][j];
			}
		}
	}
	/*对角线判断*/
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == board[i+1][j+1] && board[i+1][j+1] == board[i-1][j-1] && board[i][j] != ' ')
				//进行判断时优先以中位元素为基准，看其周围各个数是否相等
			{
				return board[i][j];
			}
		}
	}
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == board[i+1][j-1] && board[i+1][j-1] == board[i-1][j+1] && board[i][j] != ' ')
			{
				return board[i][j];
			}
		}
	}
	/*和局检测*/
	int ret = isfull(board, row, col);
	if (ret == 1)
	{
		return 'Q';
	}
	else
		return 'J';
}
//和局检测函数
int isfull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
		return 1;
}

void game()
{
	char board[ROW][COL];
	char ret = 0;
	//函数初始化
	init_board(board, ROW, COL);
	printf_board(board, ROW, COL);/*打印棋盘*/
	while (1)
	{
		/*实现下棋 玩家下*/
		game_player(board, ROW, COL);
		ret = win_lose(board, ROW, COL);
		if (ret != 'J')
			break;
		//打印出输赢
		/*电脑下棋*/
		computer_player(board, ROW, COL);
		/*实现输赢检测*/
		ret = win_lose(board, ROW, COL);
		//打印出输赢
		if (ret != 'J')
			break;
	}
	if (ret == '*')
		printf("玩家获胜\n");
	if (ret == '#')
		printf("电脑获胜\n");
	if (ret == 'Q')
		printf("平局\n");
	
}