#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main()
{
	//if语句
	/*if (1 == 2)
		printf("hehe");*/

	//输入一个整数，判断是否为奇数
	//int num = 0;
	//scanf("%d", &num);
	//if (num % 2 == 1)
	//	printf("是奇数\n");
	//else
	//	printf("是偶数\n");


	/*int num = 0;
	scanf("%d", &num);
	if (num == 0)
		printf("数字是零");
	else
	{
		if (num > 0)
			printf("正数");
		else
			printf("负数");
	}*/

	/*int num = 0;
	scanf("%d", &num);
	if (num == 0)
		printf("为零");
	else if (num > 0)
		printf("是正数");
	else
		printf("是负数");*/

	/*unsigned int age = 0;
	scanf("%d", &age);
	if (age <= 18)
		printf("少年\n");
	else if (age <= 44)
		printf("青年\n");
	else if (age <= 59)
		printf("青年\n");
	else if (age <= 89)
		printf("老年");*/


	//悬空else
	int a = 0;
	int b = 0;
	if (a == 1)
		if (b == 0)
			printf("0");
		else
			printf("1");

	
	

	return 0;
}