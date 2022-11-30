//#include <stdio.h>
//int main()
//{
//	short int age = 21;//向内存申请两个字节 
//	float weight = 85.1f;//向内存申请四个字节
//	 
//	return 0;
//}
//
//
//
//#include <stdio.h>
//int num1 = 2;
////全局变量是整个工程内都可以使用 ，全局变量的作用周期是整个main函数 
//int main()//局部变量优先与全局变量参与运算
//{
//	int num = 0;//局部变量的作用域就在这个大括号内， 局部变量的生命周期从进作用域开始出作用域结束 
//	printf("num = %d\n",num);
//	{
//		printf("num1 = %d\n",num1);
//	 
//	 } 
//	return 0 ;
//	
//}
//
//
//
//int main()
//{
//	int num1 = 0;//计算两个数的和 
//	int num2 = 0;
//	//输入数据使用输出甘薯scanf
//	scanf("%d%d",&num1,&num2);//&是取地址符号 
//	int sum = 0;
//	sum = num1 + num2;//c语言语法规定，变量定义要在当前代码块的最前面；c++就没有关系； 
//	printf("sun = %d\n ",sum);
//	return 0;
// } 
// 
//
//int a = 10;//全局变量定义在主函数之前 
//int main()
//{
//	{
//		int a = 10;//局部变量出了括号就无效了（只在括号内有效） 
//	}
//	printf ("%d\n", a);
//	return 0;
//}
//
//
//int a = 100;//全局变量 
////局部变量和全局变量不要使用同样的名字容易产生误会，产生bug；
////当局部变量和全局变量的名字相同时，局部变量优先； 
//int main()
//
//{
//	int a = 10;//局部变量 
//	printf("%d\n",a);
//	return 0;
//	
//}
