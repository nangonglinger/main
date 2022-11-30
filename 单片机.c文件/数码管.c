#include <REGX52.H>
//void main()//数码管的静态显示
//{
//	P2_4 = 1;
//	P2_3 = 1;
//	P2_2 = 1;
//	P0 = 0x4f;
//}

//用函数封装起来
unsigned char nixie_table[] = { 0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f };

void Delay(unsigned char xms)		//@12.000MHz
{
	unsigned char i, j;
	while (xms--)
	{
	i = 2;
	j = 239;
	do
	{
		while (--j);
	} while (--i);
	}

}



void nixie(unsigned char post, unsigned char num)
{
	switch (post)
	{
	case 8:
		P2_4 = 0;P2_3 = 0;P2_2 = 0;
		break;
	case 7:
		P2_4 = 0;P2_3 = 0;P2_2 = 1;
		break;
	case 6:
		P2_4 = 0;P2_3 = 1;P2_2 = 0;
		break;
	case 5:
		P2_4 = 0;P2_3 = 1;P2_2 = 1;
		break;
	case 4:
		P2_4 = 1;P2_3 = 0;P2_2 = 0;
		break;
	case 3:
		P2_4 = 1;P2_3 = 0;P2_2 = 1;
		break;
	case 2:
		P2_4 = 1;P2_3 = 1;P2_2 = 0;
		break;
	case 1:
		P2_4 = 1;P2_3 = 1;P2_2 = 1;
		break;
	}
	P0 = nixie_table[num];
	Delay(1);
	P0 = 0x00;
}

void main()
{

	while (1)
	{
		nixie(1, 1);
		//Delay(200);
		nixie(2, 2);
		//Delay(200);
		nixie(3, 3);
		//Delay(200);
	}
}