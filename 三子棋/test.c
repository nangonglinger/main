#include "game.h"
//��Ϸ�߼��Ĳ���


int main()
{
	int input = 0;
	do
	{
		menu();/*��ӡ�˵�*/
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
		{
			printf("��Ϸ����");
			break;
		}
		default:
			printf("����Ƿ�������������\n");
			break;
		}
		
	} while (input);
	return 0;
}