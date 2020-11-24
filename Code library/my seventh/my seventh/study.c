#include <stdio.h>

////除法与取模
//int main()
//{
//	int a = 5 % 2;//商2余1 取模运算两边必须是整数
//	printf(" a = %d\n", a);
//	return 0;
//}

//移位操作符
//int main()
//{
//	int a = 16;
//	//右移>> -- 右移操作符
//	//移动的是二进制 右边丢弃，左边补原符号位。
//	return 0;
//}

//不设置临时变量，交换两个值
//int main()
//{
//	int a = 4;
//	int b = 5;
//	printf("%d  %d\n", a, b);
//	//a = a + b;//加法可能溢出
//	//b = a - b;
//	//a = a - b;
//	//printf("%d  %d\n", a, b);
//
//	//异或的方法
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("%d  %d\n", a, b);
//	return 0;
//}

//求一个整数在内存的二进制的中1的个数
//int main()
//{
//	int num = 0;
//	int count = 0;
//	int i = 0;
//	scanf("%d", &num);
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//		{
//			count++;
//		}
//	}
//	printf("count=%d\n", count);
//	return 0;
//}


//单目操作符示范
//！反逻辑操作符
//int main()
//{
//	int a = 10;//非零为真
//	printf("%d\n", !a);//a变成了0；
//	return 0;
//}
int main()
{
	int a = -4;
	printf("%d", -a);
	return 0;
}