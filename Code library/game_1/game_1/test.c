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
	//����--������̵��߳���Ϣ����Ϊ���̴�ӡ#��*��������char�����
	char board[ROW][COL] = { 0 };//ȫ���ո�
	//��ʼ������ �Ӿ�Ч��������������ݻ��ɿ� ��
	initboard(board, ROW, COL);
	//��ӡ����
	displayboard(board, ROW, COL);

}

void test()
{
	int input = 0;
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