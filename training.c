#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include<math.h>
#define price 50
//int main()
//{
//	char al = 'd';
//	al = al - 32;
//	printf("%c\n", al);//‘d’变成‘D’
//
//	return 0;//用ASCII码转换符号变量
//}

//int main()
//{
//	int a ;
//	int sum = 0;
//	int b = 2;
//	
//	
//	for ( a = 0; a <= 5; a++)
//	{ 
//		
//		b += 1;
//		sum += b;
//		
//		printf("%d\n", sum);
//
//	}
//	return 0;
//}

//int main()
//{
//	int a;
//	a = price + 5;//使用符号常量
//	printf("%d\n", a);
//
//
//	return 0;
//}

//int main()
//{
//	int p = 3;
//	float r;
//	printf("radius=");//半径
//	scanf("%f", &r);//输入
//	printf("circunreference=%f\n", 2 * r * p);//输出周长
//	printf("area=%f", p * r * r);//输出面积
//
//
//	return 0;
//}

//
//int main()
//{
//
//	register int i = 10;
//	int* a = &i ;
//	printf("%d", *a);
//	getchar();
//
//	return 0;
//}

//int main()
//{
//	double a, b, c,s, area;
//	scanf("%lf %lf %lf", &a, &b, &c);
//	s = (a + b + c) / 2.0;
//	area = sqrt(s * (s - a) * (s - b) * (s - c));
//	printf("a=%lf\n, b=%lf\n, c=%lf\n, area=%lf\n", a, b, c, area);
//
//	return 0;
//}

//int main()
//{
//
//	printf("%c\n", getchar() + 32);
//	return 0;
//}

//int main()
//{
//	int x, y;
//	scanf("%d", &x);
//	if (x <= 0)
//	{
//		if (x < 0)//内嵌if语句
//			y = -1;
//		else(x == 0);
//		y = 0;
//	}
//	else
//		y = 1;
//	printf("x=%d\n y=%d\n", x, y);
//
//
//	return 0;
//}

//int main()
//{
//	int year, leap;
//	scanf("%d", &year);
//	if (year % 4 == 0 && year % 100 != 0)
//	{
//		leap = 1;
//		if (year % 400 == 0)
//			leap = 1;
//		else
//			leap = 0;
//	}
//	else
//	{
//		leap = 0;
//	}
//	printf("%d\n ", leap);//判断是否为闰年
//	return 0;
//}

//int main()//ax^2+bx+c=0
//{
//	int a, b, c, disc, p, q,x1,x2 ;
//	scanf("%d %d %d", &a, &b, &c);
//	disc = b * b - 4 * a * c;
//	p = -b / (2 * a);
//	q = sqrt(disc) / (2 * a);
//	x1 = p + q;
//	x2 = p - q;
//	if (a == 0)
//	{
//		printf("这不是公式\n");
//	}
//	else
//		if (disc == 0)
//		{
//			printf("有两个相等实根\n");
//		}
//		else if(disc > 0)
//	   {
//			printf("有两个不相等的实根\n");
//	   }
//		else
//		{
//			printf("没有跟\n");
//		}
//
//	return 0;
//}

//int main()
// 
//{
//	int sum, a;
//	sum = 0;
//	a = 1;
//	while (a<=100)
//	{
//		sum += a;
//		++a;
//	}
//
//	printf("%d\n %d\n", sum, a);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 100;
//	for (; ; )
//	{
//		a < b;
//		a++;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a=0, b = 0;
//	
//	while (a <= 100)
//	{
//		b += a;
//		a++;
//
//
//	}
//
//	printf("%d\n", b);
//
//	return 0;
//}

//int main()
//{
//	int n, i, j;
//	long sum, term;
//	printf("输入整数n：");
//	scanf("%d", &n);
//	for ( i = 1 ,sum = 0; i <= n; i++)
//	{
//		j = 1;
//		term = 1;
//		do
//		{
//			term *= i;
//		} while (++j<=i);//通关++j让乘的指数次数跟i持平
//		sum += term;
//	}
//	printf("sum=%ld\n", sum);
//
//
//	return 0;
//}

//int main()
//{
//	int student,one_much, all_much;
//	printf("每位学生捐款的钱：\n");
//	scanf("%d", &one_much);//每个学生交多少钱
//	for (student = 1 ,all_much = 0; all_much < 10000;student++)
//	{
//		all_much += one_much;
//	}
//	//需要多少学生才能捐够10000
//	printf("%d\n %d\n", all_much, student);
//
//	return 0;
//}


int main()
{
	int i,sum;
	for ( i = 100,sum = 1; i <= 200; i++)
	{
		if (i % 3 != 0)
		{
			printf("%d ", i);
			sum++;
		}
		else
			continue;
	}
	printf("sum=%d\n\n", sum);


	return 0;
}