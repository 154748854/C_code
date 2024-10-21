#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main()
{
	//scanf

	/*int score = 0;
	printf("请输入成绩：");
	scanf("%d", &score);
	printf("成绩是%d", score);*/


	/*int a = 0;
	int b = 0;
	float f1 = 0.0f;
	float f2 = 0.0f;
	scanf("%d %d %f %f", &a, &b, &f1, &f2);
	printf("%d %d %f %f", a, b, f1, f2);*/

	//int a = 0;
	//int b = 0;
	//int c = 0;
	//int d = 0;
	//int ret = scanf("%d %d %d %d", &a, &b, &c, &d);
	//printf("%d %d %d %d\n", a, b, c, d);
	//printf("%d", ret);

	/*int num = 0;
	scanf("%d", &num);
	printf("%d", num);*/


	/*char ch = 0;
	char ah = 0;
	scanf("%c %c", &ch, &ah);

	printf("xxxxx%cyyy %cyy", ch, ah);*/

	/*char name[11];
	scanf("%11s", name);
	printf("%s", name);*/

	int a = 0;
	int b = 0;
	int c = 0;

	scanf("%d%*c%d%*c%d\n", &a, &b, &c);

	printf("%d %d %d\n", a, b, c);




	return 0;
}
