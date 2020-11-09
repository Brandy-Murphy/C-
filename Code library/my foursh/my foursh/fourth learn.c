//模拟用户登录场景。且只能输入三次密码。
#include <stdio.h>

int main()
{
	int i = 0;
	char passworld[20] = {0};
	for ( i = 0; i < 3; i++)
	{
		printf("请输入密码\n");
		scanf("%s",passworld);
		if (strcmp(passworld,"123456")==0)//==不能原来判断字符串是否相等，判断字符串要用函数strcmp
		{
			printf("登录成功\n");
			break;
		}
	}
	if (i==3)
	{
		printf("三次密码错误\n");
	}
	return 0;
}


//折半查找法，优化后的算法；
//#include <stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
//	int k = 6;
//	while (left<=right)
//	{
//		int mid = (right + left) / 2;
//
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是%d\n", mid);
//			break;
//		}
//	}
//	if(left>right)
//	{
//		printf("招不到\n");
//
//	}
//	return 0;
//}

////找数字，数字在数组中的位置；
//#include <stdio.h>
//
//int main()
//{
//	int k = 7;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for ( i = 0; i < sz; i++)
//	{
//		if (arr[i]==k)
//		{
//			printf("任哲立没妈\n下表位在%d\n",i);
//			break;
//		}
//
//	}
//	if (i == sz - 1)
//		printf("任哲立没爸");
//	return 0;
//}


//（2优化后的计算1的阶乘+2的阶乘+3的阶乘....+到10的阶乘
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//			//要把ret的值初始化为1，否则就会不断累.
//			ret = ret * n;
//			sum = sum + ret;
//	}
//
//	printf("阶乘是%d\n", sum);
//	return 0;
//}


////计算1的阶乘+2的阶乘+3的阶乘....+到10的阶乘
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for ( n = 1; n <= 10; n++)
//	{
//		ret = 1;//要把ret的值初始化为1，否则就会不断累计。
//		for (i = 1; i < n + 1; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	
//	printf("阶乘是%d\n", sum);
//	return 0;
//}


//计算n的阶乘
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int red =1;
//	scanf("%d", &n);
//
//	for ( i = 1; i <= n; i++)
//	{
//		red = i*red;
//	}
//	printf("%d\n", red);
//	return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//	int a=1;
//	do
//	{
//		printf("%d\n", a);
//		a++;
//	} 
//	while (a<10);
//}

//#include <stdio.h>
//int main()
//{
//	for (int i=0;i<10;i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			printf("haha\n");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
////for循环的初始化 判断 循环都可以省略 如果判断部分被省略，结果恒为真
//int main()
//{
//	for(;;)
//	{
//		printf("hello");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{         //初始化  判断    调整
//	for (int i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d\n", i);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{         //初始化  判断    调整
//	for (int i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int ret;
//	char passwrold[20];
//	printf("请输入您的密码:>");
//	scanf("%s",passwrold);
//	while(getchar()!='\n')
//	{
//	
//	}
//	printf("您确定吗？Y/N:>");
//	ret=getchar();
//	if (ret=='Y')
//	{
//		printf("确认成功");
//	}
//	else
//	{
//		printf("确认失败");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int ch;
//	while ((ch=getchar())!=EOF)
//		putchar(ch);
//	return 0;
//}