#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//a = 3,b = 5,��ab���������ǲ���ʹ�õ���������
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

//дһ���������ز�����������1�ĸ���
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
//	// ���� 1��λ��
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

//��ȡһ�����������������е�ż��λ������λ�����ֱ��������������
//
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	int i = 0;
//	int j = 0;
//	printf("ż��λ����Ϊ��\n");
//	for (i = 0; i < sizeof(x) * 8; i += 2)//ż��λ
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
//	printf("����λ����Ϊ��\n");
//	for (i = 1; i < sizeof(x) * 8; i += 2)//����λ
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


//���һ��������ÿһλ
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

//����int��32λ������m��n�Ķ����Ʊ���У�
//�ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7
int main()
{
	int m = 1999;
	int n = 2299;

	return 0;
}
