#include <stdio.h>

//printf
int main()
{
	////占位符
	//printf("%dabc\n", 120);
	//printf("%s今天回来\n","李四");
	//printf("%s says it is %d o'clock\n", "张三",3);//printf如果有n个占位符，就有n+1个参数，前面那个字符串也是一个参数
	//printf("%e\n", 314.159);
	//printf("%ho\n", 100);
	//printf("%x\n", 100);
	//…………


	//定制输出格式
	// 
	// 
	//限定宽度
	//printf("%5s\n", "hello world");//%5s占位符宽度至少5个，如果不满5个，对应得值前面会添加空格，输出值默认右对齐
	//printf("%5d\n", 123);
	//printf("%-5d\n", 132);//加上负号变为左对齐
	//printf("%12.3lf\n", 123.4);//小数点也算一位
	// 
	// 
	//总是显示正负号——在%后加上+

	printf("%+d\n", 123);

	//限定小数位数——在百分号后加上.num
	printf("%.2lf\n", 123.456);
	printf("%.2lf\n", 123.454);//多的位数四舍五入

	return 0;
}

#include<stdio.h>
//复习 创建变量与初始化格式  data_type name = num;
//已经有变量后给他一个= num 为赋值
//大括号外部的变量为全局变量,若与局部变量重名，优先局部、



//unsigned int age = 0;
//float a = 3.14f;
//int main()
//{
//	age = 18;
//	printf("%d %s\n", age,"已经成年了");
//	printf("可以谈恋爱了\n");
//
//	float a = 6.66f;
//	printf("%f\n",a);
//
//
//	return 0;
//}




//算数操作符
//int main()
//{/*
//	printf("%d\n", 11 + 22);
//	printf("%d\n", 22 - 11);
//	int a = 10; 
//	int b = 20;
//	printf("%d\n", a + b);
//	printf("%d\n", a - 15);
//	printf("%d\n", a * 8);*///加减乘同数学运算一样
//
//
//	//除法
//	//printf("%d\n", 9 / 3);
//	//printf("%d\n", 10 / 3);//除号两端全是整数，执行结果也是整数
//	//printf("%f\n", 10.0 / 4);//两个运算数至少一个是浮点数，C语言就会进行浮点数除法
//	//printf("%f\n", 10 / 4.0);
//
//
//	//取模，只能用于整数
//	/*printf("%d\n", 10 % 3);
//	printf("%d\n", 10 % -3);
//	printf("%d\n", -10 % 3);*///负数求模的结果由第一个运算数的正负号决定
//
//
//
//
//	return 0;
//}



//赋值操作符
//int main()
//{
//	//连续赋值
//	//int a = 1;
//	//int b = 2;
//	//int c = 3;
//	////c = b = a + 3;
//	//b = a + 3;
//	//c = b;
//	//printf("%d %d %d\n", a,b,c);//赋值是从右向左依次赋值
//	////虽C语言支持连续赋值，但是建议拆开来写
//
//
//	//部分复合赋值
//	/*int a = 10;
//	int b = 10;
//	int c = 10;
//	float d = 10;
//	a += 3;
//	b -= 3;
//	c %= 3;
//	d /= 3.0;
//	printf("%d %d %d %f\n",a,b,c,d);*/
//	return 0;
//}

//单目操作符

//int main()
//{
//	//++
//	//int a = 4;
//	//int b = 0;
//	//int c = 0;
//	//
//	//b = a++;//后置++，先使用，a再自增一
//	//c = ++a;//前置++，先加加，再使用
//	//
//	//printf("b = %d\n", b);
//	//printf("c = %d\n", c);//c打印出来是6的原因是再给b赋值时，a的值就已经加1了。只不过对b来说先使用再++，神奇 ·-·
//
//	/*return 0;*/
//	// --同理
//	int a = 5;
//	printf("%d\n", a--);//先使用
//	printf("%d\n", a);
//
//
//	//正负号，同数学，略过
//	//强制类型转换  （类型）  使用较少
//}