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
//			getchar();//∂¡»°\n
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



int math_clm(int n, int m)
{
    int i = 0;
    for (i = 1;; i++)
    {
        int ret = i * n;
        if (m/ret == 0)
        {
            return ret;
        }
    }
}

int math_gcd(int n, int m)
{
    int c;
    while (m % n != 0)
    {
        c = m % n;
        m = n;
        n = c;
    }
    return n;
}
int main() {
    int n, m, clm, gcd;
    scanf("%d %d", &n, &m);
    clm = math_clm(n, m);
    gcd = math_gcd(n, m);
    printf("%d", clm + gcd);
    return 0;
}