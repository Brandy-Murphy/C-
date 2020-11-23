#define EASY_COUNT 10

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2



#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//ÉùÃ÷
void initboard(char board[ROWS][COLS], int rows, int cols, char set);
void playerboard(char board[ROWS][COLS], int row, int col);
void setmine(char board[ROWS][COLS],int row ,int col);
void findmine(char mine[][COLS], char show[][COLS], int row, int col);
int get_mine_count(char mine[][COLS],int x,int y);