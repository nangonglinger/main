#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//a = 3,b = 5,把ab交换，但是不能使用第三个变量
//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d", a, b);
//	return 0;
//}

//int main()
//{
//	short a = 1;
//	a = a << 2;
//	printf("%d\n", a);
//	printf("%d\n", sizeof(a));
//	return 0;
//}
//
//
//int main()
//{
//	int a = -1;
//	int b = ~a;
//	char c = '0';
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%d\n", sizeof(c));
//	return 0;
//}
 
 
//int main()
//{
//	int value = 3;
//	int b = 1 << 0;
//	int c = (b & value);
//	printf("%d", c);
//	return 0;
//}

//写一个函数返回参数二进制中1的个数
//
//int count_one_bits(unsigned int value)
//{
//	int count = 0;
//	//int i = 0;
//	for (int i = 0; i < (sizeof(value) * 8);i++)
//	{
//		int b = 1 << i;
//		if (((~b) & value) != value)
//		{
//			count++;
//		}
//	}
//	return count;
//	// 返回 1的位数
//}
//
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int b = count_one_bits(a);
//	printf("%d", b);
//	return 0;
//}

//获取一个二进制序列中所有的偶数位和奇数位，并分别输出二进制序列
//
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	int i = 0;
//	int j = 0;
//	printf("偶数位序列为：\n");
//	for (i = 0; i < sizeof(x) * 8; i += 2)//偶数位
//	{
//		int a = 1 << i;
//		if (((~a) & x) != x)
//		{
//			printf("1");
//		}
//		else
//		{
//			printf("0");
//		}
//	}
//	printf("\n");
//	printf("奇数位序列为：\n");
//	for (i = 1; i < sizeof(x) * 8; i += 2)//奇数位
//	{
//		int a = 1 << i;
//		if (((~a) & x) != x)
//		{
//			printf("1");
//		}
//		else
//		{
//			printf("0");
//		}
//	}
//	return 0;
//}


//输出一个整数的每一位
//void printf_post(int i)
//{
//	if (i > 9)
//	{
//		printf_post(i / 10);
//	}
//	printf("%d ", i % 10);
//}
//
//int main()
//{
//	int i = 23523;
//	printf_post(i);
//	return 0;
//}

//两个int（32位）整数m和n的二进制表达中，
//有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7
int main()
{
	int m = 1999;
	int n = 2299;

	return 0;
}
