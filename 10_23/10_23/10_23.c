#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{

	//����һ�����䣬�����18��35�����ӡ����
	/*unsigned int age = 0;
	int a = scanf("%d", &age);
	if (age >= 18 && age <= 35)
		printf("����\n");
	
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
	//����������ù�ϵ������������ʵ��

	//int a = 0;
	//int b = 0;
	//int c = 0;
	////scanf("%d", &a);
	////b = a >= 5 ? 5: -5;
	////printf("%d", b);
	//scanf("%d %d", &a, &b);

	////ʹ�����������������������е����ֵ
	//c = (a >= b ? a : b);
	//printf("%d", c);


	//�߼�ȡ�������
	//int abc = 0;
	//scanf("%d", &abc);
	//if (!abc)
	//{
	//	printf("���������0");
	//}
	//else
	//	printf("�������Ϊ���㣨�棩");

	//&&�߼��������
	/*int month = 0;
	scanf("%d", &month);
	if (month > 3 && month < 5)
	{
		printf("%d���Ǵ���", month);
	}*/


	//�߼��������
	/*int month = 0;
	scanf("%d", &month);
	if (month == 12 || month == 1 || month == 2)
	{
		printf("%d���Ƕ���", month);
	}*/

	//�ж�����
	//int year = 0;
	//scanf("%d", &year);
	////if (year % 4 == 0 && year % 100 != 0)
	////{
	////	printf("������\n");
	////}
	////if (year % 400 == 0)
	////	printf("������\n");//���Լ�д��

	////�����ķ���
	//if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	//	printf("������");

	//��·
	//int i = 0;
	//int a = 0;
	//int b = 2;
	//int c = 3;
	//int d = 4;
	//i = (a++ && ++b && d++);//����&&�������������ң�������ͣ
	//printf("i = %d a =%d \n b = %d\n c = %d\n d =%d\n", i, a, b, c, d);
		

    int i = 0;
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;
	i = (a++ || ++b || d++);
	printf("i = %d a =%d \n b = %d\n c = %d\n d =%d\n", i, a, b, c, d);//����||�������������ң�������ͣ


	return 0;
}
