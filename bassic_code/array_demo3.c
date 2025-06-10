//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//
//int contain(int arr[], int len , int num)
//{
//	for (int i = 0;i < len; i++)
//	{
//		if (arr[i] == num)
//		{
//			return 1;
//		}
//	}
//
//	return 0;
//}
//
//
//int main()
//{
//	int arr[10] = { 0 };
//	int len = sizeof(arr) / sizeof(int);
//
//	srand(time(NULL));/*设置种子*/
//
//	for (int i = 0;i < len;)
//	{
//		int num = rand() % 100 + 1;/*生成随机数*/
//		int flag = contain(arr, len, num);
//		if (!flag)
//		{
//			arr[i] = num;
//			i++;
//		}
//		
//	}
//
//	int sum = 0;
//	for (int i = 0;i < len; i++)
//	{
//		printf("%d\n", arr[i]);
//		sum = sum += arr[i];
//	}
//
//	int count = 0;
//	double avg = sum / len;
//	for (int i = 0;i < len; i++)
//	{
//		if (arr[i] > avg)
//		{
//			count += 1;
//		}
//	}
//	printf("和为：%d\n", sum);
//	printf("平均数为：%f\n", avg);
//	printf("小于平均数的数有%d个\n", count);
//
//
//
//
//	return 0;
//}