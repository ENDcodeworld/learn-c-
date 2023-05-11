#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int goal = 1;
//	int sum = 0;
//	for ( a = 1; a <=3; a++)
//	{
//		goal *= a;
//		sum += goal;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//#include<string.h>
//#include<Windows.h>
//int main()
//{
//	char arr1[] = "鸡你太美";
//	char arr2[] = "########";
//	int left = 0;下标
//	int right = strlen长度(arr1) - 1;
//	while(left<= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	char answer[10] = { 0 };
//
//	for (i = 1;i <= 3; i++)
//	{
//		printf("今年的游戏最佳是:>");
//		scanf("%s", answer);
//
//		if( strcmp (answer , "王国之泪") == 0)
//		{
//			printf("实至名归\n");
//			break;
//			i++;
//		}
//		else
//		{
//			printf("答案错误，重新输入！\n");
//		}
//	}
//	if (i ==  4)
//	{
//		printf("退出程序\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	char music[10] = { 0 };
//	
//	for ( i = 1; i <= 3; i++)
//	{
//		printf("输入歌曲名:>");
//		scanf("%s", music);
//		if ( strcmp(music, "心里裹着光") ==0)
//		{
//			printf("励志曲目\n");
//			break;
//			i++;
//		}
//		else
//		{
//			printf("答错歌曲\n");
//		}
//		if (i == 4)
//		{
//			printf("退出这个舞台\n");
//		}
//
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	char game[100] = { 0 };
//	for ( i = 1; i <= 100; i++)
//	{
//		printf("数字是:>");
//		scanf("%s", game);
//		if (strcmp(game ,"26") == 0)
//		{
//			printf("回到正确\n");
//		}
//		else
//		{
//			printf("你猜错了");
//		}
//		if (i != 0) 
//		{
//			printf("不玩了,玩玩玩\n");
//		}
//	}
//	 
//	return 0;
//}
#include<stdlib.h>
#include<time.h>


void menu()
{
	printf("1.开始新游戏*****\n");
	printf("2.继续游戏*******\n");
	printf("3.选项***********\n");
	printf("4.退出游戏*******\n");

}
void game()
{
	int guess = 0;
	int ret = rand() %100+1;
	printf("%d\n", ret);
	while (1)
	{
		printf("猜猜数字:>\n");
		scanf("%d", &guess);
		if (ret > guess)
		{
			printf("猜小了\n");
		 }
		else if (ret < guess)
		{
			printf("猜大了\n");

		}
		else if(ret == guess)
		{
			printf("猜对了\n");
			break;
		}
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	int s = 0;
	do
	{
		menu();
		printf("选择游戏栏目:\n");
		scanf("%d", &s);
		switch (s)
		{
		case 1:game();
			break;
		case 2:printf("继续游戏\n");
			break;
		case 3:printf("选项\n");
			break;
		case 4:printf("退出游戏\n");
		default:
			printf("选择错误\n");
			break;
		}


	} while (s);


	return 0;

}