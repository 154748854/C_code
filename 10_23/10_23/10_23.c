#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{

	//输入一个年龄，如果在18至35，则打印青年
	/*unsigned int age = 0;
	int a = scanf("%d", &age);
	if (age >= 18 && age <= 35)
		printf("青年\n");
	
	printf("%d", a);*/

	//int a = 0;
	//int b = 0;
	//scanf("%d", &a);
	//if (a >= 5)
	//	b = 5;
	//else
	//	b = -5;
	//printf("%d", b);
	// 
	//上述代码可用关系操作符更简便地实现

	//int a = 0;
	//int b = 0;
	//int c = 0;
	////scanf("%d", &a);
	////b = a >= 5 ? 5: -5;
	////printf("%d", b);
	//scanf("%d %d", &a, &b);

	////使用条件操作符找两个数当中的最大值
	//c = (a >= b ? a : b);
	//printf("%d", c);


	//逻辑取反运算符
	//int abc = 0;
	//scanf("%d", &abc);
	//if (!abc)
	//{
	//	printf("你输入的是0");
	//}
	//else
	//	printf("你输入的为非零（真）");

	//&&逻辑与运算符
	/*int month = 0;
	scanf("%d", &month);
	if (month > 3 && month < 5)
	{
		printf("%d月是春天", month);
	}*/


	//逻辑或运算符
	/*int month = 0;
	scanf("%d", &month);
	if (month == 12 || month == 1 || month == 2)
	{
		printf("%d月是冬天", month);
	}*/

	//判断闰年
	//int year = 0;
	//scanf("%d", &year);
	////if (year % 4 == 0 && year % 100 != 0)
	////{
	////	printf("是闰年\n");
	////}
	////if (year % 400 == 0)
	////	printf("是闰年\n");//我自己写的

	////更简洁的方法
	//if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	//	printf("是闰年");

	//短路
	//int i = 0;
	//int a = 0;
	//int b = 2;
	//int c = 3;
	//int d = 4;
	//i = (a++ && ++b && d++);//对于&&操作符，从左到右，遇假则停
	//printf("i = %d a =%d \n b = %d\n c = %d\n d =%d\n", i, a, b, c, d);
		

    int i = 0;
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;
	i = (a++ || ++b || d++);
	printf("i = %d a =%d \n b = %d\n c = %d\n d =%d\n", i, a, b, c, d);//对于||操作符，从左到右，遇真则停


	return 0;
}
