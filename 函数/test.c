//��ϰ1дһ�������ж�һ���ǲ�������
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
//	printf("������Ҫ��ѯ����ݣ�");
//	scanf("%d", &a);
//	int b = is_leap_year (a);
//	if (b = 1)
//		printf("������");
//	else
//		printf("��������");
//	return 0;
//}


//��ϰ2дһ�����������ж�һ�����ǲ�������
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


//��ϰ3дһ������ʵ��һ�������������еĶ��ֲ���
//���ֲ���
//��һ�����������в��Ҿ����ĳ����
//����ҵ��˷����±꣬�Ҳ������ظ�һ
//binary_search���ֲ���
//�����ڲ���������Ԫ�صĸ���

//int binary_search(int 
// 
// 
// [], int a, int sz)
//{
//	//�㷨��ʵ��
//	/*int sz = sizeof(arr) / sizeof(arr[0]);*///�����ϴ�ʱ��arr��һ��ָ�룬ϵͳ��ô����Ŀ����Ϊ�˷�ֹ�ڴ��˷�
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
//	int ret = binary_search(arr,a,sz);//�����ڴ��ε�ʱ��ֻ������arr����Ԫ�ص�ַ
//	if (ret == -1)
//	{
//		printf("û�ҵ�Ŀ�����֡�");
//	}
//	else
//	{
//		printf("�ҵ����±���%d��", ret);
//	}
//	return 0;
//} 


//��ϰ4 дһ��������ÿ������������ͻ�ʹnum��ֵ����1��(ʹ�ô�ַ����)

//void Add(int* p)
//{
//	(*p)++;
//}
//
//
//int main()
//{
//	int num = 0;
//	//���ú�����ʹnum����1
//	Add(&num);
//	printf("%d", num);
//	return 0;
//}



//�κ�ϰ��  ����1/1-1/2+1/3-1/4������+1/99-1/100��ֵ����ӡ�����

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


//��ϰ��  ��10�������е����ֵ

//int main()
//{
//	int arr[10] = { 1,2,3,4,6,123,423,546,123,213 };
//	int max = arr[0];//�Ƚϴ�Ԫ�ص�һ����ʼ
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

//��ϰ��  ���99�˷��ھ���

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


//ʵ��һ������������������
//int swap(int* pa, int* pb)//ʵ���������������ݽ���
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



//���һ����������ӡһ������ÿһλ
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


//���һ��������n�Ľ׳�

//int fact(int n)//�ݹ����׳ˣ���Ҫ��Ҫ֪������ѧ�߼�
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

//���һ������ģ��ʵ��strlen���ݹ�ʵ�֣�
//�޲�ʵ��ģ��strlen
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

//�ַ������򣨵ݹ�ʵ�֣�
//reverse_string(char* string)
//ʵ�֣����ַ����е��ַ��������У����������ӡ
//Ҫ����ʹ��c�������е��ַ�����������

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
//	int right = my_strlen(arr)-1;//�������һ��Ԫ�ص��±����Ԫ�ظ�����һ
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

//void reverse_string(char* arr)//�ݹ鷽���������ַ�������Щ�鷳
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



//����һ�������������ÿ��λ֮�ͣ�������digitsum��n��
//Ҫ��ݹ�ʵ��
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
//	printf("ÿλ���ĺ��� %d", num);
//	return 0;
//}


////дһ���������õݹ�ʵ��n��k�η������Ǹ��η���
//double power(int n,int k)
//{
//	if (k > 0)
//	{
//		return n * power(n, k - 1);
//	}
//	if (k == 0)
//		return 1;
//	else//���������η���
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



//д�����������õݹ�ͷǵݹ���쳲���������
//����5��10��2�����5��55��1

//int fib(int n)//�ݹ�
//{
//	if (n > 2)
//		return fib(n - 1) + fib(n - 2);
//	else
//		return 1;
//}


//�ǵݹ����ۼ�
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

