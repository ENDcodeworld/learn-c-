#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//int  is_odd(int a)
//{
//	int b = 0;
//	for (b = 2; b < a; b++)
//	{
//		if (a % b == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 50; i <=sqrt(n); i++)
//	{
//
//		if (is_odd(i) == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//
//	}
//	printf("\n count = %d\n", count);
//	return 0;
//}
 
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a == a+4)
//	{
//		printf("是闰年\n");
//	}
//	else
//	{
//		printf("不是闰年\n");
//	}
//	return 0;
//}

//int is_leap_year(int a)
//{
//	
//	if (a % 4 == 0 && a % 100 != 0)
//	{
//		return 1;
//	}
//	else if (a % 400 == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//		
//}
 
//int is_leap_year(int n)
//{
//	return (n % 4 == 0 && n % 100 != 0 || n % 400 == 0);
//
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for ( i = 1000; i <=2000;i++)
//	{
//		if (is_leap_year(i) == 1)
//
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

int binary_search(int a[], int b, int s)
{
	int left = 0;
	int right = s - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (a[mid] > b)
		{
			right = mid - 1;
		}
		if (a[mid] < b)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int be = 6;
	int sz = sizeof arr  / sizeof (arr[0]);
	int ret = binary_search(arr, be,sz);
	if (ret == -1)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了，下标是:%d\n");
	}
	return 0;
}