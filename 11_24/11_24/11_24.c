#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//struct Student
//{
//	//成员列表
//	char name[20];
//	int age;
//	float score;
//}s4, s5, s6;//全局变量
//
//struct Student s3 = { "王五",18,88.5 };//全局变量
//
//struct S
//{
//	char ch;
//	struct Student a;
//	double d;
//};
//
//int main()
//{
//	struct Student s1 = { "翠花",20,98.0 };
//	struct Student s2; //局部变量也可以初始化
//	struct S s = { 'a',{"旺财，19,77.5"},3.14 };
//
//	printf("%c\n", s.ch);//打印s对象中的ch
//	printf("%d\n", s.a.age);
//
//	return 0;
//}

//int main()
//{
	/*int a = 10;
	int b = 20;
	int c = a + b;*/

	//char
	//char a = 20;
	////00000000000000000000000000010100  --整型20的二进制序列
	////00010100  --a里边真正放的值
	//char b = 130;
	////00000000000000000000000010000010  --整型130的二进制序列
	////10000010  --b
	//char c = a + b;//运算要整型提升
	////00010100  --a，符号位是0，有符号的整型提升⾼位补充符号位
	////00000000000000000000000000010100 整型提升后
	//// 
 //   //10000010  --b
	////11111111111111111111111110000010 --整型提升后，再进行运算
	////11111111111111111111111110010110  相加后，放入一个8比特位的char类型时，需要截断
	////10010110  --c的补码
	////%d 打印有符号整型，也会进行一次整型提升（略）
	//printf("%d\n", c);//最终c = -106；



	
//	return 0;
//}

int main()
{
	int i = 10;
	i = i-- - --i * (i = -3) * i++ + ++i;
	printf("i = %d\n", i);
	return 0;
}