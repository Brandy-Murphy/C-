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

//2 Խ�����
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
