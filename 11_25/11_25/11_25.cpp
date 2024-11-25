#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 20;
//	//变量创建的本质是在内存中申请空间
//	printf("%p\n", &a);
//
//	return 0;
//}

//int main()
//{
//	int a = 20;
//	int* pa = &a;
//	*pa = 200;// a = 200;
//	printf("%d\n", a);
//
//	return 0;
//}


int main()
{
	int a = 20;
	int* pa = &a;
	char* pc = &a;
	printf("&a = %p\n", &a);
	printf("pa = %p\n", pa);
	printf("pc = %p\n", pc);

	printf("&a+1 = %p\n",&a+1);
	printf("pc+1 = %p\n", pc+1);
	printf("pc+1 = %p\n", pc+1);



	return 0;
}