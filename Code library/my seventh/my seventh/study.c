//#include <stdio.h>
////除法与取模
//int main()
//{
//	int a = 5 % 2;//商2余1 取模运算两边必须是整数
//	printf(" a = %d\n", a);
//	return 0;
//}

//移位操作符
//int main()
//{
//	int a = 16;
//	//右移>> -- 右移操作符
//	//移动的是二进制 右边丢弃，左边补原符号位。
//	return 0;
//}

//不设置临时变量，交换两个值
//int main()
//{
//	int a = 4;
//	int b = 5;
//	printf("%d  %d\n", a, b);
//	//a = a + b;//加法可能溢出
//	//b = a - b;
//	//a = a - b;
//	//printf("%d  %d\n", a, b);
//
//	//异或的方法
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("%d  %d\n", a, b);
//	return 0;
//}

//求一个整数在内存的二进制的中1的个数
//int main()
//{
//	int num = 0;
//	int count = 0;
//	int i = 0;
//	scanf("%d", &num);
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//		{
//			count++;
//		}
//	}
//	printf("count=%d\n", count);
//	return 0;
//}


//单目操作符示范
//！反逻辑操作符
//int main()
//{
//	int a = 10;//非零为真
//	printf("%d\n", !a);//a变成了0；
//	return 0;
//}


//sizeof的特点
//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));//2  sizeof运算的以被赋值的变量为准，
//	                                      /*short类被赋值后只能为short*/
//	printf("%d\n", s);//0  sizeof里的表达式奴会参与运算
//	return 0;
//}



////~按位取反的示例
//#include <stdio.h>
//int main()
//{
//	int a = 11;//二进制为00000000000000000000000000001011
//	           //将右数第三个零改为1
//	a = a | (1 << 2);//将1向左移位2就二进制等于00000000000000000000000000000100
//	                 //然后与a按位或，就变成了00000000000000000000000000001111
//	printf("%d\n", a);
//	//再将这数字改回来
//	a = a&(~(1 << 2));//先将1向左移动两位 等于00000000000000000000000000000100
//	//然后在按位取反 等于11111111111111111111111111110100
//	//然后在与a 现在的15 进行按位与 就变成了00000000000000000000000000001011
//	printf("%d\n", a);
//
//	return 0;
//}


////++ 前置,后置
////-- 前置,后置
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	//printf("%d\n", ++a);//前置++，先++在使用
//	printf("%d\n", a++);//后置++，先使用 在++
//	//-- 也一样
//
//	return 0;
//}


//强制类型转换
//#include <stdio.h>
//int main()
//{
//	int a = (int)3.14;
//	return 0;
//}

//&& ||的结果运算
//#include <stdio.h>
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++&&++b&&d++;//只要左边的计算结果为假 右边的结果一律不再进行；
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
//	i = a++||++b||d++;//只要左边结果为真，右边就不再进行计算；
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
//	return 0;
//}


//条件操作符(三目操作符)
//#include <stdio.h>
//int main()
//{
//	//int a = 0;
//	//int b = 0;
//	//if (a > 5)
//	//	b = 5;
//	//else
//	//	b = -5;
//	//printf("%d\n", b);
//	////用条件操作符表达这种逻辑
//	//b = (a > 5 ? 5 : -5);
//
//	int a = 10;
//	int b = 20;
//	int max = 0;
//
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	//用条件操作符表达
//	max = (a > b ? a : b);
//	return 0;
//}


//#include <stdio.h>
////创建一个结构体-struct
//struct studen
//{
//	//成员变量
//	char name [20];
//	int age;
//	char id_care [20];
//};
//int main()
//{
//	int a = 0;
//	//使用struct studen创建了一个对象 叫si 并进行了初始化
//	struct studen si = { "张三",20,"12345678" };
//	//调用成员
//	printf("%s\n", si.name);
//	printf("%d\n", si.age);
//	printf("%s\n", si.id_care);
//	//结构体变量.成员名
//	struct studen*add = &si;//取结构体成员的地址 与创建指针变量
//	//调用结构体成员指针方法
//	printf("%s\n", (*add).id_care);
//	//另一种方法
//	printf("%s\n", add->id_care);
//	printf("%d\n", add->age);
//	//->结构体指针   在结构体里->相当于strucd ...*...的作用
//	return 0;
//}



//整形提升
//#include <stdio.h>
//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011
//	//int转char要被截断为00000011
//	char b = 127;
//	//00000000000000000000000001111111
//	//01111111
//
//	char c = a + b;
//	//a+b运算  
//	//整型提升 按符号位的数字进行补位
//	//a   00000011的符号位就是0 补足4个字节
//	//b   01111111的符号位就是0 补足4个字节
//	//a与b相加 二进制为00000000000000000000000010000010
//	//截断为10000010
//
//	printf("%d\n", c);
//	//当char类型要打印为int类型时 要进行整型提升
//	//提升为11111111111111111111111110000010
//	//转为十进制为-126
//	return 0;
//}

