//练习1写一个函数判断一年是不是闰年
#include<stdio.h>
#include<math.h>


//int is_leap_year(int x)
//{
//	if ((x % 4 == 0) && (x % 100 != 0) || (x % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int a = 0;
//	printf("请输入要查询的年份：");
//	scanf("%d", &a);
//	int b = is_leap_year (a);
//	if (b = 1)
//		printf("是闰年");
//	else
//		printf("不是润年");
//	return 0;
//}


//练习2写一个函数可以判断一个数是不是素数
//int is_prime(int x)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(x); i++)
//	{
//		if (x % i == 0)
//			return 0;
//	}
//	return 1;
//
//}
//
//int main()
//{
//	int a = 0;
//	for (a = 100; a <= 200; a++)
//	{
//		if (is_prime(a) == 1)
//			printf("%d ", a);
//	}
//	return 0;
//}


//练习3写一个函数实现一个整形有序数列的二分查找
//二分查找
//在一个有序数组中查找具体的某个数
//如果找到了返回下标，找不到返回负一
//binary_search二分查找
//函数内不能求数组元素的个数

//int binary_search(int 
// 
// 
// [], int a, int sz)
//{
//	//算法的实现
//	/*int sz = sizeof(arr) / sizeof(arr[0]);*///本质上此时的arr是一个指针，系统这么做的目的是为了防止内存浪费
//	int left = 0;
//	int right = sz-1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > a)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < a)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//		return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int a = 6;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr,a,sz);//数组在传参的时候只传数组arr的首元素地址
//	if (ret == -1)
//	{
//		printf("没找到目标数字。");
//	}
//	else
//	{
//		printf("找到了下表是%d。", ret);
//	}
//	return 0;
//} 


//练习4 写一个函数，每调用这个函数就会使num的值增加1；(使用传址函数)

//void Add(int* p)
//{
//	(*p)++;
//}
//
//
//int main()
//{
//	int num = 0;
//	//调用函数，使num增加1
//	Add(&num);
//	printf("%d", num);
//	return 0;
//}



//课后习题  计算1/1-1/2+1/3-1/4。。。+1/99-1/100的值，打印出结果

//int main()
//{
//	double sum = 0.0;
//	double num = 0.0;
//	int i = 0;
//	double ret = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//		{
//			sum = sum + 1.0 / i;
//		}
//		else
//		{
//			num = num + 1.0 / i;
//		}
//	}
//	ret = num - sum;
//	printf("%f", ret);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%f", sum);
//	return 0;
//}


//练习题  求10个整数中的最大值

//int main()
//{
//	int arr[10] = { 1,2,3,4,6,123,423,546,123,213 };
//	int max = arr[0];//比较从元素第一个开始
//	int i = 0;
//	while (i<=10)
//	{
//		if (max<arr[i])
//		{
//			max = arr[i];
//		}
//		i++;
//	}
//	printf("%d", max);
//	return 0;
//}

//练习题  输出99乘法口诀表

//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (b = 1;b<=9;b++)
//	{
//		for (a = 1; a <= b; a++)
//		{
//			printf("%d*%d=%-2d ",  b, a, a * b );
//		}
//		printf("\n");
//	}
//	return 0;
//}


//实现一个函数交换两个整数
//int swap(int* pa, int* pb)//实现两个整数的内容交换
//{
//	int tmp = 0;
//	tmp =  * pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	int a = 1;
//	int b = 2;
//	swap(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}



//设计一个函数，打印一个数的每一位
//void printf_num(int a)
//{
//	if (a > 9)
//	{
//		printf_num(a / 10);
//		printf("%d ", a % 10);
//	}
//	else
//		printf("%d ", a);
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf_num(a);
//	return 0;
//}


//设计一个函数求n的阶乘

//int fact(int n)//递归计算阶乘，主要需要知道其数学逻辑
//{
//	int sum = 0;
//	if(n>1)
//		return n * fact(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int num = fact(n);
//	printf("%d", num);
//	return 0;
//}

//设计一个函数模拟实现strlen（递归实现）
//无参实现模拟strlen
//int my_strlen(char* arr)
//{
//	if (*arr != '\0')
//	{
//		return 1+my_strlen(arr + 1);
//	}
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "zhuzhu";
//	int num = my_strlen(arr);
//	printf("%d", num);
//	return 0;
//}

//字符串逆序（递归实现）
//reverse_string(char* string)
//实现；将字符串中的字符反向排列，不是逆序打印
//要求不能使用c函数库中的字符串操作函数

//int my_strlen(char* arr)
//{
//	int count = 0;
//	while (*arr!= '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//
//void reverse_string(char* arr)
//{
//	int left = 0;
//	int right = my_strlen(arr)-1;//数组最后一个元素的下标等于元素个数减一
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

//void reverse_string(char* arr)//递归方法处理交换字符问题有些麻烦
//{
//	int tmp = *arr;
//	int len = my_strlen(arr);
//	*arr = *(arr + len - 1);
//	*(arr + len - 1) = '\0';
//	if (my_strlen(arr+1)>1)
//	{
//		reverse_string(arr + 1);
//	}
//	*(arr + len - 1) = tmp;
//}
//
//int main()
//{
//	char arr[] = "zhuzhu";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}



//输入一个数计算这个数每个位之和，函数名digitsum（n）
//要求递归实现
//int digitsum(int n)
//{
//	if (n > 9)
//	{
//		return n % 10 + digitsum(n / 10);
//	}
//	return n;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int num = digitsum(n);
//	printf("每位数的和是 %d", num);
//	return 0;
//}


////写一个函数，用递归实现n的k次方（考虑负次方）
//double power(int n,int k)
//{
//	if (k > 0)
//	{
//		return n * power(n, k - 1);
//	}
//	if (k == 0)
//		return 1;
//	else//考虑正负次方数
//	{
//		return 1.0 / power(n, -k);
//	}
//}
//

//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double num = power(n,k);
//	printf("num = %lf", num);
//	return 0;
//}



//写两个函数，用递归和非递归求斐波那契数列
//输入5、10、2，输出5、55、1

//int fib(int n)//递归
//{
//	if (n > 2)
//		return fib(n - 1) + fib(n - 2);
//	else
//		return 1;
//}


//非递归用累加
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int tmp = 1;
//	while (n>2)
//	{
//		tmp = a + b;
//		a = b;
//		b = tmp;
//		n--;
//	}
//	return tmp;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int tmp = fib(n);
//	printf("%d", tmp);
//	return 0;
//}

