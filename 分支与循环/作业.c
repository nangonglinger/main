#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<math.h>





//�����㷨
//��дһ��������һ���������������в��Ҿ����ĳ����
//�ҵ��˴�ӡ�±꣬û�ҵ�����Ҳ���
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
//			printf("�ҵ����±���%d", mid);
//			break;
//		}
//	}
//	if(left>right)
//		{
//		printf("û�ҵ�");
//		}
//	return 0;
//}



//��ӡ99�˷��ھ���
//ģ��
//int main()
//{
//	//��ȷ������
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 1;
//		//��ȷ������������
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//�Լ�����
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


//��10�����е����ֵ
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


//����1/1-1/2+1/3-1/4+.....+1/99-1/100��ֵ����ӡ����
//����   flag===1
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



//��дһ��������1��100֮���ж��ٸ�9
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




//��ӡ100��200֮�������
//1,�Գ���
//��������һ������д��a*b����ʽ
//���ҿ�֪a/b��������һ������С�ڵ��ڡ�=����i
//sqrt--�ǿ�ƽ������ѧ�⺯��---ͷ�ļ�--#include<math.h>

//int main()
//{
//	int a = 0;
//	int i = 0;
//	int b = 0;
//	for(a=100;a<=200;a++)//ż��������������Ҳ����ÿ�ε���2
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
//	printf("\n�����ܹ���%d��", i);
//	return 0;
//}



//��ӡ����
//���߼���д�ᱨ��
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
//		//1��������,4�������Ҳ��ܱ�100����
//		//2���ܱ�400����
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



//���������--շת�����
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
//	printf("%dΪ�������", n);
//	return 0;
//}


//��ӡ���ı�����1-100��
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



//�����������Ӵ�С���ѡ��Ƚ��㷨
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
//	printf("���������룺");
//	int i = 0;
//	while (i < 3)
//	{
//		scanf("%s", password);
//		if (strcmp(password,"12345") == 0)//==���������Ƚ������ַ����Ƿ����
//			//Ӧ��ʹ��һ���⺯��--strcmp
//			//�����᷵��0    ��ߵĴ�᷵��һ�����������
//			//�ұߵĴ���᷵��һ��С�������
//		{
//			printf("��½�ɹ�");
//				break;
//		}
//		if (i < 2)
//			printf("�����������\n�������������룺");
//		else
//			printf("��Ǹ�������������");
//		i++;
//	}
//	return 0;
//}


//��д����ʵ�ֶ���ַ��������ƶ����м�ۼ�
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
//		//��Ϣһ���ٴ�ӡ
//		//��λ�Ǻ���
//		printf("%s\n", arr2);
//		Sleep(1000);
//		if (left > right)
//			break;
//		system("cls");//ִ��ϵͳָ���һ������-system
//		//cls--�����Ļ
//	}
//	return 0;
//}


//дһ�������������������ҵ�һ��Ԫ��
//�۰�����㷨--���ֲ����㷨
//�������������ȡ��
//int main()
//{
//	int arr[] = {1,4,6,8,10,23,56,78};
//	int k = 78;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;//���±�
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
//			printf("�ҵ���Ԫ���ˣ��±�Ϊ��%d\n", mid);
//			break;
//		}
//		
//	}
//	if (left > right)
//		printf("û�ҵ�\n");
//	return 0;
//}





//int main()//��������㷨�Ƚϸ���Ч�ʲ���
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
//			printf("�ҵ����±��ǣ�%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("�Ҳ���Ŀ��Ԫ��");
//	}
//	return 0;
//}



//����100��200֮�������
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





//����1��10�׳˵ĺ�
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
//	printf("���ǣ�%d\n ", y);
//	return 0;
//}


//�Ż��㷨��Ҫ�����߼�
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


//����n�Ľ׳�
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