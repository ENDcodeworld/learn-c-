#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int e = 10;
	int n = 20;
	int d = 30;
	scanf("%d %d", &e, &n);
	d = e + n;
	printf("d=%d\n", d);

	return 0;
}