//#include<stdio.h>
//
//void traverse(int arr[], int len);
//
//int main()
//{
//	//定义一个长度为8的整型数组,分别存放数值78,56,90,35,46,60,77,82,
//	//用冒泡排序算法和选择排序算法,按照从大到小顺序排序。要求先输出原数组的值,再输出排完序的数组元素。
//
//
//	int arr1[8] = { 78,56,90,35,46,60,77,82 };
//	int len = sizeof(arr1) / sizeof(int);
//
//	printf("原数组：");
//	traverse(arr1, len);
//	printf("\n");
//
//
//	for (int i = 0; i < len - 1; i++)
//	{
//		for (int j = 0; j < len - 1 - i; j++)
//		{
//			if (arr1[j] > arr1[j + 1])
//			{
//				int temp = arr1[j];
//				arr1[j] = arr1[j + 1];
//				arr1[j + 1] = temp;
//			}
//		}
//	}
//
//	printf("冒泡排序后：");
//	traverse(arr1, len);
//	printf("\n");
//
//
//	printf("\n");
//
//
//	int arr2[8] = { 78,56,90,35,46,60,77,82 };
//
//	printf("原数组：");
//	traverse(arr2, len);
//	printf("\n");
//
//	for (int i = 0; i < len - 1; i++)
//	{
//		for (int j = i + 1; j < len; j++)
//		{
//			if (arr2[i] > arr2[j])
//			{
//				int temp = arr2[i];
//				arr2[i] = arr2[j];
//				arr2[j] = temp;
//			}
//		}
//	}
//
//	printf("选择排序后：");
//	traverse(arr2, len);
//	printf("\n");
//
//
//	return 0;
//}
//
//void traverse(int arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}