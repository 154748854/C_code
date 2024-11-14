#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//二维数组在内存中的存放

//int main()
//{
//	int arr[3][5] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//
//
//	return 0;
//}

//数组练习
//多个字符从两端移动，向中间汇聚

#include <string.h>
#include <windows.h>
#include <stdlib.h>
int main()
{
	char arr1[] = { "hello world" };
 	char arr2[] = { "###########" };//字符串末尾有一个/0
	int left = 0;
	int right = strlen(arr2) - 1;
	printf("%s\n", arr2);
	while (left <= right)
	{
		arr2[left] = arr1[left];//将arr1中的元素替换到arr2当中
		arr2[right] = arr1[right];
		left++;
		right--;
		system("cls");
		printf("%s\n", arr2);
		Sleep(1000);//休眠1000毫秒
		
	}
	


	return 0;
}
//豪玩