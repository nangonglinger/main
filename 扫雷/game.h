#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//�����ĺ궨��
//ʵ����Ϸ��С
#define ROW 9
#define COL 9

//������ϷҪ�����ж���Ϊ�˷�ֹ���򣬹����ʱΪ�ķ���������
#define ROWS ROW+2
#define COLS COL+2

//���õ��׵���Ŀ
#define NUM 10

//�����Ķ���
//��ӡ�˵�
void menu();

//��ʼ������
void init_board(char board[ROWS][COLS], int rows, int cols, char ret);

//���õ���
void put_mine(char board[ROWS][COLS], int rows, int cols, int num);

//��Ϸ��Ҫ����ʵ��
void gmae();
//��ӡ����
void printf_board(char board[ROWS][COLS], int row, int col);

//�������
void gamer_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);