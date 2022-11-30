#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<math.h>





//二分算法
//编写一个代码在一个整形有序数列中查找具体的某个数
//找到了打印下标，没找到输出找不到
//int main()
//{
//	int j = 4;
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz-1;
//	int mid = 0;
// 	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > j)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < j)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] == j)
//		{
//			printf("找到了下表是%d", mid);
//			break;
//		}
//	}
//	if(left>right)
//		{
//		printf("没找到");
//		}
//	return 0;
//}



//打印99乘法口诀表
//模板
//int main()
//{
//	//先确定行数
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 1;
//		//再确定列数及内容
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//自己做的
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int num = 0;
//	for(a=1,b=1;a<=9;a++)
//	{
//		c++;
//		b = c;
//		for (; b <= 9; b++)
//		{
//			num = a * b;
//			printf("%d*%d=%-2d ", a, b, num);
//			if (b == 9)
//				printf("\n");
//		}
//	}
//	return 0;
//}


//求10个数中的最大值
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int max = arr[0];
//	for (i = 0; i <= sz; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("max=%d", max);
//	return 0;
//}


//计算1/1-1/2+1/3-1/4+.....+1/99-1/100的值并打印出来
//代码   flag===1
//int main()
//{
//	double a = 1;
//	double b = 2;
//	double sum = 0.0;
//	int i = 1;
//	while (b<=100)
//	{
//		sum = sum + (1 / a);
//		sum = sum + ((-1) * (1 / b));
//		a += 2;
//		b += 2;
//		i++;
//	}
//	printf("%f", sum);
//	return 0;
//}



//编写一个代码书1到100之间有多少个9
//int main()
//{
//	int a = 0;
//	int count = 0;
//	for(a=1;a<=100;a++)
//	{
//		if (a % 10 == 9)
//			/* ((a % 10 == 9) || (a / 10 == 9))*/
//			count++;
//		if (a / 10 == 9)
//			count++;
//	}
//	printf("\n%d", count);
//	return 0;
//}




//打印100到200之间的素数
//1,试除法
//不是素数一定可以写成a*b的形式
//并且可知a/b中至少有一个数字小于等于《=开方i
//sqrt--是开平方的数学库函数---头文件--#include<math.h>

//int main()
//{
//	int a = 0;
//	int i = 0;
//	int b = 0;
//	for(a=100;a<=200;a++)//偶数不可能是素数也可以每次递增2
//	{
//		
//		for(b = 2;b<=sqrt(a);b++)
//		/*for (b = 2; b < a; b++)*/
//		{
//			if (a % b == 0)
//				break;
//		}
//		if(b>sqrt(a))
//		/*if(b == a)*/
//		{
//			printf("%d ", a);
//			i++;
//			}
//	}
//	printf("\n素数总共有%d个", i);
//	return 0;
//}



//打印闰年
//用逻辑书写会报错
//int mian()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int i = 1000;
//	int j = 0;
//	for(i=1000;i<=2000;i++)
//	{
//		//1，闰年能,4整除并且不能被100整除
//		//2，能被400整除
//		if ((i % 4) == 0 && (i % 100) != 0)
//		{
//			printf("%d ", i);
//			j++;
//		}
//		else if ((i % 400) == 0)
//		{
//			printf("%d ", i);
//			j++;
//		}
//	}
//	printf("\n%d\n", j);
//	return 0;
// }



//求最大公因数--辗转相除法
//int main()
//{
//	int m = 5;
//	int n = 4;
//	int c = 0;
//	scanf("%d %d", &m, &n);
//	while(m%n)
//	{
//		c = m % n;
//			m = n;
//			n = c;
// 	}
//	printf("%d为最大公因数", n);
//	return 0;
//}


//打印三的倍数（1-100）
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d\n", i);
//	}
//	return 0;
//}



//将三个数按从大到小输出选择比较算法
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	scanf("%d%d%d", &i, &j, &k);
//	if (i < j)
//	{
//		int tmp = i;
//		i = j;
//		j = tmp;
//	}
//	if (i < k)
//	{
//		int tmp = i;
//		i = k;
//		k = tmp;
//	}
//	if (j < k)
//	{
//		int tmp = j;
//		j = k;
//		k = tmp;
//	}
//	printf("%d %d %d\n", i, j, k);
//	return 0;
//}



//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码：");
//	int i = 0;
//	while (i < 3)
//	{
//		scanf("%s", password);
//		if (strcmp(password,"12345") == 0)//==不能用来比较两个字符串是否相等
//			//应该使用一个库函数--strcmp
//			//相等则会返回0    左边的大会返回一个大于零的数
//			//右边的大则会返回一个小于零的数
//		{
//			printf("登陆成功");
//				break;
//		}
//		if (i < 2)
//			printf("密码输入错误\n请重新输入密码：");
//		else
//			printf("抱歉，三次密码错误");
//		i++;
//	}
//	return 0;
//}


//编写代码实现多个字符从两端移动向中间聚集
//int main()
//{
//	char arr1[] = "zhang ke xin";
//	char arr2[] = "############";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while(left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		//休息一会再打印
//		//单位是毫秒
//		printf("%s\n", arr2);
//		Sleep(1000);
//		if (left > right)
//			break;
//		system("cls");//执行系统指令的一个函数-system
//		//cls--清空屏幕
//	}
//	return 0;
//}


//写一个代码在有序数组中找到一个元素
//折半查找算法--二分查找算法
//除法求得商向下取整
//int main()
//{
//	int arr[] = {1,4,6,8,10,23,56,78};
//	int k = 78;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;//左下标
//	int right = sz - 1;
//	
//	while(left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//			left = mid + 1;
//		else if (arr[mid] > k)
//			right = mid - 1;
//		else
//		{
//			printf("找到该元素了，下标为：%d\n", mid);
//			break;
//		}
//		
//	}
//	if (left > right)
//		printf("没找到\n");
//	return 0;
//}





//int main()//逐个查找算法比较复杂效率不高
//
//{
//	int arr[] = { 2,4,5,6,7,8,9,10,23 };
//	int i = 0;
//	int j = 23;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (j == arr[i])
//		{
//			printf("找到了下标是：%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("找不到目标元素");
//	}
//	return 0;
//}



//计算100到200之间的素数
//int main()
//{
//	int i = 100;
//	int b = 0;
//	while (i <= 200)
//	{
//		while (b<=i)
//		{
//			int c = (int)i % b;
//			if (c == 0)
//			printf("%d\n", i);
//			b++;
//		}
//		i++;
//	}
//	return 0;
//}





//计算1到10阶乘的和
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int i = 0;
//	for (x = 1; x <= 3; x++)
//	{
//		int sum = 1;
//		for (i = 1; i <= x; i++)
//		{
//			sum = sum * i;
//		}
//		y = y + sum;
//	}
//	printf("答案是：%d\n ", y);
//	return 0;
//}


//优化算法需要分析逻辑
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int sum = 1;
//	for (i = 1; i <= 10; i++)
//	{
//		sum = sum * i;
//		n = n + sum;
//	}
//	printf("%d\n", n);
//	return 0;
//}


//计算n的阶乘
//int main()
//{
//	int n = 0;
//	int x = 0;
//	int sum = 1;
//	scanf("%d", &n);
//	for (x=1; x <= n; x++)
//	{
//		sum = sum * x;
//		/*x = sum;*/
//		
//	}
//
//		printf("%d\n", sum);
//	return 0;
//}