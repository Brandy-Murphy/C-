//���һ���������ж�100��200֮���������
#include <stdio.h>

int is_perme(int x)
{
	int y = 0;
	for ( y = 2; y < x; y++)
	{
		if(x % y == 0)
		{
			return 0;//return������breakǿ�������Ͳ���ִ�У�������˵������������û�����ҵı�Ҫ��
		}

	}
	if (x == y)
		return 1;
}

int main()
{
	int i = 0;
	//��ӡ100`200֮�������
	for ( i =100 ; i <= 200; i++)
	{
		if (is_perme(i) == 1)
		{
			printf("%d  ", i);
		}
	}
	return 0;
}




////���һ���Զ��庯�������ڽ���������ֵ
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
//	printf("����������a=%d��b=%d", a, b);
//	return 0;
//}


////�Զ���һ�����ԱȽϽϴ�ֵ�ĺ���
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
//	printf("������������\n");
//	scanf("%d%d", &a, &b);
//	int sum = get_max(a,b);
//	printf("�ϴ�ֵ��%d\n", sum);
//	return 0;
//}




//strcpy��ʹ��
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr[] = "hello";
//	char arr2[6] = "���";
//	strcpy(arr2, arr);
//	printf("%s\n", arr2);
//	return 0;
//}




////���� С�Ժ���
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