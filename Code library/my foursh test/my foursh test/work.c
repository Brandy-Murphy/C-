//��ʹ��goto�����д�ػ�����
//��gotoдһ���ػ�����
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char input[20] = { 0 };
	//������ػ� shotdown -s���ùػ�-t ����ʱ�� 60��
	system("shutdown -s -t 60");//system����ִ��ϵͳ����
	while (1)
	{
		printf("��ע�⣬��ĵ���һ�����ڽ��ػ������룺��������ȡ���ػ�\n������>:");
		scanf("%s", &input);
		if (strcmp(input, "������") == 0)//�ж��Ƿ�����������   �ַ����ж���strcmp
		{
			system("shutdown -a");
			break;
		}
		else
		{
			printf("��̫�ԣ�����һ��\n");
		}
	}
	return 0;
}




////��gotoдһ���ػ�����
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//	char input[20] = { 0 };
//	//������ػ� shotdown -s���ùػ�-t ����ʱ�� 60��
//	system("shutdown -s -t 60");//system����ִ��ϵͳ����
//	printf("��ע�⣬��ĵ���һ�����ڽ��ػ������룺��������ȡ���ػ�\n������>:");
//	scanf("%s", &input);
//	here:
//	if (strcmp(input,"������")==0)//�ж��Ƿ�����������   �ַ����ж���strcmp
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		printf("��̫�ԣ�����һ��\n");
//		goto here;
//	}
//	return 0;
//}




////goto����Ӧ�ã�
//#include <stdio.h>
//
//int main()
//{
//	here:
//	printf("hello wrold\n");
//	goto here;
//	return 0;
//}

////�����֣��������һ�����֣��û�ȥ�£�ϵͳ���߲´��С
//#include <stdio.h>
//
//
//
//void ment()
//{
//	printf("*************************\n");
//	printf("*****1.play  2.exit******\n");
//	printf("*************************\n");
//}
//
//void game()
//{//1~����һ������� rand-�������1~32767�����֣�ʱ���
//	int ret;
//	//��ʱ�����������������������
//	int guess;//������µ�����
//	ret = rand()%100+1;//����1~100֮�����
//	//printf("%d\n", ret);
// //2~������
//	while (1)
//	{
//		printf("�������\n");
//		scanf("%d", &guess);
//		if (guess>ret)
//		{
//			printf("����\n");
//		}
//		else if(guess<ret)
//		{
//			printf("С��\n");
//		}
//		else
//		{
//			printf("��������Ŷ���¶���\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		ment();
//		printf("��ѡ��>:\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�ݰ�\n");
//			break;
//		default:
//			printf("����ˣ�����\n");
//			break;
//
//
//
//			
//		}
//	} while (input);
//
//
//}






////��ӡ�˷��ھ�1~9
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for ( i = 1; i <= 9; i++)
//	{
//		int j;
//		for (j=1;j<=i;j++)
//		{
//			printf("%d*%d=%-2d  ", i, j, i*j);//-2d��ӡ��λ���������ÿո���
//		}
//		printf("\n");
//	}
//	return 0;
//}



////��ʮ����������ֵ
//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i;
//	int max = arr[0];//�����ֵΪ0�����ܼ��㸺����
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for ( i  = 0; i  < sz; i ++)
//	{
//		if (max < arr[i])
//			max = arr[i];
//	}
//	printf("%d\n", max);
//
//	return 0;
//}



////����1/1-2/1+3/1-1/4....1/100�ĺ�
//#include <stdio.h>
//
//int main()
//{
//	int i;
//	double sum=0;
//	int test1 = 1;
//	for ( i = 1; i <= 100 ; i++)
//	{
//		sum += test1*1.0 / i;//ֻ����������һ��Ϊ�����ͣ������и�����
//		test1 = -test1;
//	}
//	printf("%fl\n", sum);
//	return 0;
//}



////��1~100�ж��ٸ�����9
//#include <stdio.h>
//
//int main()
//{
//	int i= 0;
//	int count= 0;
//	for ( i = 1; i <= 100; i++)
//	{
//		if (i%10 == 9)
//			count++;
//		if (i/10 == 9)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}


////�ҵ�100~200֮�������,�������ж��ٸ�����
//#include <stdio.h>
//
//int main()
//{
//	int i;
//	int count=0;
//	for ( i = 100; i <= 200; i++)
//	{
//		int j;
//		for ( j = 2; j < i; j++)
//		{
//			if (i%j==0)
//			{
//				break;
//			}
//		}
//		if (j==i)
//		{
//			count++;
//			printf("%d  ", i );
//		}
//		
//	}
//	printf("һ����%d\n", count);
//	return 0;
//}



////�ҵ�1000��2000֮�������
//#include <stdio.h>
//int main()
//{
//	int year;
//	for ( year = 1000; year <= 2000; year++)
//	{
//		if (0 == year % 4 && year%100 !=0 )
//		{
//			printf("%d  ", year);
//		}
//		else if(year%400==0)
//		{
//			printf("%d  ", year);
//		}
//	}
//	return 0;
//}




////��������֮������Լ��--շת�����
//#include <stdio.h>
//
//int main()
//{
//	int n;
//	int m;
//	int r;
//	scanf("%d%d", &n, &m);
//	while (n%m)
//	{
//		r = n%m;
//		n = m;
//		m = r;
//		
//	}
//	printf("%d\n", m);
//	return 0;
//}
//
//

////��ӡ1~100֮��3�ı���
//#include <stdio.h>
//
//int main()
//{
//	int i;
//	for ( i = 1; i <= 100; i++)
//	{
//		if (i%3==0)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}



////������������Ȼ��Ӵ�С���
//#include <stdio.h>
//
//int main()
//{
//	int a;
//	int b;
//	int c;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a<b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if(b<c)
//	{ 
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	if (a<c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}