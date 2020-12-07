////声明一个结构体
//#include <stdio.h>
////struct 结构体关键字  stu 结构体标签 strpuct stu 结构体类型 
//struct stu
//{
//	char name[20];
//	short age;
//	char tele;       //此时并不占空间
//	char sex[5];
//}s1,s2,s3;//s1,s2,s3  创建了三个全局结构体变量  如果是在函数内部创建 则为局部变量
//
//typedef struct stu  //typedef 将结构体重新命名  大括号后写上新名字 
//                    //可以直接使用stu来创建结构体变量
//{
//	char name[20];
//	short age;
//	char tele;       
//	char sex[5];
//}stu;//者的stu还是属于类型  为了方便创建变量
//
//
//int main()
//{
//	struct stu s;//局部的结构体变量创建 
//	stu s1;
//	return 0;
//}


//初始化结构体的几种方式
//#include <stdio.h>
//struct point 
//{
//	int x;
//	int y;
//	char z[5];
//};          //声明类型同时定义变量p1
//struct point2
//{
//	int a;
//	int b;
//	char *c;
//	struct point s;   //用户结构体来包含结构体
//};
//int main()
//{
//	char arr = 'c';
//	struct point p = {3,5,"你好"};//定义结构体变量p2
//	struct point2 p2 = { 3,4,NULL,{ 2,1000,"cay" } };//嵌套结构体初始化
//	printf("%s\n", p.z);
//	printf("%d\n", p2.s .x );//调用嵌套结构体的方法
//	return 0;
//}

//结构体传参与调用
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
void print2(stu*s)  //用一个指针来接受
{
	printf("%s\n", s->name);
	printf("%d\n", s->age );   //传地址要用->来调用
	printf("%s\n", s->sex );
	printf("%s\n", s->tele);
}

int main()
{
	stu s = { "孤儿巨婴",20,"21312421354","男" };
	print1(s);    //传值调用
	print2(&s);   //传址调用
	  //总的来说 方法2比方法1  因为不用开辟新的空间 效率更高
	return 0;
}

