//#include<stdio.h>
////二分查找
//
//int binarySearch(int arr[], int len, int num);
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,11,22,33,44,55,66,77,88,99,555};
//	int len = sizeof(arr) / sizeof(int);
//
//	int  num = 44;
//
//	int index = binarySearch(arr, len, num);
//	printf("%d\n", index);
//
//	return 0;
//}
//
////返回值:数据再数组中的索引
//int binarySearch(int arr[],int len ,int num)
//{
//	int min = 0;
//	int max = len - 1;
//
//	while (min <= max)
//	{
//		int mid = (min + max) / 2;
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