//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int num = 4;
//	//字面常量
//	 
//	return 0;
//}
//
//
//
//int main()
//{
//	int num1 = 1;
//	int num2 = 3;
//	scanf("%d%d", &num1, &num2);
//	int sum ;
//	sum = num1 + num2;
//	printf("sum = %d\n",sum);
//	
//	return 0;
// }  
////scanf是c语言提供的
////scanf_s是vs编译器提供的，不是标准c语言提供的
//
//
//int main()
//{
//	const int num = 3;//cosnst是将变量改为常变量（常属性;只读属性）的格式语句 
//	printf("%d\n",num);
////	num = 6;
////	printf("%d\n",num);
//	return 0;
//}
//
//
//int main()
//{
//	const int n = 10;
//	int arr[n] = {0};//n是变量，但是又有常属性，所以我们说n是常变量 
//	return 0;
//}
//
//
//int main()
//{
//	//#define定义的标识符常量
//	#define MAX 10
//	int arr[MAX] = {0};
//	printf("%d\n",MAX); 
//	return 0;
//}
//
//
//4。枚举常量 
//枚举  一一列举 
//枚举关键字   enum 
//enum Sex
//{
//	male,
//	female
// } ;
// //male female --枚举常量 
//int main()
//{
//	printf("%d\n",male);
//	printf("%d\n",female); 
//	return 0;
//}
//
//
//int main()
//{
//	char arr1[] = "abc";//数组
//	char arr2[] = {'a', 'b', 'c'};//‘’单引号引起来的是单个字符 
//	//"abc"---'a' 'b' 'c' '\0' --'\0'这是字符串的结束标志 
//	printf("%s\n",arr2); 
//	printf("%s\n",arr1);
//	//'a'  -  97
//	//'0'  -  0
//	//'A'  -  65
//	//ASCII编码，数字对应的值为ASSII值 
//	//"hello bit";//双引号括起来的就是字符串 
//	return 0;
// }
//
//int main()
//
//{
//	char arr1[] = "abc";
//	char arr2[] = {'a', 'b', 'c', '\0'};//   \0的值是0是不计入字符长度的 但是sizeof计算\0的值
//	printf("%d\n",strlen(arr1));//stelen - string length -计算字符串长度的
//	printf("%d\n",strlen(arr2));//stelen只到遇到\0才会停止 
//	return 0;
// } 
//
//
//转义字符 
//转变原来的意思
//int main()
//{
//	printf("abc\d");
//	return 0;
// } 
//
//int main()
//{
//	printf("%s\n","\"");
//	printf("%c\n",'\'');
//	printf("c:\\text\\32\\text.c\n");
//	printf("c:\test\32\test.c");
//	//\t  -  水平制表符    -等于tab的空格效果 
//	return 0;
//}
//
//int main()
//{
//	printf("%c\n",'\32'); 
//	printf("%d\n",strlen("c:\text\32\text.c")); 
//	//    \t是转义字符会被strlen数成一个   
//	//    \32是两个8进制数字  
//	//	   32作为8进制数字代表的那个10进制数字，作为ASII码值，对应的字符 
//	//	   32   ->  十进制  26  ->作为ASII码值代表的字符“向右的箭头” 
//	//     所以32代表的是一个字符 
//	return 0;
//} 
//
//
//
