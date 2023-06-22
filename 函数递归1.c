#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int i = 0;
//	int n = 0;
//	for (i = 1; i <= 100; i++)
// 求出1-100所有整数出现过的数字9
//	{
//		if (i % 10 == 9)
//		{
//			n++;
//		}
//		if (i / 10 == 9)
//		{
//			n++;
//		}
//	}
//	printf("%d\n", n);
//
//	return 0;
//}
//计算1/1-1/2+1/3-1/4+1/5......+1/99-1/100的值，打印出结果
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//		
//	}
//       printf("%lf ", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	for ( i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//			sum -= 1.0 / i;
//		else
//			sum += 1.0 / i;
//	}
//	printf("%lf", sum);
//	return 0;
//}
//求10数的最大值
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int i = 0;
//	for ( i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("%d", max);
//	return 0;
//}
//乘法口诀表
int main()
{
	int i = 0;
	for ( i = 1; i <= 9; i++)
	{
		int j = 0;
		for ( j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j, i * j);
		}//2是位数
		printf("\n");
	}

	return 0;
}