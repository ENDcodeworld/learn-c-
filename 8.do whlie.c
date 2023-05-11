#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 100;
//	while (a >= 5 )
//	{
//		if (a == 50)
//		{
//			break;
//		}
//		printf("%d ", a);
//		a--;
//	}
//
//	return 0;
//}

//int main()
//{
//	int i =0 ;
//	while (i <= 50)
//	{
//		if (i == 8)
//		{
//			continue;
//		}
//		printf("%d ", i);
//		i++;
//
//	}
//
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//
//	while  ((ch = getchar()) !=EOF )
//	{
//
//		putchar(ch);
//	}
//按CTRL+z结束
//	return 0;
//} 

//int main()
//{
//	int ch;
//	while ((ch = getchar()) != EOF)
//	putchar(ch);
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch=getchar())  != EOF)
//	{
//		if (ch < '2' || ch >'9')
//		continue;
//		putchar(ch);
//	}
//
//	return 0;
//}

//for 循环
//int main()
//{
//	int i = 1;
//	for (  i =1;  i <=20 ;  i++)初始化,判断,调整
//	{
//		if (i == 10)
//		{
//			continue;
//		}
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (int a = 0 ; a < 4; a++)
//	{
//		for (int b = 0; b < 3; b++)
//		{
//			printf("good\n", b);
//		}
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int a = 1;
//	do
//	{
//		if (a == 6)
//			continue;
//		printf("%d ", a);
//		a++;
//	} while (a<=10);
//
//	return 0;
//}

//int main()
//{
//	
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	switch (i = 1, i <= n)
//	{
//	case 1: ret *= i;
//		printf ("%d\n", ret);
//	case 2:ret *= i + 1;
//		printf("%d\n", ret);
//	case 3:ret *= i + 2;
//		printf("%d\n", ret);
//	case 4:ret *= i + 3;
//		printf("%d\n", ret);
//	case 5:ret *= i + 4;
//		printf("%d\n", ret);
//	case 6:ret *= i + 1;
//		printf("%d\n", ret);
//	case 7:ret *= i + 5;
//		printf("%d\n", ret);
//	case 8:ret *= i + 6;
//		printf("%d\n", ret);
//	case 9:ret *= i + 7;
//		printf("%d\n", ret);
//	case 10:ret *= i + 8;
//		printf("%d\n", ret);
//	default:
//		break;
//	}
//
//	printf("%d\n", ret);
//	return 0;
//
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	while (i<=n)
//	{
//		ret *= i;
//		printf("%d", ret);
//		i++;
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//	int ret = 1;
//	for (n = 1; n<= 3; n++)
//	{
//		ret = 1;
//        for (i=1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//用上一个的结果加上最新的数
//int main()
//{
//	int end = 1;
//	int i = 0;
//	int sum = 0;
//	for ( i = 1; i <=10; i++)
//	{
//		end *= i;
//		sum += end;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int num = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < num)

		{
			left = mid + 1;
		}
		else if (arr [mid] > num)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了，下标是:%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到\n");
	}
	return 0;
}