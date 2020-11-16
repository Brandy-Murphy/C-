//利用循环打印二维数组每个元素
#include <stdio.h>

int main()
{
	int arr[3][4] = {{ 1,2,3 }, { 4,5,6 }
};
	int i = 0;
	for ( i = 0; i < 3; i++)
	{
		int j = 0;
			for ( j = 0; j < 4; j++)
			{
				printf("&arr[%d][%d]=%p \n",i,j, &arr[i][j]);
			}
	}
	return 0;
}



////二维数组的创建
//#include <stdio.h>
//
//int main()
//{
//	int arr[3][4];//三行四列意思，可以省略行，不能省略列
//	int arr2[3][4] = { 1,2,3,4 };//二维数组初始化值
//	int arr3[][4] = { { 1,2,3,4},{5,6,7,8} };
//	return 0;
//}
//


////连续打印数组中的地址；
//#include <stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int x = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for ( i = 0; i < x ; i++)
//	{
//		printf("arr[%d]=%p\n", i, &arr[i]);//打印地址要用%p
//	}
//	return 0;
//}





//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr1[] = "abcdef";
//	int i = 0;
//	for ( i = 0; i <(int)strlen(arr1); i++)
//	{
//		printf("%c", arr1[i]);
//	}
//	printf("\n");
//	return 0;
//}


////strlen与sizeof用法的区别；
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr1[] = {'a','b','c'};
//	char arr2[] = "abc";
//	printf("%d\n", sizeof(arr1));//3  字符没有 所以没有被计算
//	printf("%d\n", sizeof(arr2));//4  字符串后面还有\0,所以也被计算进来
//	printf("%d\n", strlen(arr1));//15  计算时以\0结束，找不到\0，所以给出了随机值
//	printf("%d\n", strlen(arr2));//3
//	return 0;
//}
