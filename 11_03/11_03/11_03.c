#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//���������

#include <stdlib.h>
#include <time.h>

//int main()
//{
//	srand(2);
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//
//
//
//	return 0;
//}

//int main()
//{
//	//�����������������㣨���ӣ�
//	/*srand((unsigned int)time(NULL));
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());*/
//
//
//
//	return 0;
//}


//��ʽ������Ϸ

void menu()
{
	printf("*************************\n");
	printf("******** 1.play  ********\n");
	printf("******** 2.exit  ********\n");
	printf("*************************\n");

}

void game()
{
	//��Ϸ�߼�
	//1�����������
	int r = rand() % 100 + 1;//����1��100�ڵ������
	//2��������
	while (1)
	{
		printf("�������:");
		int guest = 0;
		scanf("%d\n", &guest);
		if (guest > r)
		{
			printf("�´���");
		}

		else if (guest < r)
		{
			printf("��С��");
		}

		else
		{
			printf("�¶���");
			break;

		}
	}



}
int main()
{
	srand((unsigned int)time(NULL));
	//�����������������㣬srand������������ֻ��Ҫ����һ�ξ��У����Է���main�����У�������game������
	int input = 0;
	//һ�����ͽ���ѡ���ҿ��Զ�����棬�ʺ�ʹ��do whileѭ��
	do
	{
		//��ӡ�˵�
		menu();

		//ѡ����Ϸ
		
		printf("��ѡ��:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("����������0��1\n");
			break;
		}
	} while (input);



	return 0;
}

//Ϩ���ˣ�����ʧ�ܣ�������o(�i�n�i)o