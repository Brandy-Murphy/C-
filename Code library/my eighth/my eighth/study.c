//#include <stdio.h>

//int main()
//{
//	int a = 10;
//	int *p= &a;//ָ�����
//	return 0;
//}

//ָ������ʾ��
//#include <stdio.h>
//
//int main()
//{
//	int a = 0x11223344;
//	int *pa = &a;
//	char *pc = &a;//��ָͬ������֮�䶼���Ի����ŵ�ַ
//	printf("%p\n", pa);
//	printf("%p\n", pc);
//
//
//	*pa = 0;//���Ϊ00000000
//	//������char����ָ����е���ʱ
//	*pc = 0;//���Ϊ00223344
//	//ָ�����;�����ָ����н����õĶ�ʱ���ܹ����ʿռ�Ĵ�С
//	//int*p  ���Է����ĸ��ֽ�
//	//char*p  ���Է���һ���ֽ�
//	//double*p ���Է��ʰ˸��ֽ�
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

//Ұָ���ԭ��
//1 �ֲ�����δ����ʼ��
//#include <stdio.h>
//int main()
//{
//	int a;
//	int *p = &a;//�ֲ���������ʼ�� Ĭ�������ֵ 
				//ָ�벻��ʼ�� Ҳ�ᱻ�����
//	*p = 20;//�ڴ������һ����ַ�ᱻ��ֵΪ20
//	return 0;
//}

////2 Խ�����
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


////ָ��Ӽ���������
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

//ָ���ָ������  ��ʵ�õ������м��Ԫ�ظ���
//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - arr);
//	return 0;
//}



////��ָ��Ӽ�������Ԫ�ظ���
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

////����ָ������ֵ������ӡ
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



////����ָ��
//#include <stdio.h>
//int main()
//{
//	int a = 0;//��Ҫ���ٿռ䣬���Ա�ȡ��ַ
//	int*p = &a;//ָ��Ҳ�Ǳ�����Ҳ���Ա�ȡ��ַ �ж�����ַ
//	int**pp = &p;
//	return 0;
//}


//����ָ��
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