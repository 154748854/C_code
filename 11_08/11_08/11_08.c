#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//��ά�������ڴ��еĴ��

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

//������ϰ
//����ַ��������ƶ������м���

#include <string.h>
#include <windows.h>
#include <stdlib.h>
int main()
{
	char arr1[] = { "hello world" };
 	char arr2[] = { "###########" };//�ַ���ĩβ��һ��/0
	int left = 0;
	int right = strlen(arr2) - 1;
	printf("%s\n", arr2);
	while (left <= right)
	{
		arr2[left] = arr1[left];//��arr1�е�Ԫ���滻��arr2����
		arr2[right] = arr1[right];
		left++;
		right--;
		system("cls");
		printf("%s\n", arr2);
		Sleep(1000);//����1000����
		
	}
	


	return 0;
}
//����