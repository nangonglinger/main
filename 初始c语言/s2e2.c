//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int num = 4;
//	//���泣��
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
////scanf��c�����ṩ��
////scanf_s��vs�������ṩ�ģ����Ǳ�׼c�����ṩ��
//
//
//int main()
//{
//	const int num = 3;//cosnst�ǽ�������Ϊ��������������;ֻ�����ԣ��ĸ�ʽ��� 
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
//	int arr[n] = {0};//n�Ǳ������������г����ԣ���������˵n�ǳ����� 
//	return 0;
//}
//
//
//int main()
//{
//	//#define����ı�ʶ������
//	#define MAX 10
//	int arr[MAX] = {0};
//	printf("%d\n",MAX); 
//	return 0;
//}
//
//
//4��ö�ٳ��� 
//ö��  һһ�о� 
//ö�ٹؼ���   enum 
//enum Sex
//{
//	male,
//	female
// } ;
// //male female --ö�ٳ��� 
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
//	char arr1[] = "abc";//����
//	char arr2[] = {'a', 'b', 'c'};//�������������������ǵ����ַ� 
//	//"abc"---'a' 'b' 'c' '\0' --'\0'�����ַ����Ľ�����־ 
//	printf("%s\n",arr2); 
//	printf("%s\n",arr1);
//	//'a'  -  97
//	//'0'  -  0
//	//'A'  -  65
//	//ASCII���룬���ֶ�Ӧ��ֵΪASSIIֵ 
//	//"hello bit";//˫�����������ľ����ַ��� 
//	return 0;
// }
//
//int main()
//
//{
//	char arr1[] = "abc";
//	char arr2[] = {'a', 'b', 'c', '\0'};//   \0��ֵ��0�ǲ������ַ����ȵ� ����sizeof����\0��ֵ
//	printf("%d\n",strlen(arr1));//stelen - string length -�����ַ������ȵ�
//	printf("%d\n",strlen(arr2));//stelenֻ������\0�Ż�ֹͣ 
//	return 0;
// } 
//
//
//ת���ַ� 
//ת��ԭ������˼
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
//	//\t  -  ˮƽ�Ʊ��    -����tab�Ŀո�Ч�� 
//	return 0;
//}
//
//int main()
//{
//	printf("%c\n",'\32'); 
//	printf("%d\n",strlen("c:\text\32\text.c")); 
//	//    \t��ת���ַ��ᱻstrlen����һ��   
//	//    \32������8��������  
//	//	   32��Ϊ8�������ִ�����Ǹ�10�������֣���ΪASII��ֵ����Ӧ���ַ� 
//	//	   32   ->  ʮ����  26  ->��ΪASII��ֵ������ַ������ҵļ�ͷ�� 
//	//     ����32�������һ���ַ� 
//	return 0;
//} 
//
//
//
