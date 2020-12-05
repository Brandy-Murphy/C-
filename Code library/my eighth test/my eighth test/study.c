////倒置数组里的元素
//#include <stdio.h>
//
//void reveres(int arr[],int sz)
//{
//	int left=0 ;
//	int right = sz - 1;
//	int temp = 0;
//
//	while (right>left)
//	{
//		temp = arr[right];
//		arr[right] = arr[left];
//		arr[left] = temp;
//		left++;
//		right--;
//	}
//
//
//}
//
//void Printf(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//	printf("\n");
//
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Printf(arr, sz);
//	reveres(arr, sz);
//	Printf(arr, sz);
//	return 0;
//}


////交换a数组与b数组里面的元素
//#include <stdio.h>
//int main()
//{
//	int arr1[5] = { 1,3,5,7,9 }; 
//	int arr2[5] = { 2,4,6,8,10 };
//	int tmp = 0;//利用临时将数组里的内容挨个进行交换
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for ( i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int a = (i++) + (++i) + (i++);
//	printf("%d\n", a);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	short* p = (short*)arr;
//	int i = 0;
//	for ( i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//	for (  i = 0; i < 5; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	char*pa = (char*)&a;
//	*pa = 0;
//	printf("%x  \n", a);
//	return 0;
//}

////一个数二进制中有多少个1
//#include <stdio.h>
//int count_1(unsigned int a)
//{
//	int i = 0;
//	while(a)
//	{
//		if(a % 2 == 1)
//		i++; 
//		a = a / 2;
//	}
//	return i;
//}
//
//int main()
//{
//	int a = 0;
//	int count = 0;
//	scanf("%d", &a);
//	count = count_1(a);
//	printf("%d\n", count);
//	return 0;
//}


////方法二
//#include <stdio.h>
//int count_1(int a)
//{
//	int count = 0;
//	int i = 0;
//	for ( i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1 == 1))
//			count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	int count = 0;
//	scanf("%d", &a);
//	count = count_1(a);
//	printf("%d\n", count);
//	return 0;
//}

////方法三
//#include <stdio.h>
//int count_1(int a)
//{
//	int count = 0;
//	while (a)
//	{
//		a = a&(a - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	int count = 0;
//	scanf("%d", &a);
//	count = count_1(a);
//	printf("%d\n", count);
//	return 0;
//}

////计算两个数的二进制有多少个不同的数字
//#include <stdio.h>
//int diff(int a, int b)
//{
//	int tmp = 0;
//	int count = 0;
//	tmp = a^b;
//	while (tmp)
//	{
//		tmp = tmp&(tmp - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int count = diff(a, b);
//	printf("count = %d;\n", count);
//	return 0;
//}