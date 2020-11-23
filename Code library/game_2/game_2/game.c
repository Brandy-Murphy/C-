#include "game.h"

void initboard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for ( i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}

}

void playerboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//��ӡ�к�
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for ( i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for ( j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}

}

void setmine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;//1-9
		int y = rand() % col + 1;//1-9
		if (board[x][y] == '0');
		{
			board[x][y] = '1';
			count--;
		}
	}

}

int get_mine_count(char mine[][COLS], int x, int y)
{
	return
		  mine[x - 1][y] 
		+ mine[x - 1][y - 1] 
		+ mine[x][y - 1]
		+ mine[x + 1][y - 1] 
		+ mine[x + 1][y]
		+ mine[x + 1][y + 1]
		+ mine[x][y + 1] 
		+ mine[x - 1][y + 1] - 8 * '0';
}

void findmine(char mine[][COLS], char show[][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	//������Ϸ��������
	int win = 0;
	while (win<row*col-EASY_COUNT)
	{
		printf("\n�������Ų��׵�����\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row&&y >= 1 && y <= col)
		{
			if (mine[x][y]=='1')//��ͷ����
			{
				printf("\n��ѽ���㱻ը����   :(\n");
				printf("\n");
				playerboard(mine, row, col);
			}
			else //�ӹ�һ��
			{
				//����[x][y]��Χ����Щָ��
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				playerboard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("��������ƺ�����ȷ\n");
		}

	}
	if (win == row*col - EASY_COUNT)
	{
		printf("\n\n\n�Ϸ�һɨ�������������ձߵ�������\n\n\n");
		printf("you won��");
	}
}