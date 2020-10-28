#include <stdio.h>
struct book 
{
	char name[20];
	short price;
};//封号不可缺少！用来结束这个定义。
int main()                                              
{    //利用结构体类型，创建一个该类型的结构体变量。
	struct book a1 = {"暗杀大师",23};
	struct book*pd = &a1;//结构体创建指针变量的方式。
	printf("书名是:%s\n价格是%d\n", a1.name,a1.price);
	printf("书名是:%s\n价格是%d\n", (*pd).name,(*pd).price);//指针 结构体打印方式
	//.   结构体变量.成员
	//->  结构体指针->成员
	printf("书名是:%s\n价格是%d\n",pd->name,pd->price);
	return 0;
}


//int main() 
//{
//	double b = 3.2;  
//	double* pd = &b;   
//	*pd = 3.33;
//
//	return 0;
//}
//int main() 
//{
//	char o = '你好';
//	char*p = o;
//	printf("%d\n", sizeof(p));
//	return 0;
//}
//int main() 
//{
//	int a = 2;
//	int* p = &a;//p是一个变量--指针变量。将a的地址存到p。
//	*p = 28;//*--解引用操作符，或者叫简介访问操作符。
//	printf("%d",a);
//	return 0;
//}
//Max(int x, int y) 
//{
//	if (x > y) 
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//#define MAX(x, y)(x > y ? x:y)
//int main() 
//{
//	int a = 20;
//	int b = 30;
//	int max = Max(a,b);
//	printf("较大值为%d\n",max);
//	max = MAX(a,b);
//	printf("较大值为%d\n", max);
//	return 0;
//}
// 
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("a=%d\n",a);
//
//}
//int main() 
//{
//	int x = 0;
//	while (x < 5)
//	{
//		test();
//		x++;
//	}
//}
//int main() 
//{   //typrdf-类型定义-给一个类型重新定义名称，意义不变。
//	typedef unsigned int u_int;
//	unsigned int num = 2;
//	u_int num2 = 3;
//
//}

//int add(int a, int b) 
//{
//	int x = a + b;
//	return x;
//}
//int main() 
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = add(a,b);
//	return 0;
//}
//int main()
//{
//	int a = (int)2.1;//()强行赋值
//	return 0;
//}
//int main() 
//{
//	int a = 10;
//	int b = ++a;//前置++，先使用，在++。
//	printf("a=%d,b=%d\n",a,b);//a=11，b=10.
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int arr[] = {1, 2, 3, 4, 5, 6};
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}
//Max(int x,int y)
//{
//	if (x < y)
//	return x;
//
//	else
//		return y;
//
//}
//int main() 
//{
//
//	int num1 = 2;
//	int num2 = 3;
//	int c = 0;
//	c = Max(num1,num2);
//	printf("较大值为%d\n", c);
//	return 0;
	/*int num1 = 2;
	int num2 = 3;
	if (num1 < num2)
		printf("较大值是%d", num1);
	else
		printf("较大值是%d", num2);
	return 0;*/
//}


