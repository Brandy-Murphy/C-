////����һ���ṹ��
//#include <stdio.h>
////struct �ṹ��ؼ���  stu �ṹ���ǩ strpuct stu �ṹ������ 
//struct stu
//{
//	char name[20];
//	short age;
//	char tele;       //��ʱ����ռ�ռ�
//	char sex[5];
//}s1,s2,s3;//s1,s2,s3  ����������ȫ�ֽṹ�����  ������ں����ڲ����� ��Ϊ�ֲ�����
//
//typedef struct stu  //typedef ���ṹ����������  �����ź�д�������� 
//                    //����ֱ��ʹ��stu�������ṹ�����
//{
//	char name[20];
//	short age;
//	char tele;       
//	char sex[5];
//}stu;//�ߵ�stu������������  Ϊ�˷��㴴������
//
//
//int main()
//{
//	struct stu s;//�ֲ��Ľṹ��������� 
//	stu s1;
//	return 0;
//}


//��ʼ���ṹ��ļ��ַ�ʽ
//#include <stdio.h>
//struct point 
//{
//	int x;
//	int y;
//	char z[5];
//};          //��������ͬʱ�������p1
//struct point2
//{
//	int a;
//	int b;
//	char *c;
//	struct point s;   //�û��ṹ���������ṹ��
//};
//int main()
//{
//	char arr = 'c';
//	struct point p = {3,5,"���"};//����ṹ�����p2
//	struct point2 p2 = { 3,4,NULL,{ 2,1000,"cay" } };//Ƕ�׽ṹ���ʼ��
//	printf("%s\n", p.z);
//	printf("%d\n", p2.s .x );//����Ƕ�׽ṹ��ķ���
//	return 0;
//}

//�ṹ�崫�������
#include <stdio.h>
typedef struct stu
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}stu;
void print1(stu s)
{
	printf("%s\n", s.name);
	printf("%d\n", s.age);
	printf("%s\n", s.sex);
	printf("%s\n", s.tele);
}
void print2(stu*s)  //��һ��ָ��������
{
	printf("%s\n", s->name);
	printf("%d\n", s->age );   //����ַҪ��->������
	printf("%s\n", s->sex );
	printf("%s\n", s->tele);
}

int main()
{
	stu s = { "�¶���Ӥ",20,"21312421354","��" };
	print1(s);    //��ֵ����
	print2(&s);   //��ַ����
	  //�ܵ���˵ ����2�ȷ���1  ��Ϊ���ÿ����µĿռ� Ч�ʸ���
	return 0;
}

