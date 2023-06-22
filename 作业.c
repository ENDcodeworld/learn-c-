#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int reverse_string(char* str)
//{
//	char* tmp = *str;
//	int len = my_strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (my_strlen(str + 1) >= 2)
//	{
//		reverse_string(str + 1);
//	}
//	*(str + len - 1) = tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//
//	printf("%s\n", arr);
//	return 0;
//}
//int Digitsum(int n)
//{
//	if (n > 9)
//	{
//		return Digitsum(n / 10) + n % 10;
//
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	int num = 1234;
//	int sum = Digitsum(num);
//	printf("%d\n", sum);
//	return 0;
//}
//想办法把abcdef倒转成fedcba
int my_strlen(char* str)//求出字符的长度
{
	int count = 0;//用一个变量去算出它的长度
	while (*str != '\0')//因为字符数是从左到右，如果=='\0'，
		//也就意味着这个长度的大小到这为止。
	{
		count++;
		str++;
	}
	return count;
}
//复习
void reserve_string(char* str)
{
	char tmp = *str;//把abcdef的a拿出来放到tmp上；
	int len = my_strlen(str);//用len表示整个字符的长度；
	*str = *(str + len - 1);//然后把f放到a上去；
	*(str + len -1) = '\0';//然后先别急着放a，先把f之前的位置用\0放在那先；
	if (my_strlen(str+1) >= 2)//然后用递归把里面bcde的数倒过来；
	{//只要是大于或等于两个数，就开始递归，因为只有两个数的情况下才有意义递归；
		reserve_string(str+1);

	}
	*(str + len - 1) = tmp;//最后再把a放上去，完成从abcdef到fedcba的变化。


}
int main()
{
	char arr[] = "abcdef";
	reserve_string(arr);//给出函数
	printf("%s\n", arr);
	return 0;
}