#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//ʵ��һ�����������ð������

//void bubbling(int str[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < (sz - i - 1); j++)
//		{
//			if (str[j] > str[j + 1])
//			{
//				int tmp = str[j];
//				str[j] = str[j + 1];
//				str[j + 1] = tmp;
//			}
//		}
//	}
//
//}
//
//int main()
//{
//	int str[] = { 4,3,2000,6,4,2,7,98,23,56 };
//	int sz = sizeof(str) / sizeof(str[0]);
//	bubbling(str,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", str[i]);
//	}
//	return 0;
//}



//����һ���������飬��ɶ�����Ĳ���
//1��ʵ�ֺ���init��������ʼ������Ϊȫ0
//2��ʵ��print������ӡ�����ÿ��Ԫ��
//3��ʵ��reverse���������������Ԫ�ص�����
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ

void init(int arr[],int sz,int a)//�����ʼ������
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = a;
	}
}


int main()
{
	int a = 0;// ��ʼ��Ϊʲô
	int arr[] = {2,3,5,6,7,8,9,10};
	int sz = sizeof(arr) / sizeof(arr[0]);
	init(arr,sz,a);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}