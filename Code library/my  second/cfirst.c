#include <stdio.h>
struct book 
{
	char name[20];
	short price;
};//��Ų���ȱ�٣���������������塣
int main()                                              
{    //���ýṹ�����ͣ�����һ�������͵Ľṹ�������
	struct book a1 = {"��ɱ��ʦ",23};
	struct book*pd = &a1;//�ṹ�崴��ָ������ķ�ʽ��
	printf("������:%s\n�۸���%d\n", a1.name,a1.price);
	printf("������:%s\n�۸���%d\n", (*pd).name,(*pd).price);//ָ�� �ṹ���ӡ��ʽ
	//.   �ṹ�����.��Ա
	//->  �ṹ��ָ��->��Ա
	printf("������:%s\n�۸���%d\n",pd->name,pd->price);
	return 0;
}


//int main() 
//{
//	double b = 3.2;  
//	double* pd = &b;   
//	*pd = 3.33;
//
//	return 0;
//}
//int main() 
//{
//	char o = '���';
//	char*p = o;
//	printf("%d\n", sizeof(p));
//	return 0;
//}
//int main() 
//{
//	int a = 2;
//	int* p = &a;//p��һ������--ָ���������a�ĵ�ַ�浽p��
//	*p = 28;//*--�����ò����������߽м����ʲ�������
//	printf("%d",a);
//	return 0;
//}
//Max(int x, int y) 
//{
//	if (x > y) 
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//#define MAX(x, y)(x > y ? x:y)
//int main() 
//{
//	int a = 20;
//	int b = 30;
//	int max = Max(a,b);
//	printf("�ϴ�ֵΪ%d\n",max);
//	max = MAX(a,b);
//	printf("�ϴ�ֵΪ%d\n", max);
//	return 0;
//}
// 
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("a=%d\n",a);
//
//}
//int main() 
//{
//	int x = 0;
//	while (x < 5)
//	{
//		test();
//		x++;
//	}
//}
//int main() 
//{   //typrdf-���Ͷ���-��һ���������¶������ƣ����岻�䡣
//	typedef unsigned int u_int;
//	unsigned int num = 2;
//	u_int num2 = 3;
//
//}

//int add(int a, int b) 
//{
//	int x = a + b;
//	return x;
//}
//int main() 
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = add(a,b);
//	return 0;
//}
//int main()
//{
//	int a = (int)2.1;//()ǿ�и�ֵ
//	return 0;
//}
//int main() 
//{
//	int a = 10;
//	int b = ++a;//ǰ��++����ʹ�ã���++��
//	printf("a=%d,b=%d\n",a,b);//a=11��b=10.
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int arr[] = {1, 2, 3, 4, 5, 6};
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}
//Max(int x,int y)
//{
//	if (x < y)
//	return x;
//
//	else
//		return y;
//
//}
//int main() 
//{
//
//	int num1 = 2;
//	int num2 = 3;
//	int c = 0;
//	c = Max(num1,num2);
//	printf("�ϴ�ֵΪ%d\n", c);
//	return 0;
	/*int num1 = 2;
	int num2 = 3;
	if (num1 < num2)
		printf("�ϴ�ֵ��%d", num1);
	else
		printf("�ϴ�ֵ��%d", num2);
	return 0;*/
//}


