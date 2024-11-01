#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//循环嵌套

//找出100~200之间的素数，并打印在屏幕上。
int main()
{
	int i = 0;
	
	for (i = 100; i <= 200; i++)//先产生一到一百的数字
	{
		int flag = 1;
		//判断i是不是素数，就用2到i减一之间的数字去试除i
		int j = 0;
		for (j = 2; j <= i - 1; j++)//产生2到i - 1之间的数字
		{
			if (i % j == 0)
			{
				flag == 0;
				break;//if语句如果成立就说明i被2到i-1之间某个数整除了（i就不是素数），用break跳出循环
			}
			
		}
		if (flag == 1)
		{
			printf("%d ", i);
		}
	}
	

	return 0;
}
//代码失败，宿舍熄灯，明日修改