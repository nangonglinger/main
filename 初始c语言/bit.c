#include <stdio.h>
#include <string.h>



//�ṹ��---�ṹ��---�����Լ��������������
//���Ӷ���
//��   ��    ����Ҫ���Ԫ�ز��������Ķ���
//����һ���ṹ������
//struct Book
//{
//	char name[20];//����-������
//	short price;//100
//};
//int main()
//{
// strcpy(b1.name,"�������");//strcpy--�ַ�������-Ҫ�����ÿ⺯��-string.h
// 
//	//���ýṹ�����ʹ���һ�������͵Ľṹ�����
//	struct Book b1 = { "����",100 };
//	struct Book* pb = &b1;
//	//����pb��ӡ���ҵ������ͼ۸�
//	//.  �ṹ�����.��Ա
//	//->  �ṹ�����->��Ա
//	printf("%d\n", pb->price);
//	printf("%s\n", pb->name);
//	printf("%s\n", (*pb).name);
//	printf("%d\n", (*pb).price);
//	printf ("������%s\n",b1.name );
//	printf ("�۸�%dԪ\n", b1.price );
//	b1.price = 30;
//	printf("�����ۼۣ�%dԪ\n", b1.price);
//	return 0;
//}


//int main()
//{
//	double a = 3.14;
//	double* pd = &a;
//	printf("%lf\n", *pd);
//	printf("%lf\n", a );
//
//	//int a = 10;//����4���ֽ�
//	//printf("%p\n", &a);
//	//int* p = &a;//p��һ������---ָ�����
//	////������int*
//	//*p = 30;//*  -�����ò���������ӷ��ʲ�����
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
//	//32λ��һ��ָ���ַ��Ҫ4���ֽ�
//	//64λ��һ��ָ���ַ��Ը8���ֽ�
//}


//32λ----32����ַ�ߣ������ߣ�����͸��� 1  0
//һ���ڴ浥Ԫ��Ϊһ��byte�ֽ�һ���ֽ�һ����ַ

//int main()
//{
//	int a = 10;
//	//&a;//ȡ��ַ
//	int* p = &a;
//	//��һ�ֱ�����������ŵ�ַ��---ָ�����
//	*p = 20;//*  �����ò�����
//	printf("a = %d\n", a);
//	printf("%p\n", &a);//&��ȡ��ַ���ţ�%p�Ǵ�ӡ��ַ����
//	return 0;
//}


////#define �����ʶ������
//#define max 100
////#define Ҳ���Զ����--������
//#define MAX(x,y) (x>y?x:y)
//int main()
//{
//	int a = 1;
//	int b = 4;
//	int sum = 0;
//	printf("sum = %d\n", sum = MAX(a, b));
//	return 0;
//}



////����һ���ⲿ����--extern
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
//	//int a = 1;//ÿ�ε����������aÿ�ν����ٴ��������Բ����ۼ�
//	static int a = 1;
//	//static --���ξֲ�����  ��a���һ����̬�ľֲ�����
//	//�ֲ��������������ڱ䳤
// static����ȫ�ֱ���(����)   
// �ı�����������򣬾�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
// (�ı��˺������������ԣ���ͨ�ĺ������Դ��ⲿ�������Եģ�)
// ����Դ�ļ���û������
//	a++;
//	printf("a = %d\n", a);
//}
//
//int main()
//{
//	int i = 1;
//	while (i < 10)
//	{
//		test();//���ú���test
//		i++;
//	}
//	return 0;
//}

//
//c�����еĹؼ���
//auto int a = 10;�ֲ�����---�ֲ����������Զ�����Ҳ���Զ�����ƽʱʡ��auto
//auto break case char const continue default do double else enum
//extern float for goto if int long register(�Ĵ���������) return
//short signed unsigned sizeof static struct(�ṹ��ؼ���) switch 
//typedef�����Ͷ��壩 union(��������߹�����) void volatile while
//struct
//typedef  -���Ͷ���---�����ض���
//typedef unsigned int u_int;���������»�������
// unsigned int num = 10;
// u_int = 10;
//signed int   = int   ƽʱsignedʡ��
//ԭ�뷴�벹��
//ֻҪ���������ڴ��д�ľ��Ƕ����Ʋ���
//������ԭ�뷴�벹����ͬ
//������
//ԭ�룬ֱ��д������������
//���룬ԭ��ķ���λ���䣬����λȡ���õ�
//���룬�����һ

