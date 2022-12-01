#include<stdio.h>
#include<string.h>
#include<memory.h>

//函数设计应该追求高内聚低耦合
//int main()
//{
//
//	char arr1[] = "bit";
//	char arr2[] = "########";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	//strcpy - string copy - 字符串拷贝函数
//	//strlen - string length - 字符串长度有关
//	return 0;
//}

//memset
//memory - (寄)内存 set -设置

//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}
//定义函数（获取较大值）
//int get_max(int x, int y)//比较获得
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

//写一个函数交换两个变量

//void Swap1(int x, int y)
//{
// x和y与a，b在两段函数中没有联系
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
//	//交换ab
//	//int* pa = &a;
//	//int* pb = &b;//pa是指针变量
//	//*pa = 20;解引用操作
//	Swap1(a, b);操作应该直接对目标元素
//	Swap2(&a, &b);//交换函数
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//确定的参数叫实参
//函数名括号后面的参数是形参
//形参--形式上的参数，只有在函数被调用时才实例化（分配内存单元）
//调用完后就会销毁
//当实参传给形参的时候（实例化）
//形参其实是实参的一份临时拷贝
//对形参的修改是不会改变实参的
//调用函数--传值调用，传址调用
//传值调用-函数的实参与形参都占有不同的内存块，对形参的修改不会影响实参
//传址调用-这种调用方法可以让函数和外边的变量建立起真正的联系
//也就是函数内部可以直接操作函数外部的变量


//函数的嵌套调用和链式访问
//函数之间是可以有机结合的
//链式访问是把一个函数的返回值作为另一个函数的参数。
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
//	//printf的返回值是打印的字符个数
//	return 0;
//}


//函数声明(一般放在头文件.h)
//引用自己的头文件#include"***"
//int Add(int, int);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int num = 0;
//	//函数的调用
//	num = Add(a, b);
//	printf("%d",num);
//	return 0;
//}
////函数的定义（一般放在同级.c文件里）
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}

//函数声明：
//1.告诉编译器有一个函数叫什么，参数是什么，返回类型是什么，
//但是具体是不是存在，无关紧要。
//2.函数的声明一般出现在函数的使用之前，要满足先声明后使用
//3.函数的声明一般是要放在头文件中的。
//函数定义
//函数的定义是指函数的具体体现，交代函数的功能实现。



//#include"add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = add(a, b);
//	printf("%d", c);
//	return 0;
//}

//函数递归
//函数调用自身的编程技巧叫做递归，递归做为一种算法在程序设计语言中广泛应用
//一个函数或者过程在说明或者定义中有直接或者间接调用自身的一种方法
//递归的主要思考方式在于：把大事化小。
//int main()
//{
//	printf("hehe\n");
//	main();
//	//递归常见错误stack overflow栈溢出
//	/*每一次调用函数都会开辟一个新的栈区*/
//	return 0;
//}
//  练习1接收一个整形值，按照顺序打印他的每一位
//递归的必要条件写递归函数需要条件
//存在限制条件，满足限制条件时递归不再继续
//每次递归调用之后越来越接近这个限制条件

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

//练习2 编写函数不允许创建临时变量，求字符串的长度

//int my_strlen(char* p)//模拟实现一个strlen函数
//{
//	//计算字符串的长度
//	int count = 0;计数器
//	while(*p != '\0')
//	{
//		count++;//计数
//		p++;//p存的是地址，地址加一就是地址后移一位
//	}
//	return count;
//}
 

//递归的方法--把大事化小
//my_strlen("bit")
//1 + my_strlen("it");
//1 + my_strlen("t");
//1 + my_stelen("");
//1+1+1+0 = 3
//int my_strlen(char* arr)//递归方式解决
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
//	/*int len = strlen(arr)*/;//strlen不包含--\0求字符串长度
//	int len = my_strlen(arr);
//	/*arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址*/
//	printf("%d", len);
//	return 0;
// }


//递归与迭代
//练习1  求n的阶乘
//int main()/*常规做法*/
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

//练习  求第n个斐波那契数（不考虑栈溢出，只考虑效率）
//递归fib函数效率过于低下，存在巨大的重复运算
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

//思考题
//汉诺塔问题
//青蛙跳台阶问题--每次可以跳1或者2，跳n层有多少种跳法
//void move(int n, char a, char c)
//{
//	printf("将第%d个盘从%c-->%c\n", n, a, c);
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
//	scanf("%d", &n);//输入a柱上的圆盘个数
//	hanoi(n, 'a', 'b', 'c');
//
//	return 0;
//}

//课后习题  计算一个1到100中有多少个9

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


