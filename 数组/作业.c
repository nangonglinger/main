#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//实现一个整形数组的冒泡排序

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



//创建一个整形数组，完成对数组的操作
//1，实现函数init（），初始化数组为全0
//2，实现print（）打印数组的每个元素
//3，实现reverse（）函数完成数组元素的逆置
//要求自己设计以上函数的参数，返回值

void init(int arr[],int sz,int a)//数组初始化函数
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = a;
	}
}


int main()
{
	int a = 0;// 初始化为什么
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