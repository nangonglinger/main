#include<stdio.h>
#include<string.h>
#include<memory.h>

//�������Ӧ��׷����ھ۵����
//int main()
//{
//
//	char arr1[] = "bit";
//	char arr2[] = "########";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	//strcpy - string copy - �ַ�����������
//	//strlen - string length - �ַ��������й�
//	return 0;
//}

//memset
//memory - (��)�ڴ� set -����

//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}
//���庯������ȡ�ϴ�ֵ��
//int get_max(int x, int y)//�Ƚϻ��
//{
//	if(x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int max = get_max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}

//дһ������������������

//void Swap1(int x, int y)
//{
// x��y��a��b�����κ�����û����ϵ
//	int tmp = x
//	x = y;
//	y = tmp;
//}
//void Swap2(int* pa, int* pb)
//{
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	//����ab
//	//int* pa = &a;
//	//int* pb = &b;//pa��ָ�����
//	//*pa = 20;�����ò���
//	Swap1(a, b);����Ӧ��ֱ�Ӷ�Ŀ��Ԫ��
//	Swap2(&a, &b);//��������
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//ȷ���Ĳ�����ʵ��
//���������ź���Ĳ������β�
//�β�--��ʽ�ϵĲ�����ֻ���ں���������ʱ��ʵ�����������ڴ浥Ԫ��
//�������ͻ�����
//��ʵ�δ����βε�ʱ��ʵ������
//�β���ʵ��ʵ�ε�һ����ʱ����
//���βε��޸��ǲ���ı�ʵ�ε�
//���ú���--��ֵ���ã���ַ����
//��ֵ����-������ʵ�����βζ�ռ�в�ͬ���ڴ�飬���βε��޸Ĳ���Ӱ��ʵ��
//��ַ����-���ֵ��÷��������ú�������ߵı�����������������ϵ
//Ҳ���Ǻ����ڲ�����ֱ�Ӳ��������ⲿ�ı���


//������Ƕ�׵��ú���ʽ����
//����֮���ǿ����л���ϵ�
//��ʽ�����ǰ�һ�������ķ���ֵ��Ϊ��һ�������Ĳ�����
//int main()
//{
//	int len = 0;
//	//1
//	len = strlen("abc");
//	printf("%d\n", len);
//	//2
//	printf("%d\n", strlen("abc"));
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d",43)));
//	//printf�ķ���ֵ�Ǵ�ӡ���ַ�����
//	return 0;
//}


//��������(һ�����ͷ�ļ�.h)
//�����Լ���ͷ�ļ�#include"***"
//int Add(int, int);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int num = 0;
//	//�����ĵ���
//	num = Add(a, b);
//	printf("%d",num);
//	return 0;
//}
////�����Ķ��壨һ�����ͬ��.c�ļ��
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}

//����������
//1.���߱�������һ��������ʲô��������ʲô������������ʲô��
//���Ǿ����ǲ��Ǵ��ڣ��޹ؽ�Ҫ��
//2.����������һ������ں�����ʹ��֮ǰ��Ҫ������������ʹ��
//3.����������һ����Ҫ����ͷ�ļ��еġ�
//��������
//�����Ķ�����ָ�����ľ������֣����������Ĺ���ʵ�֡�



//#include"add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = add(a, b);
//	printf("%d", c);
//	return 0;
//}

//�����ݹ�
//������������ı�̼��ɽ����ݹ飬�ݹ���Ϊһ���㷨�ڳ�����������й㷺Ӧ��
//һ���������߹�����˵�����߶�������ֱ�ӻ��߼�ӵ��������һ�ַ���
//�ݹ����Ҫ˼����ʽ���ڣ��Ѵ��»�С��
//int main()
//{
//	printf("hehe\n");
//	main();
//	//�ݹ鳣������stack overflowջ���
//	/*ÿһ�ε��ú������Ὺ��һ���µ�ջ��*/
//	return 0;
//}
//  ��ϰ1����һ������ֵ������˳���ӡ����ÿһλ
//�ݹ�ı�Ҫ����д�ݹ麯����Ҫ����
//��������������������������ʱ�ݹ鲻�ټ���
//ÿ�εݹ����֮��Խ��Խ�ӽ������������

//void print(int x)
//{
//	if (x > 9)
//	{
//		print(x / 10);
//	}
//	printf("%d ", x%10);
//}
// 
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}

//��ϰ2 ��д��������������ʱ���������ַ����ĳ���

//int my_strlen(char* p)//ģ��ʵ��һ��strlen����
//{
//	//�����ַ����ĳ���
//	int count = 0;������
//	while(*p != '\0')
//	{
//		count++;//����
//		p++;//p����ǵ�ַ����ַ��һ���ǵ�ַ����һλ
//	}
//	return count;
//}
 

//�ݹ�ķ���--�Ѵ��»�С
//my_strlen("bit")
//1 + my_strlen("it");
//1 + my_strlen("t");
//1 + my_stelen("");
//1+1+1+0 = 3
//int my_strlen(char* arr)//�ݹ鷽ʽ���
//{
//	if (*arr != '\0')
//		return 1 + my_strlen(arr + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	/*int len = strlen(arr)*/;//strlen������--\0���ַ�������
//	int len = my_strlen(arr);
//	/*arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ*/
//	printf("%d", len);
//	return 0;
// }


//�ݹ������
//��ϰ1  ��n�Ľ׳�
//int main()/*��������*/
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		sum = i * sum;
//	}
//	printf("%d", sum);
//	return 0;
//}

//int fac(int n)
//{
//	if (n = 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//		
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int c = fact(n);
//	printf("%d", c);
//	return 0;
//}

//��ϰ  ���n��쳲���������������ջ�����ֻ����Ч�ʣ�
//�ݹ�fib����Ч�ʹ��ڵ��£����ھ޴���ظ�����
//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d", ret);
//	return 0;
//}

//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d", ret);
//	return 0;
//}

//˼����
//��ŵ������
//������̨������--ÿ�ο�����1����2����n���ж���������
//void move(int n, char a, char c)
//{
//	printf("����%d���̴�%c-->%c\n", n, a, c);
//}
//
//void hanoi(int n, char a, char b, char c)
//{
//	if (n == 1)
//	{
//		move(n, a, c);
//	}
//	else
//	{
//		hanoi(n - 1, a, c, b);
//		move(n, a, c);
//		hanoi(n - 1, b, a, c);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//����a���ϵ�Բ�̸���
//	hanoi(n, 'a', 'b', 'c');
//
//	return 0;
//}

//�κ�ϰ��  ����һ��1��100���ж��ٸ�9

//int main()
//{
//	int a = 0;
//	int i = 0;
//	int count = 0;
//	for (i = 1;i<=100;i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}


