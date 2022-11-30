#include "game.h"
//游戏逻辑的测试


int main()
{
	int input = 0;
	do
	{
		menu();/*打印菜单*/
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
		{
			printf("游戏结束");
			break;
		}
		default:
			printf("输入非法，请重新输入\n");
			break;
		}
		
	} while (input);
	return 0;
}