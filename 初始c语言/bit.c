#include <stdio.h>
#include <string.h>



//结构体---结构体---我们自己创造出来的类型
//复杂对象
//人   书    等需要多个元素才能描述的对象
//创建一个结构体类型
//struct Book
//{
//	char name[20];//三体-刘慈欣
//	short price;//100
//};
//int main()
//{
// strcpy(b1.name,"地球大炮");//strcpy--字符串拷贝-要先引用库函数-string.h
// 
//	//利用结构体类型创建一个该类型的结构体变量
//	struct Book b1 = { "三体",100 };
//	struct Book* pb = &b1;
//	//利用pb打印出我的书名和价格
//	//.  结构体变量.成员
//	//->  结构体变量->成员
//	printf("%d\n", pb->price);
//	printf("%s\n", pb->name);
//	printf("%s\n", (*pb).name);
//	printf("%d\n", (*pb).price);
//	printf ("书名：%s\n",b1.name );
//	printf ("价格：%d元\n", b1.price );
//	b1.price = 30;
//	printf("打折售价：%d元\n", b1.price);
//	return 0;
//}


//int main()
//{
//	double a = 3.14;
//	double* pd = &a;
//	printf("%lf\n", *pd);
//	printf("%lf\n", a );
//
//	//int a = 10;//申请4个字节
//	//printf("%p\n", &a);
//	//int* p = &a;//p是一个变量---指针变量
//	////类型是int*
//	//*p = 30;//*  -解引用操作符，间接访问操作符
//	//printf("%d\n", *p);
//	return 0;
//}


//int main()
//{
//	char ch = 'k';
//	char* pc = &ch;
//	*pc = 'a';
//	printf("%c\n", ch);
//	printf("%d\n", sizeof(pc));
//	return 0;
//	//32位的一个指针地址需要4个字节
//	//64位的一个指针地址许愿8个字节
//}


//32位----32根地址线（数据线）正电和负电 1  0
//一个内存单元定为一个byte字节一个字节一个地址

//int main()
//{
//	int a = 10;
//	//&a;//取地址
//	int* p = &a;
//	//有一种变量是用来存放地址的---指针变量
//	*p = 20;//*  解引用操作符
//	printf("a = %d\n", a);
//	printf("%p\n", &a);//&是取地址符号，%p是打印地址符号
//	return 0;
//}


////#define 定义标识符常量
//#define max 100
////#define 也可以定义宏--带参数
//#define MAX(x,y) (x>y?x:y)
//int main()
//{
//	int a = 1;
//	int b = 4;
//	int sum = 0;
//	printf("sum = %d\n", sum = MAX(a, b));
//	return 0;
//}



////声明一个外部函数--extern
//extern int add(int, int);
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int sum = add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}


//void test()
//{
//	//int a = 1;//每次调用完就销毁a每次进入再创建，所以不会累加
//	static int a = 1;
//	//static --修饰局部变量  将a变成一个静态的局部变量
//	//局部变量的生命周期变长
// static修饰全局变量(函数)   
// 改变变量的作用域，静态的全局变量只能在自己所在的源文件内部使用
// (改变了函数的链接属性（普通的函数是自带外部链接属性的）)
// 出了源文件就没法用了
//	a++;
//	printf("a = %d\n", a);
//}
//
//int main()
//{
//	int i = 1;
//	while (i < 10)
//	{
//		test();//调用函数test
//		i++;
//	}
//	return 0;
//}

//
//c语言中的关键字
//auto int a = 10;局部变量---局部变量都是自动变量也是自动变量平时省略auto
//auto break case char const continue default do double else enum
//extern float for goto if int long register(寄存器操作符) return
//short signed unsigned sizeof static struct(结构体关键字) switch 
//typedef（类型定义） union(联合体或者共用体) void volatile while
//struct
//typedef  -类型定义---类型重定义
//typedef unsigned int u_int;给类型重新换个名字
// unsigned int num = 10;
// u_int = 10;
//signed int   = int   平时signed省略
//原码反码补码
//只要是整数，内存中存的就是二进制补码
//正数，原码反码补码相同
//负数，
//原码，直接写出二进制序列
//反码，原码的符号位不变，其他位取反得到
//补码，反码加一

//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	//int arr[] = { 0 };
//	//arr[4];//----下标引用操作符
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//（）函数调用操作符
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//	//条件操作符   exp1? exp2 :exp3;
//	//表达式exp1为真则执行表达式2
//	//如果表达式exp1为假则执行表达式3
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);
//	printf("%d\n", max);
//	return 0;
//}


