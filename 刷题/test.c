#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//		int ch = 0;
//		//EOF -- end of file
//		while ((ch = getchar()) != EOF)
//		{
//			//putchar(ch + 32);
//			//printf("\n");
//			printf("%c\n", ch + 32);
//			getchar();//读取\n
//		}
//	return 0;
//}
//
//int main()
//{
//    char a = 0;
//    while (~scanf("%c", &a))
//    {
//        int c = getchar();
//        printf("%c\n", a + 32);
//    }
//    return 0;
//}

//int main() {
//    long long int a;
//    scanf("%lld", &a);
//    printf("%lld %lld %lld", a / 3600, a / 60, a % 60);
//    return 0;
//}
//
//
//void print_max(float arr[], int n)
//{
//    float ret = arr[0];
//    for (int i = 0; i < n; i++)
//    {
//        if (ret < arr[i])
//        {
//             ret = arr[i];
//        }
//    }
//    printf("%.2f ", ret);
//}
//void print_min(char arr[], int n)
//{
//    float ret = arr[0];
//    for (int i = 0; i < n; i++)
//    {
//        if (ret > arr[i])
//        {
//            ret = arr[i];
//        }
//    }
//    printf("%.2f ", ret);
//}
//print_average(char arr[], int n)
//{
//    float ret = 0;
//    for (int i = 0; i < n; i++)
//    {
//        ret += arr[i];
//    }
//    printf("%.2f", ret);
//}
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int ch = getchar();
//    float arr[100] = { 0 };
//    int i = 0;
//    for ( i = 0; i < n; i++)
//    {
//        scanf("%f", &arr[i]);
//        int ch = getchar();
//    }
//    print_max(arr, n);
//    print_min(arr, n);
//    print_average(arr, n);
//    return 0;
//}

//
//    int main() {
//    double f;
//    scanf("%lf", &f);
//    printf("%.3f", 5.0/9.0 * (f - 32));
//    return 0;
//}
//
//
//#include <math.h>
//#define pai 3.14
//int main() {
//    int h, r;
//    scanf("%d %d", &h, &r);
//    float ret = (pai * h * pow(r, 2)) / 1000;
//    printf("%d", 10 / ret);
//    return 0;
//}



//int math_clm(int n, int m)
//{
//    int i = 0;
//    for (i = 1;; i++)
//    {
//        int ret = i * n;
//        if (m/ret == 0)
//        {
//            return ret;
//        }
//    }
//}
//
//int math_gcd(int n, int m)
//{
//    int c;
//    while (m % n != 0)
//    {
//        c = m % n;
//        m = n;
//        n = c;
//    }
//    return n;
//}
//int main() {
//    int n, m, clm, gcd;
//    scanf("%d %d", &n, &m);
//    clm = math_clm(n, m);
//    gcd = math_gcd(n, m);
//    printf("%d", clm + gcd);
//    return 0;
//}

// int main() {
//    char a;
//    while (~scanf("%c", &a))
//    {
//        if ((a >= 'a' && a <= 'a' + 26) || (a >= 'A' && a <= 'A' + 26))
//        {
//            printf("%c is an alphabet.\n", a);
//        }
//        else
//        {
//            printf("%c is not an alphabet.\n", a);
//        }
//        int ch = getchar();
//    }
//    return 0;
//}

//
//int main() {
//    int a;
//    scanf("%d", &a);
//    if (a % 2 == 0)
//    {
//        printf("2 ");
//    }
//    if (a % 3 == 0)
//    {
//        printf("3 ");
//    }
//    if (a % 7 == 0)
//    {
//        printf("7");
//    }
//    else
//    {
//        printf("%d", a);
//    }
//    return 0;
//}


//int main() {
//    long long a, b, c;
//    scanf("%lld", &a);
//    b = a * 1000;
//    c = a * 100 + 10;
//    if (b > c)
//    {
//        printf("v");
//    }
//    else
//    {
//        printf("w");
//    }
//    return 0;
//}
//
//
//int main() 
// {
//    int x, y, x1, y1;
//    scanf("%d %d", &x, &y);
//    int ch = getchar();
//    scanf("%d %d", &x1, &y1);
//    int i, j;
//    int i, j;
//    return 0;
//}
 

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	while (n>0)
//	{
//		printf("%d", n % 10);
//		n = n / 10;
//	}
//	return 0;
//}

//int main()
//{
//    char arr[] = {0};
//    scanf("%s", & arr);
//    char* p = &arr;
//    int count = 0;
//    while (*(p++) != 0)
//    {
//        count++;
//    }
//    printf("%d", count);
//    return 0;
//}

//int main()
//{
//	int i = 0;
//	while (~(scanf("%d", &i)))
//	{
//		if (i > 0)
//			{printf("1\n");}
//		else if (i == 0) 
//			{ printf("0.5\n"); }
//		else 
//			{ printf("0\n"); }
//	}
//	return 0;
//}

//int main() {
//    int a, b, c;
//    while (~(scanf("%d %d %d", &a, &b, &c)))
//    {
//        if (a + b > c && a + c > b && b + c > a)
//        {
//            if (a == b && a == c) {
//                printf("Equilateral triangle!\n");
//            }
//            else if (a == b || a == c || b == c) {
//                printf("Isosceles triangle!\n");
//            }
//            else {
//                printf("Ordinary triangle!\n");
//            }
//        }
//        else
//        {
//            printf("Not a triangle!\n");
//        }
//    }
//    return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	while (n > 0)
//	{
//		printf("%d", n % 10);
//		n = n / 10;
//	}
//	return 0;
//}


//
//int main()
//{
//	char a = 0;
//	while (scanf("%c", &a) != EOF)
//	{
//		int ch = getchar();
//		a += 32;
//		printf("%c\n", a);
//	}
//	return 0;
//}

int i;
int main()
{
	i--;
	if (i > sizeof(i))
	{
		printf(">\n");
	}
	else
	{
		printf("<\n");
	}
	return 0;
}
//全局变量未定义时默认为0
//sizeof操作符，输出结果类型默认为unsigned int
//有符号整数和无符号整数相比较时会先把有符号转为无符号整数