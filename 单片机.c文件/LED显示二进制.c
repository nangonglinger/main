 
	void delay(unsigned int xms)		//@12.000MHz����ʱ����ÿ������Ϊ1ms 
{
	while(xms--)//Ϊxms����ʱ���� 
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
	unsigned char led = 0;//����һ���޷����ַ��ͱ�������Ϊ��51��Ƭ���иպÿ��Դ���8λ��λ��ֵ
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
	
