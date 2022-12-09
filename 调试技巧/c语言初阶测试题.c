#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//设计一个算法求两个正整数的最小公倍数
//int LCM(int a, int b)
//{
//	int i = 1;
//	for (i = 1;; i++)
//	{
//		int ret = a * i;
//		if (ret % b == 0)
//		{
//			return a * i;
//		}
//	}
//}
//
//int main()
//{
//	int A = 0;
//	int B = 0;
//	scanf("%d %d", &A, &B);
//	int ret = LCM(A, B);
//	printf("%d", ret);
//	return 0;
//}

//void reverse_word(char* left, char* right)
//{
//	while (left < right)
//	{
//		int tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[100] = { 0 };
//	gets(arr);
//	int len = strlen(arr);
//	reverse_word(arr,arr+len-1);
//	char* start = arr;
//
//	while (*start)
//	{
//		char* end = start;
//		while(*end != ' '&& *end != '\0')
//		{
//			end++;
//		}
//		reverse_word(start, end - 1);
//		if (*end = ' ')
//			start = end + 1;
//		else
//			start = end;
//	}
//	printf("%s", arr);
//	return 0;
//}