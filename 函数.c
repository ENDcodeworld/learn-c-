#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//
//int main()
//{
//	char a[40] = "鸡你太美，贝贝，鸡你实在是太美";
//	char b[40];
//	char c[40];
//	strcpy(b, a);
//	strcpy(c, "每次看到你认为蠢蠢欲动");
//	printf("a:%s\n b:%s\n c:%s\n", a, b, c);
//
//	return 0;
//}
//复习系统关机
//int main()
//{
//	char kun[20] = { 0 };
//	system("shutdown -s -t 120");
//	while (1)
//	{
//      printf("系统即将关机，需要取消关机请输入:我是ikun\n");
//	  scanf("%s ", kun);    //因为数组自带地址，所有不用加&
//	  if (strcmp(kun, "我是ikun") == 0)
//	  {
//		  system("shutdown -a");
//		  break;
//	  }
//	}
//	return 0;
//}

//int main()
//{
//	char arr[20] = "张承志你好,同学";
//	memset(arr, 'x' ,6);
//	printf("%s\n", arr);
//
//
//	return 0;
//}

//练习if else
//int main()
//{
//	int x = 0;
//	
//	scanf("%d", &x);
//	//%d后面不能加\n，因为会需要两个数，如果只需一个数就不用加
//	if (x>0)
//	{
//		printf("y = 1\n");
//	}
//	else if (x==0)
//	{
//		printf("y = 0\n");
//	}
//	else if(x <= 0)//符号记得加=号
//	{
//		printf("y = -1\n");
//	}
//	return 0;
//}
void swap(int* pa, int* pb)
{
	int z = 0;
	z = *pa;
	*pa = *pb;
	*pb = z;
	
}

int main()
{
	int a = 10;
	int b = 25;
	printf("交换前%d %d\n", a, b);
	swap(&a, &b);
	printf("交换后%d %d\n", a, b);
	return 0;
}