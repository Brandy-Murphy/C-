#include <stdio.h>

//int main()
//{
//	int ch;
//	while ((ch=getchar())!=EOF)//EOF:END OF FILE�ļ�������־ ��Ҫֹͣ����Ҫ����ctrl+z
//	{
//		putchar (ch);
//	}
//	return 0;
//}

//int main()
//{
//	int ch = getchar();//�����ַ������ڽ��ܼ���������ַ���
//	putchar(ch);//����ַ�����ӡ�ַ�ʱ��������printfһ��
//	return 0;
//}

//int main ()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		i++;
//		if (i == 3)
//		continue;//��ֹ�˴����������㡣ֱ�Ӽ��뵽��һ��ѭ�����жϲ��֡�
//		printf("%d ", i);
//		
//
//	}
//	return 0;
//}


//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		n++;
//	case 2:
//		m++;
//	case 3:
//		switch (n) 
//		{
//		case 1:
//			n++;
//		case 2:
//			n++, m++;
//			break;
//		}
//	case 4:
//		m++;
//	default :
//		break;
//	}
//	printf("m=%d,n=%d\n",m,n);
//	return 0;
//}


//int main() 
//{
//	int day;//switch���ֻ�ܶ������͡������ø�����С��
//	scanf("%d",&day);
//	switch (day)
//	{
//	case 1://caseҲֻ�������ͣ�����С����
//			printf("��һ\n");
//			break;
//	case 2:
//		printf("�ܶ�\n");
//		break;
//	case 3:
//		printf("����\n");
//		break;
//	case 4:
//		printf("����\n");
//		break;
//	case 5:
//		printf("����\n");
//		break;
//	case 6:
//		printf("����\n");
//		break;
//	case 7:
//		printf("����\n");
//		break;
//	default://����case���֮�����ݣ�ִ������
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}


//int main()
//{
//	int a=1;
//	while (a <=  100) {
//		if (a % 2 == 1)
//			printf("%d\n", a);
//		a++;
//
//	}
//	/*while(a<=100)
//	{
//		printf("������%d\n",a);
//		a += 2;
//	}*/
//	
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;  //��мܿ�else��
//	if (a == 1)//else�������ifƥ�� ���Բ���ʾ��ӡ�������������һ��ifƥ�䣬���ڶ���if�Ӵ�����
//	{
//		if (b == 2)
//			printf("hello\n");
//	}
//	else//elseֻ�;��������û�б�ƥ���ifƥ�䡣
//			printf("hehe\n");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;  //��мܿ�else��
//	if (a == 1)//else�������ifƥ�� ���Բ���ʾ��ӡ�������������һ��ifƥ�䣬���ڶ���if�Ӵ�����
//		if (b == 2)
//			printf("hello\n");
//		else//elseֻ�;��������û�б�ƥ���ifƥ�䡣
//			printf("hehe\n");
//	return 0;
//}

//int main() 
//{
//	int age = 888;
//	if (age < 18)//���Ϊ�棬��ִ������
//		printf("δ����\n");
//	else if (age > 18 && age < 26)//������Ϊ�� ִ������
//	         //����дΪ(18<age<26)���������߼����⣬�����ϸ�ʽд��
//		printf("����");
//	else//���򣬾�ִ����.
//		printf("׳����\n");
//	return 0;
//}

