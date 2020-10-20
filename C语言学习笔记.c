          //include 中文意思“包含”  包含一个叫“stdio.h”的文件。
          //stdio 标准输入输出文件  standard input output.
#include <stdio.h>

int main()//main:程序的入口，有且只有一个。
{
	      //print f  print打印的意思,f functio函数，功能意思。打印函数作用 是一个库函数，C语言本身提供给我们的函数。
	printf("i am kennedy murphy ");
	return 0;
}
          //int是整形的意思
          //main前面的int表示main函数调用返回一个整型值。


bit     比特位
byte   字节
kb
mb 
gb


#include <stdio.h>
   int a = 10;//全局变量，任意地方都可以使用，名字可以和局部变量重叠。
int main()
{
	int a = 4;//局部变量，只能在{}内使用。
	printf("%d\n",a );
	return 0;
}

//const 长属性 修饰变量后 变量不可修改。
	   const int num1 = 20;  //num1是本质上变量，但也有常属性，所以n是常变量。
		printf("num1=%d",num1);


enum exc//enum 枚举常量，将常量列举出来。
{    
	male,
	famle,
	secret
};
int main()
  {
	    enum exc me=male;
		return 0; 
	
  }
        

char all[]="abc";//""双引号直接变字符串类型
	//其实all里有4个字符‘a’‘b’‘c’‘\0’  \0=打印结束标志 被隐藏起来了。
	char all2[] = { 'a','b','c' ,'\0'};
	//  \0属于结束标志，打印数组时，要加上\0。
	printf("%s\n",all);
	printf("%s\n", all2); 


int main() {

	char all[]="abc";//""双引号直接变字符串类型
	char all2[] = { 'a','b','c' };
	printf("%d\n",strlen(all));//s	trlen:string length计算机字符串长度
	printf("%d\n", strlen(all2));
	return 0;
};


int main() 
{
	int arr[5] = {1,2,3,4,5};//定义一个数组。
	printf("%d\n",arr[3]);//下标方式的访问元素。

	return 0;
}


int main() 
{
	int a = 10;
	int b = a++;//后置++，先使用，在+1.
	printf("a=%d,b=%d\n",a,b);//a=11，b=10.
	return 0;
}


int main() 
{
	int a = 10;
	int b = ++a;//前置++，先使用，在++。
	printf("a=%d,b=%d\n",a,b);//a=11，b=10.
	return 0;
}