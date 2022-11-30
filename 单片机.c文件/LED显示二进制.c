 
	void delay(unsigned int xms)		//@12.000MHz的延时函数每次运行为1ms 
{
	while(xms--)//为xms的延时函数 
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
	unsigned char led = 0;//定义一个无符号字符型变量，因为在51单片机中刚好可以代表8位的位数值
		while(1)
	{
		if(P3_1 == 0)
		{
			delay(20);
			while(P3_1 == 0)
			delay(20);
				led++;
				P2=~led;
		}
	}
}
	
