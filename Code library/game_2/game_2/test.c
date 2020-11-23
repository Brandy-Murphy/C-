#include "game.h"

void menu()
{
	printf("**********************************\n");
	printf("***** 1.play           0.exit*****\n");
	printf("**********************************\n");
}

void game()
{
	//��������
	//���ú��׵�����
	char mine[ROWS][COLS] = { 0 };//11+11
	//�Ų���׵���Ϣ
	char show[ROWS][COLS] = { 0 };//11+11
	//��ʼ������
	initboard(mine, ROWS, COLS,'0');
	initboard(show, ROWS, COLS, '*');
	//��ӡ����
	/*playerboard(mine, ROW, COL);*/
	playerboard(show, ROW, COL);
	printf("\n");
	//������
	setmine(mine, ROW, COL);
	playerboard(mine, ROW, COL);
	//ɨ��
	findmine(mine, show, ROW, COL); 
}

void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>:\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("\n��Ϸ������ʼ\n");
			game();
			break;
		case 0:
			printf("�ڴ�������ٴμ���\n");
			break;
		default:
			printf("û��������ȷ������һ��\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}