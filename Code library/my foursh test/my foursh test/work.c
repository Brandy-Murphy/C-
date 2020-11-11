//不使用goto语句来写关机程序
//用goto写一个关机程序
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char input[20] = { 0 };
	//用命令关机 shotdown -s设置关机-t 设置时间 60秒
	system("shutdown -s -t 60");//system用来执行系统命令
	while (1)
	{
		printf("请注意，你的电脑一分钟内将关机，输入：我是猪，就取消关机\n请输入>:");
		scanf("%s", &input);
		if (strcmp(input, "我是猪") == 0)//判断是否输入我是猪   字符串判断用strcmp
		{
			system("shutdown -a");
			break;
		}
		else
		{
			printf("不太对，再来一次\n");
		}
	}
	return 0;
}




////用goto写一个关机程序
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//	char input[20] = { 0 };
//	//用命令关机 shotdown -s设置关机-t 设置时间 60秒
//	system("shutdown -s -t 60");//system用来执行系统命令
//	printf("请注意，你的电脑一分钟内将关机，输入：我是猪，就取消关机\n请输入>:");
//	scanf("%s", &input);
//	here:
//	if (strcmp(input,"我是猪")==0)//判断是否输入我是猪   字符串判断用strcmp
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		printf("不太对，再来一次\n");
//		goto here;
//	}
//	return 0;
//}




////goto语句的应用；
//#include <stdio.h>
//
//int main()
//{
//	here:
//	printf("hello wrold\n");
//	goto here;
//	return 0;
//}

////猜数字，随机生成一个数字，用户去猜，系统告诉猜大猜小
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
//{//1~生成一个随机数 rand-随机生成1~32767的数字，时间戳
//	int ret;
//	//用时间戳来设置随机数的生成起点
//	int guess;//接受你猜的数字
//	ret = rand()%100+1;//生成1~100之间的数
//	//printf("%d\n", ret);
// //2~猜数字
//	while (1)
//	{
//		printf("请猜数字\n");
//		scanf("%d", &guess);
//		if (guess>ret)
//		{
//			printf("大了\n");
//		}
//		else if(guess<ret)
//		{
//			printf("小了\n");
//		}
//		else
//		{
//			printf("运气不错哦，猜对了\n");
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
//		printf("请选择>:\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("拜拜\n");
//			break;
//		default:
//			printf("打错了，再来\n");
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






////打印乘法口诀1~9
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for ( i = 1; i <= 9; i++)
//	{
//		int j;
//		for (j=1;j<=i;j++)
//		{
//			printf("%d*%d=%-2d  ", i, j, i*j);//-2d打印两位数，不足用空格补齐
//		}
//		printf("\n");
//	}
//	return 0;
//}



////求十个数里的最大值
//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i;
//	int max = arr[0];//如果赋值为0，则不能计算负数；
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



////计算1/1-2/1+3/1-1/4....1/100的和
//#include <stdio.h>
//
//int main()
//{
//	int i;
//	double sum=0;
//	int test1 = 1;
//	for ( i = 1; i <= 100 ; i++)
//	{
//		sum += test1*1.0 / i;//只有左右其中一个为浮点型，才能有浮点结果
//		test1 = -test1;
//	}
//	printf("%fl\n", sum);
//	return 0;
//}



////找1~100有多少个数字9
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


////找到100~200之间的素数,并计算有多少个素数
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
//	printf("一共有%d\n", count);
//	return 0;
//}



////找到1000到2000之间的闰年
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




////求两个数之间的最大公约数--辗转相除法
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

////打印1~100之间3的倍数
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



////输入三个数，然后从大到小输出
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