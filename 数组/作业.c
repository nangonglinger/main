#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
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

//void init(int arr[],int sz,int a)//�����ʼ������
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = a;
//	}
//}
//
//void print(int arr[], int sz)/*��ӡ����ÿ��Ԫ��*/
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
//	int right = sz-1;//�������һ��Ԫ�ص��±����Ԫ�ظ�����һ
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
//	int a = 0;// ָ����ʼ������
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


//������a�����ݺ�����b�����ݽ��н���

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



