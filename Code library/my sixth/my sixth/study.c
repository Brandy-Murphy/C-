//����ѭ������ð������ð�����򣺽����ڵ����������бȽϣ�
//Ȼ��С��ǰ�����ں��һ������ʽ��
#include <stdio.h>

//����Ҫ����ֵ�������ǿ�����
void bubble_sort (int arr [], int sz)
{
	int i = 0;
	//ȷ��ð�����������
	for ( i = 0; i < sz-1; i++)
	{
		int flag = 1;//���贫�����������Ѿ�����
		//ÿһ��ð������ĸ���
		int j = 0;
		for ( j = 0; j <sz-1-i ; j++)
		{
			if (arr[j]>arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
			
		}
		if (flag=0)
		{
			break;
		}
	}
}

int main()
{
	int i = 0;
	//����һ����������
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	//ʵ�δ����βκ󣬲��ܽ��д�С���㣻
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);
	for ( i = 0; i < 10; i++)
	{
		printf("%d  ", arr[i]);
	}
	return 0;
}



////����ѭ����ӡ��ά����ÿ��Ԫ��
//#include <stdio.h>
//
//int main()
//{
//	int arr[3][4] = { { 1,2,3 },{ 4,5,6 }
//	};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p \n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}



////��ά����Ĵ���
//#include <stdio.h>
//
//int main()
//{
//	int arr[3][4];//����������˼������ʡ���У�����ʡ����
//	int arr2[3][4] = { 1,2,3,4 };//��ά�����ʼ��ֵ
//	int arr3[][4] = { { 1,2,3,4},{5,6,7,8} };
//	return 0;
//}
//


////������ӡ�����еĵ�ַ��
//#include <stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int x = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for ( i = 0; i < x ; i++)
//	{
//		printf("arr[%d]=%p\n", i, &arr[i]);//��ӡ��ַҪ��%p
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


////strlen��sizeof�÷�������
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr1[] = {'a','b','c'};
//	char arr2[] = "abc";
//	printf("%d\n", sizeof(arr1));//3  �ַ�û�� ����û�б�����
//	printf("%d\n", sizeof(arr2));//4  �ַ������滹��\0,����Ҳ���������
//	printf("%d\n", strlen(arr1));//15  ����ʱ��\0�������Ҳ���\0�����Ը��������ֵ
//	printf("%d\n", strlen(arr2));//3
//	return 0;
//}
