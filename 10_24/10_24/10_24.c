#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main()
{
	//switch语句
	//int n = 0;
	//scanf("%d", &n);
	//if (n % 3 == 0)
	//	printf("余数是零\n");
	//else if (n % 3 == 1)
	//	printf("余数是一\n");
	//else
	//	printf("余数是二\n");
	//与switch语句实现上述代码

	//switch (n % 3)
	//{
	//case 0:
	//	printf("余数是零\n");
	//	break;
	//case 1:
	//	printf("余数是一\n");
	//	break;
	//case 2:
	//	printf("余数是二\n");
	//	break;

		//输⼊⼀个1~7的数字，打印对应的星期⼏


	
	//}
	unsigned int day = 0;
	scanf("%d", &day);
	switch (day)

		/*{
		case 1:
			printf("星期一");
			break;
		case 2:
			printf("星期二");
			break;
		case 3:
			printf("星期三");
			break;
		case 4:
			printf("星期四");
			break;
		case 5:
			printf("星期五");
			break;
		case 6:
			printf("星期六");
			break;
		case 7:
			printf("星期天");
			break;
		}*/



		//1.输⼊1~5，输出的是“⼯作⽇”;
		//2.输⼊6~7，输出“休息⽇”

	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日\n");//因为case决定的是入口，可以有多个入口(｀・ω・´)，并不一定需要在每个case后加break
		break;
	case 6:
	case 7:
		printf("休息日\n");
		break;
	default:
		printf("输错了\n");
		break;
	}




	return 0;
}
