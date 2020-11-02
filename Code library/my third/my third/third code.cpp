#include <stdio.h>

//int main()
//{
//	int ch;
//	while ((ch=getchar())!=EOF)//EOF:END OF FILE文件结束标志 若要停止，需要输入ctrl+z
//	{
//		putchar (ch);
//	}
//	return 0;
//}

//int main()
//{
//	int ch = getchar();//接受字符，用于接受键盘输入的字符串
//	putchar(ch);//输出字符，打印字符时，作用与printf一样
//	return 0;
//}

//int main ()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		i++;
//		if (i == 3)
//		continue;//终止此代码后面的运算。直接加入到下一个循环的判断部分。
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
//	int day;//switch语句只能定义整型。不能用浮点型小鼠。
//	scanf("%d",&day);
//	switch (day)
//	{
//	case 1://case也只能是整型，不能小数。
//			printf("周一\n");
//			break;
//	case 2:
//		printf("周二\n");
//		break;
//	case 3:
//		printf("周三\n");
//		break;
//	case 4:
//		printf("周四\n");
//		break;
//	case 5:
//		printf("周五\n");
//		break;
//	case 6:
//		printf("周六\n");
//		break;
//	case 7:
//		printf("周七\n");
//		break;
//	default://输入case语句之外内容，执行它。
//		printf("输入错误\n");
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
//		printf("奇数是%d\n",a);
//		a += 2;
//	}*/
//	
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;  //这叫架空else。
//	if (a == 1)//else不和这个if匹配 所以不显示打印结果。如果想与第一个if匹配，给第二个if加大括号
//	{
//		if (b == 2)
//			printf("hello\n");
//	}
//	else//else只和距离最近且没有被匹配的if匹配。
//			printf("hehe\n");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;  //这叫架空else。
//	if (a == 1)//else不和这个if匹配 所以不显示打印结果。如果想与第一个if匹配，给第二个if加大括号
//		if (b == 2)
//			printf("hello\n");
//		else//else只和距离最近且没有被匹配的if匹配。
//			printf("hehe\n");
//	return 0;
//}

//int main() 
//{
//	int age = 888;
//	if (age < 18)//如果为真，就执行它。
//		printf("未成年\n");
//	else if (age > 18 && age < 26)//否则并且为真 执行它。
//	         //不能写为(18<age<26)否则会出现逻辑问题，按以上格式写。
//		printf("青年");
//	else//否则，就执行它.
//		printf("壮年人\n");
//	return 0;
//}