//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	//int arr[] = { 0 };
//	//arr[4];//----�±����ò�����
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//�����������ò�����
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//	//����������   exp1? exp2 :exp3;
//	//���ʽexp1Ϊ����ִ�б��ʽ2
//	//������ʽexp1Ϊ����ִ�б��ʽ3
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);
//	printf("%d\n", max);
//	return 0;
//}


////��ϵ������
////>=�Ǵ��ڵ��ڷ���
//int main()
//{
//	//&&---�߼���---��Ϊ���Ϊ��
//	//||---�߼���---��һ��Ϊ����Ϊ��
//	int a = 0;
//	int b = 5;
//	int c = a || b;
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;//doubleǿ��ת����int����   �����ͣ�--ǿ������ת��
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = ++a;//ǰ��++����++��ʹ��
//	//int b = a++;//����++����ʹ����++
//	printf("a = %d\nb = %d\n", a, b);
//	return 0;
//}


//int main()
//{
//	int a = 3;
//	int b = ~a;//b���з��ŵ�����;
//	//~---��������λȡ��
//	printf("%d\n", b);//��ӡ�����������ԭ��
//	//�������ڴ��д洢��ʱ�򣬴洢���Ƕ����ƵĲ���
//	//ԭ�룬���룬����
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	int arr[] = { 1, 2, 3, 4 };//��4��Ԫ��ÿ��Ԫ��4���ֽڹ�16���ֽ�
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));//sizeof�ǲ����������Ǻ����������������int[6]��
//	printf("%d\n", sizeof(arr));//��������Ĵ�С����λ���ֽ�
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}


//int max(int x, int y)
//{
//	if (x > y)
//		return x;//(���ص�ֵ��ֱ�ӷŻ�max)
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
//	printf("�ϴ�ֵ�ǣ�%d",c);
//
//
//	//if (a > b)
//	//	printf("�ϴ�ֵ�ǣ�a");
//	//else
//	//	printf("�ϴ�ֵ�ǣ�b");
//	return 0;
//}


//int main()
//{
//	//�ַ����Ľ�����־�ǣ�'\0'
//	// '\0'��ת���ַ�
//	// 0  ������0
//	//'0' ���ַ�0--ASIIֵ��48
//  //EOF--end of file -  �ļ�������־  -1
//	return 0;
//}


// int main()
//{
//	//sizeof�Ǽ������(Ҳ����������)������ռ�ռ�Ĵ�С�ģ���λ���ֽ�
//	int arr1[10] = { 0 };//10�����ε�����
//	int a = 300;
//	//���������Ԫ�ظ���
//	printf("sz = %d\n", sizeof(arr1) / sizeof(arr1[0]));
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(arr1));
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	//c���������Ǳ�ʾ���
//	//0���Ǽ�   ��0������
//	//�ٱ���̶�Ϊ1
//	printf("%d\n", a);
//	printf("%d\n", !a);
//	return 0;
//}


//int main()
//{
//	//(2����)λ����
//	// &��λ��
//	// | ��λ��
//	// ^��λ���(c������^���Ǵη���
//	//���������
//	//��Ӧ��2����λ��ͬ��Ϊ0
//	//��Ӧ��2����λ������Ϊ1
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
//	//�ƣ�2���ƣ�λ������
//	//  <<����
//	//  >>����
//	int a = 1;
//	//int ����1ռ4���ֽ�32��bitλ
//	a << 1;
//	return 0;
//}


//int main()
//{
//	int a = 5 % 2;//(ȡģ)
//	printf("%d\n", a);
//	return 0;
//}


//����
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//����һ����10(������ֲ����Ǹ�����)���������ֵ�����
//	int i = 0;
//	while (i <= 9)
//	{
//		printf("%d\n", arr[i]);//�±�ķ�ʽ����Ԫ��
//		i++;
//	}
//	
//	
//	//arr[�±�]
//	//�����������С�꣬��0��ʼ����
//	//char ch[20]
//	// float arr2[5]
//	return 0;
// }

//���庯��
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
//	printf("ÿ��ѧϰ\n");
//	
//	while (day < 3650)
//	{
//		printf("ѧϰ��%d��\n",day);
//		day++;
//	}
//	if(day>=3650)
//		printf("�ù���\n");
//
//	return 0;
//	}


//int main()
//{
//	int input = 0;
//	printf("�ú�ѧϰ\n");
//	printf("��Ҫ�ú�ѧϰ�:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("�ù���\n");
//	else
//		printf("�ؼҿ��ع�\n");
//
//	return 0;
//}


//int main()
//{
//	printf("%c\n", '\132');
//	return 0;
//}
