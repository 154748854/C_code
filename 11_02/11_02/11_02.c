#define _CRT_SECURE_NO_WARNINGS 1

//
//#include <stdio.h>
//
////ѭ��Ƕ��
//
////�ҳ�100~200֮�������������ӡ����Ļ�ϡ�
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i++)//�Ȳ���һ��һ�ٵ�����
//	{
//		int flag = 1;
//		//�ж�i�ǲ�������������2��i��һ֮�������ȥ�Գ�i
//		int j = 0;
//		for (j = 2; j <= i - 1; j++)//����2��i - 1֮�������
//		{
//			if (i % j == 0)
//			{
//				flag == 0;
//				break;//if������������˵��i��2��i-1֮��ĳ���������ˣ�i�Ͳ�������������break����ѭ��
//			}
//			
//
//		}
//
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	
//		
//	}
//	printf("\n%d ", count);
//	
//	return 0;
//}
//���ǲ��У����Ѱ�


//int main()
//{
//	int flag = 1;
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;//�������forѭ��
//			}
//		}
//		//
//		if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//
//
//	return 0;
//}

//goto����
#include <stdio.h>
//int main()
//{
//	again:
//	printf("hehe\n");
//	if (1)
//	{
//		printf("haha\n");
//		goto again;
//	}
//
//
//
//	return 0;
//}



//�ػ�����
//1;��������������60s��ػ�
//2������ �����˰� ����ȡ���ػ�
#include <string.h>
#include <stdlib.h>

//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");//�⺯��system��ִ��ϵͳ����
//	again:
//	printf("��ĵ��Խ���60���ػ�����Ϊ��̫���ˣ������� �����˰� ��ȡ���ػ�\n");
//	scanf("%s", input);//�������Ϣ����input������
//	if (strcmp("�����˰�", input) == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//
//
//	return 0;
//}
//perfect 

//�ػ�����ѭ��Ҳ�����ñ��ѭ��ʵ�֣�������ʹ��goto

//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");//�⺯��system��ִ��ϵͳ����
//	while (1)
//	{
//		printf("��ĵ��Խ���60���ػ�����Ϊ��̫���ˣ������� �����˰� ��ȡ���ػ�\n");
//		scanf("%s", input);//�������Ϣ����input������
//		if (strcmp("�����˰�", input) == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	
//	
//
//
//	return 0;
//}


//�չ�
