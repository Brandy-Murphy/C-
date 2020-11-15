//利用迭代 来求出第n个斐波拉契数
#include <stdio.h>

int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = fib(n);
	printf ("%d\n", ret);
	return 0;
}



////设计递归函数，求斐波拉锲数
//#include <stdio.h>
//int Fbi(int n) 
//{
//	if(n<=2)
//		return 1;
//	else 
//		return Fbi(n - 1) + Fbi(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	//TDD式设计思路--测试驱动开发    先描述怎么用，在去实现函数
//	ret = Fbi(n);
//	printf("%d\n", ret);
//	return 0;
//}


////用递归方法求阶乘
//#include <stdio.h>
//
//int fac(int n)
//{
//	if (n<=1)//如果n小于等于1，就返回1，否则结果就是0；
//	{
//		return 1;
//	}
//	else
//	{
//		return n*fac(n - 1);//n*(n-1)*(n-2)...*1
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int t = 0;
//	scanf("%d", &n);
//	t = fac(n);
//	printf("%d\n", t);
//	return 0;
//}



////设计一个函数，利用递归方法来求字符串的长度
//#include <stdio.h>
////把大事化小
////len("hello")
////1+len("ello")
////1+1+len("llo")
////1+1+1+len("lo")
////1+1+1+1+len("o")
////1+1+1+1+1+len("")
//int len(char*str)
//{
//	if (*str != '\0')
//		return(1 + len(str + 1));
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "hello";
//	int x = len(arr);
//	printf("%d\n", x);
//	return 0;
//}



////设计一个函数，来求字符串的长度
//#include <stdio.h>
//
//int len(char*str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "hello";
//	int x = len(arr);
//	printf("%d\n", x);
//	return 0;
//}
//




////输入1234，利用递归 分别打印出1 2 3 4.
//#include <stdio.h>
//
////只需要打印 所以不用返回值
//void print(int n)
//{ 
//	//判断是否大于个位数，然后进行取模运算。
//	if(n>9)
//	{
//		print(n / 10);//如果大于十，就进行先除十，再递归
//	}
//	printf("%d  ", n % 10);
//}
//
////设计思路：1234与10取模结果为4，而123与10取模结果为3，以此类推。
////先除10，一直除到个位，然后在取模。套进递归调用里就OK了
////print(1234)
////print(123) 4
////print(12) 3 4
////print(1) 2 3 4
//
//int main()
//{
//	unsigned int num = 0;//只能是正数才能做此运算
//	//  获取屏幕数字
//	scanf("%d", &num);
//	//设计一个函数，用于打印
//	print(num);
//	return 0;
//}



////递归调用示范
//#include <stdio.h>
//
//int main()
//{
//	printf("hello  ");
//	//main调用自己,会导致栈溢出
//	main();
//	return 0;
//}
//




////写一个嵌套调用
//#include <stdio.h>
//
//void one()
//{
//	printf("hello\n");
//}
//
//void two()
//{
//	int i = 0;
//	for ( i = 0; i < 3; i++)
//	{
//		one();
//	}
//
//}
//
//int main()
//{
//	two();
//	return 0;
//}


////设计一个函数，每调用一次这个函数，num就增加1
//#include <stdio.h>
//void addi(int*num)
//{
//	*num = *num + 1;
//
//}
//
//int main()
//{
//	int num = 0;
//	addi(&num);
//	printf("num=%d\n", num);//1
//	addi(&num);
//	printf("num=%d\n", num);//2
//	addi(&num);
//	printf("num=%d\n", num);//3
//	return 0;
//}




////设计一个函数，实现二分查找法,查一组数，找到下标位置
//#include <stdio.h>
////                 本质上arr是指针
//int binary_search(int arr[],int k,int sz)
//{
//	int left = 0;
//	int right =sz ;
//	while (left<=right)
//	{
//		int mid = (right + left) / 2;//算出中间元素
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
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13 };
//	int k = 7;
//	int x = 0;
//	int sz = (sizeof(arr) / sizeof(arr[0]))-1;
//		//            这时，传过去的是数组arr的首元素的地址
//	x = binary_search(arr, k, sz);
//	//返回值是-1，就代表找不到。找到就返回下标值
//	if (x!=-1)
//	{
//		printf("%d  \n", x);
//	}
//	else if(x==-1)
//	{
//		printf("找不要到下标位置\n");
//	}
//	return 0;
//}


////设计函数，打印1000到2000之间的闰年
//#include <stdio.h>
//
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断函数是否为闰年
//		if (1 == is_leap_year(year))
//		{
//			printf("%d  ", year);
//		}
//	}
//	return 0;
//}




////设计一个函数，判断100到200之间的素数。
//#include <stdio.h>
//
//int is_perme(int x)
//{
//	int y = 0;
//	for ( y = 2; y < x; y++)
//	{
//		if(x % y == 0)
//		{
//			return 0;//return能力比break强，函数就不再执行；等于零说明不是素数，没有再找的必要。
//		}
//
//	}
//	if (x == y)
//		return 1;
//}
//
//int main()
//{
//	int i = 0;
//	//打印100`200之间的数字
//	for ( i =100 ; i <= 200; i++)
//	{
//		if (is_perme(i) == 1)
//		{
//			printf("%d  ", i);
//		}
//	}
//	return 0;
//}




////设计一个自定义函数，用于交换变量的值
//#include <stdio.h>
//
//void swap(int*pa, int*pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	int a=0;
//	int b=0;
//	swap(&a, &b);
//	printf("他们现在是a=%d，b=%d", a, b);
//	return 0;
//}


////自定义一个可以比较较大值的函数
//#include <stdio.h>
//
//int get_max(int x,int y)
//{
//	if (x<y)
//	{
//		return y;
//	}
//	else if(x > y)
//	{
//		return x;
//	}
//
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入两个数\n");
//	scanf("%d%d", &a, &b);
//	int sum = get_max(a,b);
//	printf("较大值是%d\n", sum);
//	return 0;
//}




//strcpy的使用
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr[] = "hello";
//	char arr2[6] = "你好";
//	strcpy(arr2, arr);
//	printf("%s\n", arr2);
//	return 0;
//}




////函数 小试函数
//#include <stdio.h>
//int add(int x, int y)
//{
//	int z ;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//	printf("sum=%d", sum);
//	return 0;
//