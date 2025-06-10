//#include <stdio.h>
//
//order(int arr[], int len, int num);
//
//int main()
//{
//	int arr[] = {44,45,889,6,2,34,4,7,5,1,3,48,4,31,5,489,7,351,3,21,3,14,56,46851,2310,};
//	int len = sizeof(arr) / sizeof(int);
//
//	int num = 56;
//
//	int index = order(arr, len, num);
//
//	printf("%d\n",index);
//
//	return 0;
//}
//
//int order(int arr[], int len, int num)
//{
//	for (int i = 0;i < len;i++)
//	{
//		if (arr[i] == num)
//		{
//			return i;
//		}
//	}
//	return - 1;
//}