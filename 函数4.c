#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//void Add(int* p)
//{
//	(*p)++;
//
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//
//	Add(&num);
//	printf("%d\n", num);
//
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}
//嵌套调用
//void new_line()
//{
//	printf("快乐\n");
//}
//void three_line()
//{
//	int a = 0;
//	
//	for ( a = 1; a <= 5; a++)
//	{
//		new_line();
//	}
//
//}
//
//int main()
//{
//	three_line();
//
//	return 0;
//}
//链式访问
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//
//	return 0;
//}
//简易的计算器
#include"add.h"
#include"sum.h"
int main()
{
	int a = 0;
	int b = 0;
	printf("输入两个数:");
	scanf("%d %d", &a, &b);
	int c = Add(a, b);
	int d = sum(a, b);

	printf("%d\n", c);
	printf("%d\n", d);

	return 0;
}