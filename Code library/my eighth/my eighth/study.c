//#include <stdio.h>

//int main()
//{
//	int a = 10;
//	int *p= &a;//指针变量
//	return 0;
//}

//指针类型示范
//#include <stdio.h>
//
//int main()
//{
//	int a = 0x11223344;
//	int *pa = &a;
//	char *pc = &a;//不同指针类型之间都可以互相存放地址
//	printf("%p\n", pa);
//	printf("%p\n", pc);
//
//
//	*pa = 0;//结果为00000000
//	//但是用char类型指针进行调用时
//	*pc = 0;//结果为00223344
//	//指针类型决定了指针进行解引用的额时候，能够访问空间的大小
//	//int*p  可以访问四个字节
//	//char*p  可以访问一个字节
//	//double*p 可以访问八个字节
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int arr[] = { 0 };
//	int*p = &arr;
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		*(p + 1) = 1;
//	}
//	return 0;
//}

//野指针的原因
//1 局部变量未被初始化
//#include <stdio.h>
//int main()
//{
//	int a;
//	int *p = &a;//局部变量不初始化 默认是随机值 
				//指针不初始化 也会被随机化
//	*p = 20;//内存里随便一个地址会被赋值为20
//	return 0;
//}

////2 越界访问
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int *p = arr;
//	int i = 0;
//	for ( i = 0; i < 12; i++)
//	{
//		p++;
//	}
//	return 0;
//}


////指针加减整数运算
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int *p = arr;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d\n", *p);
//		p++;
//	}
//	return 0;
//}

//指针减指针运算  其实得到的是中间的元素个数
//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - arr);
//	return 0;
//}



////用指针加减运算求元素个数
//#include <stdio.h>
//int my_strlen(char*arr)
//{
//	char*strat = arr;
//	char*end = arr;
//	while (*end!='\0')
//	{
//		end++;
//	}
//	return end - strat;
//}
//int main()
//{
//	char arr[] = "murphy";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	float arr[5];
//	float*p;
//	for (p = &arr[5]; p > &arr[0];)
//	{
//		*--p = 0;
//	}
//	return 0;
//}

////利用指针来赋值，并打印
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int*p = arr;
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%d   ", *(p + i));
//	}
//	return 0;
//}



////二级指针
//#include <stdio.h>
//int main()
//{
//	int a = 0;//需要开辟空间，可以被取地址
//	int*p = &a;//指针也是变量，也可以被取地址 叫二级地址
//	int**pp = &p;
//	return 0;
//}


//数组指针
#include <stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int *arr[3] = { &a,&b,&c };
	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", *(arr[i]));
	}

	return 0;
}