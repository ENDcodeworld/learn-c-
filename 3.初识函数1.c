#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	long a = 0;
	double b= 0;
	printf("%d\t", sizeof(long double));

	return 0;
}
int main()
{
	int sum;
	int A;
      'A' + 32 = sum;
	printf("%d\t", sum);
	return 0;
}
int main()
{
	int a, b, c;
	int sum;
	a = b = c=5;
	sum = a + c - b;
	printf("%d\t", sum);
	printf("%d\b", a); 
	printf("%d\t", sum);
	printf("%d\r", a);

	return 0;
}
#define pai 3.14
int main()
{

	double r, s, v;
	printf("Enter r:");
	scanf("%lf", &r);
	s = 4.0 * pai * r * r;
	v = 4.0 / 3.0 * pai * r * r * r;
	printf("s=%f,v=%f\n", s, v);


	return 0;
}
int main()
{
	int a = (int) 3.5;

	printf("%d\n", a);
	return 0;
}
void test()
{
	int a = 2;
	a++;
	printf("%d", a);
	
}

int main ()   
{
	int i = 0;
	while (i < 10)
	{
		test();
			i++;

	}

	return 0;
}

void test()
{
	static  int b = 1;
	b++;
		printf("%d\n", b);
}



int main()
{
	int a = 2;
	while (a <= 20)
	{
		test();
		a++;
	}

	return 0;
}
#define add(x,y) ((x)+(y))
int main()
{
	printf("%d\n", 4 * add(4, 5));

	return 0;
}