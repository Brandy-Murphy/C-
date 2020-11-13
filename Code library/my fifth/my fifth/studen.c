///写一个嵌套调用
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