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

//2 越界访问
#include <stdio.h>
int main()
{
	int arr[10] = { 0 };
	int *p = arr;
	int i = 0;
	for ( i = 0; i < 12; i++)
	{
		p++;
	}
	return 0;
}
