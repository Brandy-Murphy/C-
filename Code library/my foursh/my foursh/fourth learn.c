//ģ���û���¼��������ֻ�������������롣
#include <stdio.h>

int main()
{
	int i = 0;
	char passworld[20] = {0};
	for ( i = 0; i < 3; i++)
	{
		printf("����������\n");
		scanf("%s",passworld);
		if (strcmp(passworld,"123456")==0)//==����ԭ���ж��ַ����Ƿ���ȣ��ж��ַ���Ҫ�ú���strcmp
		{
			printf("��¼�ɹ�\n");
			break;
		}
	}
	if (i==3)
	{
		printf("�����������\n");
	}
	return 0;
}


//�۰���ҷ����Ż�����㷨��
//#include <stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	int left = 0;//���±�
//	int right = sz - 1;//���±�
//	int k = 6;
//	while (left<=right)
//	{
//		int mid = (right + left) / 2;
//
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
//			printf("�ҵ��ˣ��±���%d\n", mid);
//			break;
//		}
//	}
//	if(left>right)
//	{
//		printf("�в���\n");
//
//	}
//	return 0;
//}

////�����֣������������е�λ�ã�
//#include <stdio.h>
//
//int main()
//{
//	int k = 7;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for ( i = 0; i < sz; i++)
//	{
//		if (arr[i]==k)
//		{
//			printf("������û��\n�±�λ��%d\n",i);
//			break;
//		}
//
//	}
//	if (i == sz - 1)
//		printf("������û��");
//	return 0;
//}


//��2�Ż���ļ���1�Ľ׳�+2�Ľ׳�+3�Ľ׳�....+��10�Ľ׳�
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//			//Ҫ��ret��ֵ��ʼ��Ϊ1������ͻ᲻����.
//			ret = ret * n;
//			sum = sum + ret;
//	}
//
//	printf("�׳���%d\n", sum);
//	return 0;
//}


////����1�Ľ׳�+2�Ľ׳�+3�Ľ׳�....+��10�Ľ׳�
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for ( n = 1; n <= 10; n++)
//	{
//		ret = 1;//Ҫ��ret��ֵ��ʼ��Ϊ1������ͻ᲻���ۼơ�
//		for (i = 1; i < n + 1; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	
//	printf("�׳���%d\n", sum);
//	return 0;
//}


//����n�Ľ׳�
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int red =1;
//	scanf("%d", &n);
//
//	for ( i = 1; i <= n; i++)
//	{
//		red = i*red;
//	}
//	printf("%d\n", red);
//	return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//	int a=1;
//	do
//	{
//		printf("%d\n", a);
//		a++;
//	} 
//	while (a<10);
//}

//#include <stdio.h>
//int main()
//{
//	for (int i=0;i<10;i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			printf("haha\n");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
////forѭ���ĳ�ʼ�� �ж� ѭ��������ʡ�� ����жϲ��ֱ�ʡ�ԣ������Ϊ��
//int main()
//{
//	for(;;)
//	{
//		printf("hello");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{         //��ʼ��  �ж�    ����
//	for (int i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d\n", i);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{         //��ʼ��  �ж�    ����
//	for (int i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int ret;
//	char passwrold[20];
//	printf("��������������:>");
//	scanf("%s",passwrold);
//	while(getchar()!='\n')
//	{
//	
//	}
//	printf("��ȷ����Y/N:>");
//	ret=getchar();
//	if (ret=='Y')
//	{
//		printf("ȷ�ϳɹ�");
//	}
//	else
//	{
//		printf("ȷ��ʧ��");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int ch;
//	while ((ch=getchar())!=EOF)
//		putchar(ch);
//	return 0;
//}