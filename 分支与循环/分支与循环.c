#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//shutdown -s -t 60������60���ػ�
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	again:
//	printf("��ע�⣬��ĵ�����һ���Ӻ�ػ���������룺�������Ͳ���ػ�\n�����룺");
//		scanf("%d", &input);
//	if (strcmp(input, "������") == 0)
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


//gotu���
//c�������ṩ�˿������õ�goto���
//���鲻Ҫʹ�ã���Ϊ���ܻ��Դ����߼�����
//������Щʱ��Ҫ�������Ƕ�����ʱ��breakֻ������һ���߼�����Ҫ��goto


////��������Ϸ
////1����������һ�������
////2��������
void menu()
{
	printf("***********************\n");
	printf("**  1,play,  0,exit  **\n");
	printf("***********************\n");
}
//RAND_MAX---0��32767֮��
void game()
{	
	int num = 0;
	//1,����һ�������
	int ret = rand()%100+1;//�������������1��100֮���
	//ģ100��0��99֮���
	//printf("%d\n", ret);
	//2��������
	while (1)
	{
		printf("������֣�");
		scanf("%d", &num);
		if (num > ret)
		{
			printf("�´���\n");
		}
		else if (num < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ��¶���\n");
			break;
		}
	}
}
//time_t  time(time_t *timer)
int main()
{
	//��ʱ������������������ʼ��
	//��ʼ��ÿ��������Ϸʹ��һ��
	srand((unsigned)time(NULL));//rand�����������  NULL�ǿ�ָ��
	//ʱ���
	//��ǰ�������ʱ��-���������ʼʱ�䣨1970.1.1,0:0:0:��=()��
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
				printf("�˳���Ϸ\n");
				break;
		default:
				printf("ѡ�����\n");
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



//forѭ���ĳ�ʼ�����������жϲ��ֶ�����ʡ��
//�������forѭ�����жϲ��ֱ�ʡ�����ж��������Ǻ�Ϊ����
//���жϱ��ʽΪ0ʱ����Ϊ��
//������Ǻ����������鲻Ҫʡ��

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//	//(jΪȫ�ֱ���)��Ϊʡ�Գ�ʼ�����ֵ���j�ڵڶ��ֽ���ѭ��ʱ��Ϊ10
//			printf("���\n");
//	}
//	return 0;
//}

//int main()
//{
//	for (;;)
//	{
//		printf("���\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)//��ʼ�����жϣ�����һ�廯
//	{
//		//��������forѭ�����ڸı�ѭ����������ֹforѭ��ʧȥ����
//		//��������ǰ�պ�����
//		if (i == 5)
//			break;
//		printf("%d\n", i);
//	}
//	return 0;
	//int i = 0;//��ʼ��
	//while (i <= 10)//�ж�
	//{
	//	//....
	//	i++;//����
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
//	printf("���������룺");//�������벢������password��
//	scanf("%s", password);
//	//scanf��ȡ��󣬻�������ʣ��һ��\n��ȷ��scanfʱ��Ļس���
//	int ch = 0;
//	while ((ch = getchar()) != '\n')//�����뻺������ʣ���������
//	{
//		;
//	}
//	printf("��ȷ�ϣ�Y/N��:");
//	
//	/*getchar();*///��\n��ȡ��ȥ
//	
//	/*scanf("%s", ret);*/
//	ret = getchar();
//	if (ret == 'Y')
//		printf("ȷ�ϳɹ�\n");
//	else	
//		printf("����ȷ��\n");	
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//		//ctrl + z
//		//EOF - end of file ->-1  �ļ�������־
//		putchar(ch);
//	return 0;
//	/*int ch = getchar();
//	putchar(ch);
//	printf("\n%c", ch);
//	return 0;*/
//}



//while�����ʽ�����ʽΪ����ֹѭ������Ϊ0ʱ
//ѭ�����
//int main()
//{
//	int i = 1;
//	while (i <= 10)//ѭ������ж����ʱҪ�ô�����������
//	{
//		if (i == 5)
//			continue;//(��ֹ����ѭ������Ĳ��֣����½����ж�)
//		printf("%d\n", i);
//		i++;
//	}
//	
//	//while(i<=10)//ѭ������ж����ʱҪ�ô�����������
//	//{
//	//	if (i == 5)
//	//		break;
//	//	printf("%d\n", i);
//	//	i++;
//	//}
//	return 0;
//}


//switch���ڶ��֧���
//switch�����α��ʽ��
//case(���γ������ʽ)
//switch����Ƕ��ʹ��
// stitch���û��beack�ǲ���ֹͣ��
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
//			printf("Ҫ�ϰ�\n");
//			break;
//		case 6:
//		case 7:
//			printf("����\n");
//			break;
//		default://������е�case���޷����������default
//			printf("�������\n");
//			break;
//	}
//	return 0;
//}



//�ж�һ�����Ƿ�Ϊ����
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
//		printf("��������\n");
//	else
//		printf("������\n");*/
//	return 0;
//}



//int main()
//{
//	int num = 4;
//	//�����ͳ����ıȽ��ж�ʱ���������ڱ�����ǰ��
//	if (num = 5)  //= ��ֵ   ==�ж��Ƿ����
//	{
//		printf("�Ǻ�\n");
//	}
//	return 0;
//}



//else�Զ��������ifƥ��ʹ��---else��������


//���if��Ҫ���ƶ�����Ҫ��{}����ָ���ƴ����
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("δ����\n");
//	else if(age < 30 && age >= 18)
//		printf("����\n");
//	else if(age >= 30 && age < 50)
//		printf("����\n");
//	else if (age>=50 && age<90)
//		printf("����\n");
//	return 0;
//}