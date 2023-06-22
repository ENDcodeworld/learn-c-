#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void print(unsigned int n)
//{
//	if (n > 2)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//
//	scanf("%u", &num);
//
//	print(num);
//
//	return 0;
//}

//int my_strlen(char* c)
//{
//	if (*c != '\0')
//	{
//		return 1 + my_strlen(c + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char ch[] = "end";
//
//	printf("%d", my_strlen(ch));
//
//	return 0;
//}
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//
//int main()
//{
//	int n = 0;
//
//	scanf("%d", &n);
//
//	int ret = Fib(n);
//
//	printf("%d\n", ret);
//
//	return 0;
//}

//ÇàÍÜÌøÂ¥Ìİ
//int jump(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else if (n == 2)
//	{
//		return 2;
//	}
//	else
//	{
//		return jump(n - 1) + jump(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//
//	scanf("%d", &n);
//
//	int count = jump(n);
//
//	printf("%d", count);
//
//	return 0;
//}
