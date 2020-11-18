#include "game.h"

void menu()
{
	printf("************************\n");
	printf("****1.play    0.exit****\n");
	printf("************************\n");
}

//游戏算法的实现
void game()
{
	//数组--存放棋盘的走出信息，因为棋盘打印#和*，所以用char来存放
	char board[ROW][COL] = { 0 };//全部空格
	//初始化棋盘 视觉效果，把数组的内容换成空 格
	initboard(board, ROW, COL);
	//打印棋盘
	displayboard(board, ROW, COL);

}

void test()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("好戏将要开始\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重来\n");
			break;
		}
	} while (input);

}

int main()
{
	test();
	return 0;
}