#pragma once
//����ͷ�ļ�
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//�����Ķ���
#define ROW 3/*��*/  //��Ϸ���̵�����
#define COL 3/*��*/
#define Q
#define J

//���ú���������
//�˵���ӡ
void menu();

//��Ϸ����ʵ��
void game();

//��ӡ����
void printf_board(char board[ROW][COL], int row, int col);

//��ʼ������
void init_board(char board[ROW][COL], int row, int col);
//�������
void game_player(char board[ROW][COL], int row, int col);
//��������
void computer_player(char board[ROW][COL], int row, int col);
//�����Ӯ
char win_lose(char board[ROW][COL], int row, int col);
//���;�
int isfull(char board[ROW][COL], int row, int col);