///дһ��Ƕ�׵���
//#include <stdio.h>
//
//void one()
//{
//	printf("hello\n");
//}
//
//void two()
//{
//	int i = 0;
//	for ( i = 0; i < 3; i++)
//	{
//		one();
//	}
//
//}
//
//int main()
//{
//	two();
//	return 0;
//}


////���һ��������ÿ����һ�����������num������1
//#include <stdio.h>
//void addi(int*num)
//{
//	*num = *num + 1;
//
//}
//
//int main()
//{
//	int num = 0;
//	addi(&num);
//	printf("num=%d\n", num);//1
//	addi(&num);
//	printf("num=%d\n", num);//2
//	addi(&num);
//	printf("num=%d\n", num);//3
//	return 0;
//}




////���һ��������ʵ�ֶ��ֲ��ҷ�,��һ�������ҵ��±�λ��
//#include <stdio.h>
////                 ������arr��ָ��
//int binary_search(int arr[],int k,int sz)
//{
//	int left = 0;
//	int right =sz ;
//	while (left<=right)
//	{
//		int mid = (right + left) / 2;//����м�Ԫ��
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13 };
//	int k = 7;
//	int x = 0;
//	int sz = (sizeof(arr) / sizeof(arr[0]))-1;
//		//            ��ʱ������ȥ��������arr����Ԫ�صĵ�ַ
//	x = binary_search(arr, k, sz);
//	//����ֵ��-1���ʹ����Ҳ������ҵ��ͷ����±�ֵ
//	if (x!=-1)
//	{
//		printf("%d  \n", x);
//	}
//	else if(x==-1)
//	{
//		printf("�Ҳ�Ҫ���±�λ��\n");
//	}
//	return 0;
//}


////��ƺ�������ӡ1000��2000֮�������
//#include <stdio.h>
//
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�жϺ����Ƿ�Ϊ����
//		if (1 == is_leap_year(year))
//		{
//			printf("%d  ", year);
//		}
//	}
//	return 0;
//}




////���һ���������ж�100��200֮���������
//#include <stdio.h>
//
//int is_perme(int x)
//{
//	int y = 0;
//	for ( y = 2; y < x; y++)
//	{
//		if(x % y == 0)
//		{
//			return 0;//return������breakǿ�������Ͳ���ִ�У�������˵������������û�����ҵı�Ҫ��
//		}
//
//	}
//	if (x == y)
//		return 1;
//}
//
//int main()
//{
//	int i = 0;
//	//��ӡ100`200֮�������
//	for ( i =100 ; i <= 200; i++)
//	{
//		if (is_perme(i) == 1)
//		{
//			printf("%d  ", i);
//		}
//	}
//	return 0;
//}




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
//