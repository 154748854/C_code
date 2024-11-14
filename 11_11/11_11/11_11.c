#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int test()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a > 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//}
//int main()
//{
//	int ret = test();
//	printf("%d", ret);
//
//
//	return 0;
//}


//void test()
//{
//	printf("hehe");
//	if (1)
//		return;
//
//	printf("haha");
//}
//int main()
//{
//	test();
//	return 0;
//}

//int test()
//{
//	return 3.14;
//}
//int main()
//{
//	int ret = test();
//	printf("%d", ret);
//	return 0;
//}

test()
{
	int a = 0;
	scanf("%d", &a);
	if (a)
	{
		return 1;
	}
}

int main()
{
	int ret = test();
	printf("%d", ret);
	return 0;
}