////关系操作符
////>=是大于等于符号
//int main()
//{
//	//&&---逻辑与---都为真才为真
//	//||---逻辑或---有一个为真则为真
//	int a = 0;
//	int b = 5;
//	int c = a || b;
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;//double强制转换成int类型   （类型）--强制类型转换
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = ++a;//前置++，先++再使用
//	//int b = a++;//后置++，先使用再++
//	printf("a = %d\nb = %d\n", a, b);
//	return 0;
//}


//int main()
//{
//	int a = 3;
//	int b = ~a;//b是有符号的整形;
//	//~---按二进制位取反
//	printf("%d\n", b);//打印的是这个数的原码
//	//负数在内存中存储的时候，存储的是二进制的补码
//	//原码，反码，补码
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	int arr[] = { 1, 2, 3, 4 };//有4个元素每个元素4个字节共16个字节
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));//sizeof是操作符并不是函数（数组的类型是int[6]）
//	printf("%d\n", sizeof(arr));//计算数组的大小，单位是字节
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}


//int max(int x, int y)
//{
//	if (x > y)
//		return x;//(返回的值是直接放回max)
//	else
//		return y;
//}
//
//int main()
//{
//	int a , b;
//	scanf("%d", &a);
//	scanf("%d", &b);
//	int c = max(a, b);
//	printf("较大值是：%d",c);
//
//
//	//if (a > b)
//	//	printf("较大值是：a");
//	//else
//	//	printf("较大值是：b");
//	return 0;
//}


//int main()
//{
//	//字符串的结束标志是：'\0'
//	// '\0'是转义字符
//	// 0  是数字0
//	//'0' 是字符0--ASII值是48
//  //EOF--end of file -  文件结束标志  -1
//	return 0;
//}


// int main()
//{
//	//sizeof是计算变量(也可以是数组)类型所占空间的大小的，单位是字节
//	int arr1[10] = { 0 };//10个整形的数组
//	int a = 300;
//	//计算数组的元素个数
//	printf("sz = %d\n", sizeof(arr1) / sizeof(arr1[0]));
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(arr1));
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	//c语言中我们表示真假
//	//0就是假   非0就是真
//	//假变真固定为1
//	printf("%d\n", a);
//	printf("%d\n", !a);
//	return 0;
//}


//int main()
//{
//	//(2进制)位操作
//	// &按位与
//	// | 按位或
//	// ^按位异或(c语言中^不是次方；
//	//计算规律是
//	//对应的2进制位相同则为0
//	//对应的2进制位相异则为1
//	int a = 4;
//	int b = 5;
//	//100
//	//101
//	int c = a^b;
//	printf("%d\n", c);
//	return 0;
//}


//int main()
//{
//	//移（2进制）位操作符
//	//  <<左移
//	//  >>右移
//	int a = 1;
//	//int 整型1占4个字节32个bit位
//	a << 1;
//	return 0;
//}


//int main()
//{
//	int a = 5 % 2;//(取模)
//	printf("%d\n", a);
//	return 0;
//}


//数组
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//定义一个存10(这个数字不能是个变量)个整形数字的数组
//	int i = 0;
//	while (i <= 9)
//	{
//		printf("%d\n", arr[i]);//下标的方式访问元素
//		i++;
//	}
//	
//	
//	//arr[下标]
//	//数组的数都有小标，从0开始排序
//	//char ch[20]
//	// float arr2[5]
//	return 0;
// }

//定义函数
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 23;
//	int num2 = 33;
//	int a = 7;
//	int b = 78;
//	int sum1 = 0;
//	int sum2 = 0;
//	//sum = num1 + num2;
//	//sum = a + b;
//	sum1 = Add(num1, num2);
//	sum2 = Add(a, b);
//	printf("sum1 = %d", sum1);
//	printf("sum2 = %d", sum2);
//	return 0;
//}
//

//int main()
//
//	{
//	int day = 0;
//	printf("每天学习\n");
//	
//	while (day < 3650)
//	{
//		printf("学习第%d天\n",day);
//		day++;
//	}
//	if(day>=3650)
//		printf("好工作\n");
//
//	return 0;
//	}


//int main()
//{
//	int input = 0;
//	printf("好好学习\n");
//	printf("你要好好学习嘛？:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("好工作\n");
//	else
//		printf("回家烤地瓜\n");
//
//	return 0;
//}


//int main()
//{
//	printf("%c\n", '\132');
//	return 0;
//}
