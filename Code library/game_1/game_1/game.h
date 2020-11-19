#define ROW 3
#define COL 3

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//声明函数
void initboard(char board[ROW][COL], int row, int col);
void displayboard(char board[ROW][COL], int row, int col);
void playermove(char board[ROW][COL], int row, int col);
void computermove(char board[ROW][COL], int row, int col);


//告诉我们游戏的四种状态
//玩家赢’*‘
//电脑赢’#‘
//平局’Q‘
//继续’C‘
char iswin(char board[ROW][COL], int row,int col);

//判断是否平局，结果为1为平局 为0为继续
int isfull(char board[ROW][COL], int row, int col);