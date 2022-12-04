#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
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

//void init(int arr[],int sz,int a)//数组初始化函数
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = a;
//	}
//}
//
//void print(int arr[], int sz)/*打印数组每个元素*/
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void reverse(int arr[],int sz)
//{
//	//int len = strlen(arr);
//	//int tmp = *arr;
//	//*arr = *(arr + len - 1);
//	//*(arr + len - 1) = '\0';
//	//if (strlen(arr+1) > 1)
//	//{		
//	//	reverse(arr + 1);
//	//}
//	//*(arr + len - 1) = tmp;
//		int left = 0;
//	int right = sz-1;//数组最后一个元素的下标等于元素个数减一
//	while (left<right)
//	{
//		char tmp = *(arr + left);
//		*(arr + left) = *(arr + right);
//		*(arr + right) = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int a = 0;// 指定初始化内容
//	int arr[] = {2,3,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	print(arr,sz);
//	reverse(arr,sz);
//	print(arr, sz);
//	init(arr,sz,a);
//	print(arr, sz);
//	return 0;
//}


//将数组a的内容和数组b的内容进行交换

//void reverse_arr(int arr1[], int arr2[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//}
//int main()
//{
//	int arr1[] = { 1,12,3,45,6,7,8 };
//	int arr2[] = { 1,2,3,4,5,6,7 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	reverse_arr(arr1, arr2,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}



