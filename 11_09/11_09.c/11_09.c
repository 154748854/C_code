#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	scanf("%d", &k);//����Ҫ���ҵ�ֵ
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	
//	
//	int right = sz - 1;
//	int mid = (left + right) / 2;
//	
//
//	while (left <= right)
//	{
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±���%d\n", mid);
//			break;
//		}
//	}
//
//	if (left > right)
//	{
//		printf("�Ҳ���");
//	}
//
//
//
//
//	return 0;
//}

//int main()
//{
//	// 1 2 3 4 5 6 7 8 9 10
//	// 0 1 2 3 4 5 6 7 8 9 
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int key = 7;
//	scanf("%d", &key);
//	int mid = 0;
//	int find = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			find = 1;
//			break;
//		}
//	}
//	if (1 == find)
//	{
//		printf("�ҵ���");
//	}
//	else
//	{
//		printf("�Ҳ���");
//	}
//
//	return 0;
//}
//Ϊʲô���а�
//��������ı�׼���޸ģ����������ˣ�Ҫ��mid�Ž�ѭ�����У�(*^��^*)


//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int left = 0;
//    int right = sizeof(arr) / sizeof(arr[0]) - 1;
//    int key = 7;
//    scanf("%d", &key);
//    int mid = 0;
//
//    int find = 0;
//    while (left <= right)
//    {
//        mid = (left + right) / 2;
//        if (arr[mid] > key)
//        {
//            right = mid - 1;
//        }
//        else if (arr[mid] < key)
//        {
//            left = mid + 1;
//        }
//        else
//        {
//            find = 1;
//            break;
//        }
//    }
//    if (1 == find)
//        printf("�ҵ���");
//    else
//        printf("�Ҳ���");
//            
//
//	return 0;
//}

//int main()
//{
//	int a = 2100000000;
//	int b = 2100000000;
//	/*int mid = (a + b)/2;*/
//	int mid = a + (a + b) / 2;//the better
//	printf("%d", mid);
//
//	return 0;
//}