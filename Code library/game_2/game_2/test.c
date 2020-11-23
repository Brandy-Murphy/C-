#include "game.h"

void menu()
{
	printf("**********************************\n");
	printf("***** 1.play           0.exit*****\n");
	printf("**********************************\n");
}

void game()
{
	//定义数组
	//布置好雷的数组
	char mine[ROWS][COLS] = { 0 };//11+11
	//排查出雷的信息
	char show[ROWS][COLS] = { 0 };//11+11
	//初始化棋盘
	initboard(mine, ROWS, COLS,'0');
	initboard(show, ROWS, COLS, '*');
	//打印棋盘
	/*playerboard(mine, ROW, COL);*/
	playerboard(show, ROW, COL);
	printf("\n");
	//布置雷
	setmine(mine, ROW, COL);
	playerboard(mine, ROW, COL);
	//扫雷
	findmine(mine, show, ROW, COL); 
}

void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择>:\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("\n好戏即将开始\n");
			game();
			break;
		case 0:
			printf("期待与你的再次见面\n");
			break;
		default:
			printf("没有输入正确，再来一次\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}