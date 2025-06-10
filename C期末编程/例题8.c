//#include<stdio.h>
//
//int average(int arr[], int len);
//int Max(int arr[], int len);
//int Min(int arr[], int len);
//
//int main()
//{
//	//设全班同学有8人，8人的成绩分别是78，56，90，35，46，60，77，82，
//	//统计并输出全班平均分、最高分数和最低分，
//	//最后找出在这8个成绩中超过平均值的那些数字并打印出来。
//
//	int arr[8] = {78,56,90,35,46,60,77,82};
//	int len = sizeof(arr) / sizeof(int);
//
//	//调用函数
//	int max = Max(arr,len);
//	int min = Min(arr, len);
//	int avg = average(arr, len);
//
//	printf("最高分是：%d\n", max);
//	printf("最低分是：%d\n", min);
//	printf("平均分是：%d\n", avg);
//
//
//	printf("超过平均分的有：");
//
//	for (int i = 0; i < len; i++)
//	{
//		if (arr[i] > avg)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//
//	return 0;
//}
//
//int average(int arr[], int len)
//{
//	int avg = 0;
//	for (int i = 0; i < len; i++)
//	{
//		avg += arr[i];
//	}
//	avg = avg / len;
//	return avg;
//}
//
//int Max(int arr[], int len)
//{
//	int max = arr[0];
//	for (int i = 1; i < len; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	return max;
//}
//
//int Min(int arr[], int len)
//{
//	int min = arr[0];
//	for (int i = 1; i < len; i++)
//	{
//		if (min > arr[i])
//		{
//			min = arr[i];
//		}
//	}
//	return min;
//}