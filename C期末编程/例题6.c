//#include<stdio.h>
//int main()
//{
//	//平行四边形
//	printf("平行四边形\n");
//	printf("\n");
//	
//	for (int i = 0; i < 5; i++)
//	{
//		for (int k = 0; k < i; k++)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j < 10; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	printf("------------------换行----------------------\n");
//
//
//	//倒三角形
//	printf("倒三角形\n");
//	printf("\n");
//
//	int n = 5;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 0; j < n - i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	printf("------------------换行----------------------\n");
//	
//	//菱形
//	printf("菱形\n");
//	printf("\n");
//
//	int m = 5;
//	for (int i = 1; i <= m; i++)
//	{
//		for (int k = 0; k < m - i; k++)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j < 2 * i - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	int num = m - 1;
//	for (int i = 1; i <= m - 1; i++)
//	{
//		for (int k = 0; k < i; k++)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j < num * 2 - 1; j++)
//		{
//			printf("*");
//		}
//		num--;
//		printf("\n");
//	}
//
//
//	printf("------------------换行----------------------\n");
//
//	//漏斗形
//
//	printf("漏斗形\n");
//
//	return 0;
//}