#include "game.h"

void menu()
{
	printf("*****************************\n");
	printf("********* ɨ����Ϸ **********\n");
	printf("******** 1.����Ϸ   *********\n");
	printf("******* 0.�˳���Ϸ   ********\n");
	printf("*****************************\n");
}
//��ʼ������
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
//���õ���
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
//��ӡ����
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
//�������ѡ��������Χ�м�����
int  mine_num(char mine[ROWS][COLS], int x, int y)
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

void open_board(char mine[ROWS][COLS],char show[ROWS][COLS], int x, int y,int* win)
{
	//int ret = ROW * COL - NUM;
	
	if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
	{
		int tmp = mine_num(mine, x, y);
		if (tmp == 0)
		{
			show[x][y] = ' ';
			int i = 0;
			for (i = -1; i <= 1; i++)
			{
				int j = 0;
				for (j = -1; j <= 1; j++)
				{
					if (show[x+i][y+j] == '*')
					{
						open_board(mine, show, x + i, y+j, win);
					}
				}
			}
		}
		else
		{
			show[x][y] = tmp + '0';
		}
		(*win)--;
	}
	
	//ret--;
}
//��Ҳ���
void gamer_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int ret = row * col - NUM;
	while (1)
	{
		printf("�����ѡ��ɨ��λ��:->\n");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("�ܱ�Ǹ���㱻ը���ˣ�\n");
				printf_board(mine, ROW, COL);
				break;
			}
			else
			{
					//int tmp = mine_num(mine, x, y);
					//if (tmp = 0)
					open_board(mine, show, x, y,&ret);
					printf_board(show, ROW, COL);
					//show[x][y] = tmp + '0';
					//printf_board(show, row, col);
					//ret--;
			}

		}
		else
		{
			printf("����Ƿ�������������\n");
		}
		if (ret == 0)
		{
			printf("��ϲ����Ӯ�ˣ�\n");
			break;
		}
	}
}
