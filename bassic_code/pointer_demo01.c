//#include<stdio.h>
//
//void getMaxAndMin(int arr[], int len, int* max, int* min);
//
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 74, 8, 9, 5, 4, 6, 45, 16, 1, 351, 84, 5, 4, 2, 1, 21 };
//	int len = sizeof(arr) / sizeof(int);
//	int max = arr[0];
//	int min = arr[0];
//
//	getMaxAndMin(arr ,len ,&max ,&min);
//
//	printf("最大值为 % d\n", max);
//	printf("最小值为 % d\n", min);
//
//
//	return 0;
//}
//
//void getMaxAndMin(int arr[], int len, int* max, int* min)
//{
//	*max = arr[0];
//
//	for (int i = 1 ;i < len; i++)
//	{
//		if (arr[i] > *max)
//		{
//			*max = arr[i];
//		}
//	}
//
//	*min = arr[0];
//	for (int i = 1 ; i < len; i++)
//	{
//		if (arr[i] < *min)
//		{
//			*min = arr[i];
//		}
//	}
//}