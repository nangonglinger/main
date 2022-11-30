#include <REGX52.H>
void delay(unsigned int xms)		//@12.000MHz??????????1ms 
{
	while (xms--)//?xms????? 
	{
		unsigned char i, j;

		i = 2;
		j = 239;
		do
		{
			while (--j);
		} while (--i);
	}
}

void main()
{
	unsigned char led = 0;
	P2 = 0xff;
	while (1)
	{
		if (P3_1 == 0)
		{
			delay(20);
			while (P3_1 == 0)
				delay(20);
			led++;
			if (led >= 8)
				led = 0;

			P2 = ~(0x01 << led);
		}
	}

}