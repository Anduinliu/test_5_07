 #define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//
//	c = a + b;//整形提升
//	//00000000000000000000000011001000 - a
//	//00000000000000000000000001100100 - b
//	//00000000000000000000000100101100
//	//00101100 - c
//	//00000000000000000000000000101100 - c - 原码 - 44
//	//00000000000000000000000011001000
//	//11001000 - a
//	//00000000000000000000000001100100
//	//01100100 - b
//
//	printf("%d %d", a + b, c);
//}
//int main()
//{
//	unsigned int a = 0x1234;
//	unsigned char b = *(unsigned char*)&a;
//	printf("%d\n", b);
//	return 0;
//}
//#include<string.h>
//int main()
//{
//	char a[1000] = { 0 };
//	//
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//
//	}
//	//-1 -2 .... -128 127 126 125 ... 3 2 1 0
//
//	printf("%d\n", strlen(a));//255
//
//	return 0;
//}
//题目:杨辉三角
//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1
//
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//题目:确定凶手
//A：不是我。 //1
//B：是C。    //1
//C：是D。    //0
//D：C在胡说。//1
//3人说了真话一人说了假话
//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("killer=%c\n", killer);
//		}
//	}
//	return 0;
//
//题目：赛马问题
//有36匹马，6个跑道，没有计时器，请赛马确定，36匹马中的前三名
//请问最少要比赛几次？
//
//烧香问题
//有一种香，材质不均匀，但是每一根这样的香燃烧完恰好是一个小时
//给你两根，帮我确定一个15分钟的时间段
//
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int Max = 0;
//	printf("请输入10个整数:");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	Max = arr[0];
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] > Max)
//		{
//			Max = arr[i];
//		}
//	}
//	printf("最大值为%d", Max);
//	return 0;
//}
// 辗转相除法
//int main()
//{
//	int m = 24;
//	int n = 18;
//	int r = 0;
//	while (m % n != 0)
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", r);
//	return 0;
//}
//int gcd(int x, int y)
//{
//	if (x % y == 0)
//		return y;
//	else
//		return gcd(y, x % y);
//}
//int main()
//{
//	int a = 24;
//	int b = 18;
//	int ret = gcd(a, b);
//	printf("%d\n", ret);
//	return 0;
//}
//void changeArr(int a[], int b[])
//{
//	int tmp = 0;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		tmp = a[i];
//		a[i] = b[i];
//		b[i] = tmp;
//	}
//}
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int b[5] = { 6,7,8,9,10 };
//	changeArr(a, b);
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	for (int j = 0; j < 5; j++)
//	{
//		printf("%d ", b[j]);
//	}
//	return 0;
//}
//#include<math.h>
//int main()
//{
//	printf("请输出水仙花数：\n");
//	int i = 0;
//	for (i = 100; i < 1000; i++)
//	{
//		int a = i % 10;
//		int b = (i / 10) % 10;
//		int c = i / 100;
//		if ( i == pow(a,3) + pow(b,3) + pow(c,3))
//		{
//			printf("%d ", i);
//		}
//		
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1))
//						{
//							if(a*b*c*d*e==120)
//							printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
#include<stdlib.h>
int main()
{
	//申请空间
	int* p = (int*)malloc(10 * sizeof(int));
	//使用空间
	//
	//释放空间
	free(p);
	return 0;
}