#include "game.h"

void menu()
{
	printf("************************\n");
	printf("****1.play    0.exit****\n");
	printf("************************\n");
}

//��Ϸ�㷨��ʵ��
void game()
{
	char ret = 0;
	//����--������̵��߳���Ϣ����Ϊ���̴�ӡ#��*��������char�����
	char board[ROW][COL] = { 0 };//ȫ���ո�
	//��ʼ������ �Ӿ�Ч��������������ݻ��ɿ� ��
	initboard(board, ROW, COL);
	//��ӡ����
	displayboard(board, ROW, COL);
	//����
	while (1)
	{
		//�������
		playermove(board, ROW, COL);
		displayboard(board, ROW, COL);
		//�ж����Ӯ
		ret = iswin(board,ROW,COL);
		if (ret!='C')
		{
			break;
		}
		//��������
		computermove(board, ROW, COL);
		displayboard(board, ROW, COL);
		//�жϵ���Ӯ
		ret = iswin(board, ROW, COL);
		if (ret!='C')
		{
			break;
		}
	}
	if (ret=='*')
	{
		printf("���Ӯ��\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ��\n");
	}
	else
		printf("ƽ��\n");

}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��Ϸ��Ҫ��ʼ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������������\n");
			break;
		}
	} while (input);

}

int main()
{
	test();
	return 0;
}