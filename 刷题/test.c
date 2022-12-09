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

int main() {
    long long int a;
    scanf("%lld", &a);
    printf("%lld %lld %lld", a / 3600, a / 60, a % 60);
    return 0;
}