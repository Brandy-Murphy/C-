//����ѭ����ӡ��ά����ÿ��Ԫ��
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
