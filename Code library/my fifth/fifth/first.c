//设计一个函数，判断100到200之间的素数。
#include <stdio.h>

int is_perme(int x)
{
	int y = 0;
	for ( y = 2; y < x; y++)
	{
		if(x % y == 0)
		{
			return 0;//return能力比break强，函数就不再执行；等于零说明不是素数，没有再找的必要。
		}

	}
	if (x == y)
		return 1;
}

int main()
{
	int i = 0;
	//打印100`200之间的数字
	for ( i =100 ; i <= 200; i++)
	{
		if (is_perme(i) == 1)
		{
			printf("%d  ", i);
		}
	}
	return 0;
}




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
//}