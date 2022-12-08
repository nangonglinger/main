#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

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

void reverse_word(char* arr1)
{
	while (*arr1 != '\0')
	{
		if (*arr1 != ' ')
		{
			reverse_word(arr1 + 1);
		}
		printf("%c", *arr1);
		arr1++;
	}

}

int main()
{
	char arr1[100] = { 0 };
	char arr2[100] = { 0 };
	scanf("%s", arr1);
	reverse_word(arr1);
	return 0;
}