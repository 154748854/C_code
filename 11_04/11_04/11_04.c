#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdlib.h>
//#include <time.h>
#include <stdio.h>
//
//void game()
//{
//	int r = rand() % 100 + 1;
//	int guess = 0;
//	while (1)
//	{
//		printf("�������:");
//		scanf("%d\n", &guess);
//		if (guess < r)
//		{
//			printf("С��");
//		}
//		else if (guess > r)
//		{
//			printf("����");
//		}
//		else
//		{
//			printf("�¶���");
//			break;
//		}
//	}
//}
//
//void menu()
//{
//	printf("***********************\n");
//	printf("******  1. play  ******\n");
//	printf("******  0. exit  ******\n");
//	printf("***********************\n");
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\0");
//			break;
//		default:
//			printf("����������\n");
//			break;
//		}
//	} while (input);
//
//		return 0;
//}
////why!!!!!

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void game()
//{
//	int r = rand() % 100 + 1;
//	int guess = 0;
//	while (1)
//	{
//		printf("������\n");
//		scanf("%d", &guess);
//		if (guess < r)
//		{
//			printf("С��\n");
//		}
//		else if (guess > r)
//		{
//			printf("����\n");
//		}
//		else
//		{
//			printf("����\n");
//			break;
//		}
//	}
//
//}
//	
//void menu()
//{
//	printf("***********************\n");
//	printf("******  1. play  ******\n");
//	printf("******  0. exit  ******\n");
//	printf("***********************\n");
//}
//	
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("����");
//				break;
//		default:
//			printf("��ѡ");
//				break;
//		}
//	}while (input);
//
//
//
//	return 0;
//}

//����ɹ��ˣ��ҿ���ˣ�Ϊʲô֮ǰ�ľ��ǲ�����


//����

int main()
{
	//����
	/*int math[20];
	char ch[5];
	double arr[6];*/

	//��ʼ��
	//int math[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};//��ȫ��ʼ��
	//char ch[5] = { 2 };//����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
	//char ch[5] = { 'a', 'b' };
	//char ch[5] = { "abc" };
	//double arr[6] = {1};

	//ʹ������
	/*int math[20] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	printf("%d \n", math[5]);*/

	//��ӡ��������
	/*int i = 0;
	for (i = 0; i <= 19; i++)
	{
		printf("%d ", math[i]);
	}*/

	//int i = 0;

	//do
	//{
	//	printf("%d ", math[i]);
	//	i++;
	//} while (i - 20 < 0);//�Լ�д�����ˣ�(*^��^*)


	//������������10��ֵ
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d ", &arr[i]);//������Ҫȡ��ַ��ԭ��������Ԫ����һ������Ԫ�أ����������ǵ�ַ
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}

	
	return 0;
}

//perfect�����չ