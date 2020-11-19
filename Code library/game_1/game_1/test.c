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
	char ret = 0;
	//数组--存放棋盘的走出信息，因为棋盘打印#和*，所以用char来存放
	char board[ROW][COL] = { 0 };//全部空格
	//初始化棋盘 视觉效果，把数组的内容换成空 格
	initboard(board, ROW, COL);
	//打印棋盘
	displayboard(board, ROW, COL);
	//下棋
	while (1)
	{
		//玩家下棋
		playermove(board, ROW, COL);
		displayboard(board, ROW, COL);
		//判断玩家赢
		ret = iswin(board,ROW,COL);
		if (ret!='C')
		{
			break;
		}
		//电脑下棋
		computermove(board, ROW, COL);
		displayboard(board, ROW, COL);
		//判断电脑赢
		ret = iswin(board, ROW, COL);
		if (ret!='C')
		{
			break;
		}
	}
	if (ret=='*')
	{
		printf("玩家赢了\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢了\n");
	}
	else
		printf("平局\n");

}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
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