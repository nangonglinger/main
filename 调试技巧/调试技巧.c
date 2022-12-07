#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>



//求1！+2！+3！+   +n！
//int fact(int a)
//{
//	int i = 1;
//	int ret = 1;
//	for (i = 1; i <= a; i++)
//	{
//		ret = ret * i;
//	}
//	return ret;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	int tmp = 0;
//	if (a == 0)
//	{
//		printf("0");
//	}
//	else
//	{
//		for (i = 1; i <= a; i++)
//		{
//			tmp = tmp + fact(i);
//		}
//		printf("%d", tmp);
//	}
//	return 0;
//}

//void my_strcpy(char* dest, char* sor)
//{
//	while (*dest++ = *sor++)
//	{
//		;
//	}
//}

//void my_strcpy(char* dest, char* sor)
//{
//	while (*dest++ = *sor++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[20] = { "*************" };
//	char arr2[] = "hello zhuzhu";
//	/*strcpy(arr1, arr2);*/
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}

#include <assert.h>
unsigned int my_strlen(const char* arr)//size_t也是无符号整形
{
	assert(arr != NULL);
	int count = 0;
	while (*arr++ != '\0')
	{
		count++;
	}
	return count;
}

int main()
{
	char arr1[20] = "zhuzhu";
	int ret = my_strlen(arr1);
	printf("%d", ret);
	return 0;
}