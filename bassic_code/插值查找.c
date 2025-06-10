//#include<stdio.h>
////插值查找
//
//int interpolationSearch(int arr[], int len, int num);
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10,11};
//	int len = sizeof(arr) / sizeof(int);
//
//	int  num = 5;
//
//	int index = binarySearch(arr, len, num);
//	printf("%d\n", index);
//
//	return 0;
//}
//
////返回值:数据再数组中的索引
//int interpolationSearch(int arr[], int len, int num)
//{
//	int min = 0;
//	int max = len - 1;
//
//	while (min <= max)
//	{
//		int mid = min + (num - arr[min]) / (arr[max] - arr[min]) * (max - min);
//		if (arr[mid] < num)
//		{
//			min = mid + 1;
//		}
//		else if (arr[mid] > num)
//		{
//			max = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//
//	return -1;
//}