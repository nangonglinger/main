#include "game.h"

void gmae()
{
	char mine[ROWS][COLS] = { 0 };//��������

	char show[ROWS][COLS] = { 0 };

	init_board(mine, ROWS, COLS, '0');/*��ʼ������*/

	init_board(show, ROWS, COLS, '*');

	put_mine(mine, ROW, COL, NUM);/*���õ���*/

	printf_board(mine, ROW, COL);/*��ӡ����*/

	printf_board(show, ROW, COL);

	/*���ɨ��*/
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
			//��Ϸ�߼�
			gmae();
		}
		case 0:
		{
			printf("�˳���Ϸ\n");
			break;
		}
		default:
		{
			printf("���������������������:>\n");
			break;
		}
		}
	} while (input);
	return 0;
}