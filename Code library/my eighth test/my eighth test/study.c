////�����������Ԫ��
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


////����a������b���������Ԫ��
//#include <stdio.h>
//int main()
//{
//	int arr1[5] = { 1,3,5,7,9 }; 
//	int arr2[5] = { 2,4,6,8,10 };
//	int tmp = 0;//������ʱ������������ݰ������н���
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

////һ�������������ж��ٸ�1
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


////������
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

////������
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

////�����������Ķ������ж��ٸ���ͬ������
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


//��ȡһ�����Ķ���������λ��ż��λ
//#include <stdio.h>
//void print(int m)
//{
//	int i = 0;
//	printf("��ӡ��Ϊ����λ");
//	for  (i = 30; i >=0; i-=2)
//	{
//		printf("%d  ", ((m >> i) & 1));
//	}
//	printf("\n");
//	printf("��ӡ��Ϊż��λ");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d  ", ((m >> i) & 1));
//	}
//	printf("\n");
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}


////����ָ���ӡ����
//#include <stdio.h>
//void print(int *arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d  ", *(arr + i));
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr,sz);
//	return 0;
//}


////��ӡ�˷��ھ���
//#include <stdio.h>
//void table(int n)
//{
//	int i = 0;
//	int j = 0;
//	for ( i =1 ; i < n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %-3d   ", i, j, i*j);
//		}
//		printf("\n");
//	}
//
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	table(i);
//	return 0;
//}



//��һ���ַ��������ݵ��� abcdef=fedcba
//#include <stdio.h>
//#include <string.h>
//void string(char arr[])
//{
//	int l = 0;
//	char tmp = 0;
//	int r = strlen(arr) - 1;
//	while (l<r)
//	{
//		tmp = arr[l];
//		arr[l] = arr[r];
//		arr[r] = tmp;
//		l++;
//		r--;
//	}
//}
//int main()
//{
//	char arr[] ="abcdefg" ;
//	string(arr);
//	printf("%s\n", arr);
//	return 0;
//}


//���õݹ� ��һ��������ÿ����������� 1729 = 19
//#include <stdio.h>
//int digitsum(unsigned int num)
//{
//	if (num > 9)
//	{
//		return digitsum(num / 10) + num % 10;
//	}
//	else
//	{
//		return num;
//	}
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	int ret = digitsum(num);
//	printf("ret=%d\n", ret);
//	return 0;
//}


//��һ�����Ĵη�
//#include <stdio.h>
//double pow(int a,int b)
//{
//	if (b < 0)
//		return (1.0 / (pow(a, -b)));
//
//	else if (b == 0)
//		return 1;
//
//	else
//		return a*pow(a, b - 1);
//
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d%d", &i, &n);
//	double ret = pow(i, n);
//	printf("%lf\n", ret);
//	return 0;
//}