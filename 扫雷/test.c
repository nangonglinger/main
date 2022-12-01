#include "game.h"

void gmae()
{
	char mine[ROWS][COLS] = { 0 };//创建数组

	char show[ROWS][COLS] = { 0 };

	init_board(mine, ROWS, COLS, '0');/*初始化数组*/

	init_board(show, ROWS, COLS, '*');

	put_mine(mine, ROW, COL, NUM);/*放置地雷*/

	printf_board(mine, ROW, COL);/*打印数组*/

	printf_board(show, ROW, COL);

	/*玩家扫雷*/
	gamer_mine(mine, show, ROW, COL);
}

int main()
{
	int input = 0;
	
	do
	{
		menu();
		scanf("%d", &input);
		srand((unsigned int)time(NULL));
		switch (input)
		{
		case 1:
		{
			//游戏逻辑
			gmae();
		}
		case 0:
		{
			printf("退出游戏\n");
			break;
		}
		default:
		{
			printf("您的输入错误，请重新输入:>\n");
			break;
		}
		}
	} while (input);
	return 0;
}