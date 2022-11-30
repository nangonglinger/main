#include "game.h"


//��Ϸ������ʵ��
//�˵���ӡ
void menu()
{
	printf("************��������Ϸ*********\n");
	printf("***********  1��play  *********\n");
	printf("***********  0��exit  *********\n");
	printf("*******************************\n");
}
/*��ʼ������*/
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
//��ӡ���̵ĺ���
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
		//	printf("---|---|---\n");//�ָ��ߴ�����ҲҪ����
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
/*�������*/	
void game_player(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	//printf("��ѡ������λ��->:");
	//scanf("%d %d", &i, &j);
	while (1)
	{
		printf("��������壺\n");
		printf("��ѡ������λ��->:");
		scanf("%d %d", &i, &j);
		if ((i > 0) && (i <= row ) && (i > 0) && (j <= col))//�ж����������Ƿ�Ϸ�
		{
			//�������µ�����
			if (board[i - 1][j - 1] == ' ')
			{
				board[i - 1][j - 1] = '*';
				printf_board(board, ROW, COL);
				break;
			}
			else
				printf("����λ�ñ�ռ�ã�����������\n");
		}
		else
			printf("����Ƿ�������������\n");
	}
}
//��������
void computer_player(char board[ROW][COL], int row, int col)
{
	srand((unsigned)time(NULL));
	printf("��������->\n");
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
//��Ϸ��Ӯ���
char win_lose(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	/*�м��*/
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
	/*�Խ����ж�*/
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == board[i+1][j+1] && board[i+1][j+1] == board[i-1][j-1] && board[i][j] != ' ')
				//�����ж�ʱ��������λԪ��Ϊ��׼��������Χ�������Ƿ����
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
	/*�;ּ��*/
	int ret = isfull(board, row, col);
	if (ret == 1)
	{
		return 'Q';
	}
	else
		return 'J';
}
//�;ּ�⺯��
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
	//������ʼ��
	init_board(board, ROW, COL);
	printf_board(board, ROW, COL);/*��ӡ����*/
	while (1)
	{
		/*ʵ������ �����*/
		game_player(board, ROW, COL);
		ret = win_lose(board, ROW, COL);
		if (ret != 'J')
			break;
		//��ӡ����Ӯ
		/*��������*/
		computer_player(board, ROW, COL);
		/*ʵ����Ӯ���*/
		ret = win_lose(board, ROW, COL);
		//��ӡ����Ӯ
		if (ret != 'J')
			break;
	}
	if (ret == '*')
		printf("��һ�ʤ\n");
	if (ret == '#')
		printf("���Ի�ʤ\n");
	if (ret == 'Q')
		printf("ƽ��\n");
	
}