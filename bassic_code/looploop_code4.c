//#include<stdio.h>
//int main()
//{
//	//获取所有小于等于n的质数的数量。
//	int number;
//	printf("请输入一个整数：");
//	scanf("%d", &number);
//
//	int res = 0;
//	for (int i = 2;i <= number;i++)
//	{
//		int count = 0;
//		for (int j = 2;j < i;j++)
//		{
//			if (i % j == 0)
//			{
//				count++;
//				break;
//			}
//		}
//
//		if (count == 0)
//		{
//			res++;
//			printf("%d是一个质数\n", i);
//		}
//		/*else
//		{
//			printf("%d不是一个质数\n", i);
//
//		}*/
//	}
//	printf("一共有%d个质数\n", res);
//
//	return 0;
//}