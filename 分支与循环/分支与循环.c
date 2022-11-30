#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//shutdown -s -t 60电脑在60秒后关机
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	again:
//	printf("请注意，你的电脑在一分钟后关机，如果输入：我是猪，就不会关机\n请输入：");
//		scanf("%d", &input);
//	if (strcmp(input, "我是猪") == 0)
//		{
//		system("shoutdown -a");
//		break;
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}


//gotu语句
//c语言中提供了可以滥用的goto语句
//建议不要使用，因为可能会试代码逻辑错误
//但是有些时候要跳出深层嵌套语句时，break只能跳出一层逻辑，就要用goto


////猜数字游戏
////1，电脑生成一个随机数
////2，猜数字
void menu()
{
	printf("***********************\n");
	printf("**  1,play,  0,exit  **\n");
	printf("***********************\n");
}
//RAND_MAX---0到32767之间
void game()
{	
	int num = 0;
	//1,生成一个随机数
	int ret = rand()%100+1;//生成随机数生成1到100之间的
	//模100得0到99之间的
	//printf("%d\n", ret);
	//2，猜数字
	while (1)
	{
		printf("请猜数字：");
		scanf("%d", &num);
		if (num > ret)
		{
			printf("猜大了\n");
		}
		else if (num < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你猜对了\n");
			break;
		}
	}
}
//time_t  time(time_t *timer)
int main()
{
	//用时间戳来设置随机数的起始点
	//起始点每次运行游戏使用一次
	srand((unsigned)time(NULL));//rand随机数的种子  NULL是空指针
	//时间戳
	//当前计算机的时间-计算机的起始时间（1970.1.1,0:0:0:）=()秒
	int input = 0;
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
				printf("退出游戏\n");
				break;
		default:
				printf("选择错误\n");
				break;
		}
	} while (input);
	return 0;
}



//do   while
//int main()
//{
//	int i = 1;
//	do 
//	{
//		printf("%d\n", i);
//		i++;
//	} 
//	while (i <= 10);
//	return 0;
//}



//for循环的初始化、调整、判断部分都可以省略
//但是如果for循环的判断部分被省略则判断条件就是恒为：真
//当判断表达式为0时，则为假
//如果不是很熟练，建议不要省略

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//	//(j为全局变量)因为省略初始化部分导致j在第二轮进入循环时仍为10
//			printf("起飞\n");
//	}
//	return 0;
//}

//int main()
//{
//	for (;;)
//	{
//		printf("起飞\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)//初始化，判断，调整一体化
//	{
//		//不可以在for循环体内改变循环变量，防止for循环失去控制
//		//尽量才用前闭后开区间
//		if (i == 5)
//			break;
//		printf("%d\n", i);
//	}
//	return 0;
	//int i = 0;//初始化
	//while (i <= 10)//判断
	//{
	//	//....
	//	i++;//调整
	//}
	//return 0;
//}


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}


//int main()
//{	
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("请输入密码：");//输入密码并保存在password中
//	scanf("%s", password);
//	//scanf读取完后，缓冲区还剩下一个\n（确认scanf时打的回车）
//	int ch = 0;
//	while ((ch = getchar()) != '\n')//将输入缓冲区的剩余内容清空
//	{
//		;
//	}
//	printf("请确认（Y/N）:");
//	
//	/*getchar();*///将\n读取出去
//	
//	/*scanf("%s", ret);*/
//	ret = getchar();
//	if (ret == 'Y')
//		printf("确认成功\n");
//	else	
//		printf("放弃确认\n");	
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//		//ctrl + z
//		//EOF - end of file ->-1  文件结束标志
//		putchar(ch);
//	return 0;
//	/*int ch = getchar();
//	putchar(ch);
//	printf("\n%c", ch);
//	return 0;*/
//}



//while（表达式）表达式为假终止循环，暨为0时
//循环语句
//int main()
//{
//	int i = 1;
//	while (i <= 10)//循环语句有多语句时要用大括号括起来
//	{
//		if (i == 5)
//			continue;//(终止本次循环后面的部分，重新进行判断)
//		printf("%d\n", i);
//		i++;
//	}
//	
//	//while(i<=10)//循环语句有多语句时要用大括号括起来
//	//{
//	//	if (i == 5)
//	//		break;
//	//	printf("%d\n", i);
//	//	i++;
//	//}
//	return 0;
//}


//switch用于多分支语句
//switch（整形表达式）
//case(整形常量表达式)
//switch允许嵌套使用
// stitch语句没有beack是不会停止的
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	
//	switch (day)
//	{
//		case 1:
//		case 2:
//		case 3:
//		case 4:
//		case 5:
//			printf("要上班\n");
//			break;
//		case 6:
//		case 7:
//			printf("摆烂\n");
//			break;
//		default://如果所有的case都无法进入则进入default
//			printf("输入错误\n");
//			break;
//	}
//	return 0;
//}



//判断一个数是否为奇数
//int main()
//{
//	int a = 1;
//	while(a <= 100)
//	/*scanf("%d", &a);*/
//	{
//		int b = a % 2;
//		if (1 == b)
//			printf("%d\n", a);
//		a++;
//	}
//	/*if (0 == b)
//		printf("不是奇数\n");
//	else
//		printf("是奇数\n");*/
//	return 0;
//}



//int main()
//{
//	int num = 4;
//	//变量和常量的比较判断时讲常量放在变量的前面
//	if (num = 5)  //= 赋值   ==判断是否相等
//	{
//		printf("呵呵\n");
//	}
//	return 0;
//}



//else自动与最近的if匹配使用---else悬空问题


//如果if后要控制多个语句要用{}起来指控制代码块
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("未成年\n");
//	else if(age < 30 && age >= 18)
//		printf("青年\n");
//	else if(age >= 30 && age < 50)
//		printf("中年\n");
//	else if (age>=50 && age<90)
//		printf("老年\n");
//	return 0;
//}