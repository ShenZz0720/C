//#define _CRT_SECURE_NO_WARNINGS 1 
//#include<stdio.h>
//
//void Move(int arr[], int len, int* max, int* min);
//int* Find_min(int arr[], int len);
//int* Find_max(int arr[], int len);
//
//int main()
//{
//	int arr[10] = { 0 };
//	int len = sizeof(arr) / sizeof(int);
//
//	for (int i = 0;i < len;i++)
//	{
//		printf("�������%d����:", i + 1);
//		scanf("%d", &arr[i]);
//	}
//
//	int* max = Find_max(arr,len);
//	int* min = Find_min(arr,len);
//
//	printf("���ֵΪ��%d\n", *max);
//	printf("��СֵΪ��%d\n", *min);
//
//	for (int i = 0;i < len;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//
//	Move(arr, len, max, min);
//
//	for (int i = 0;i < len;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//int* Find_min(int arr[], int len)
//{
//	int* min = &arr[0];
//	for (int i = 1;i < len;i++)
//	{
//		if (*min > arr[i])
//		{
//			min = &arr[i];
//		}
//	}
//	return min;
//}
//int* Find_max(int arr[], int len)
//{
//	int* max = &arr[0];
//	for (int i = 1;i < len;i++)
//	{
//		if (*max < arr[i])
//		{
//			max = &arr[i];
//		}
//	}
//	return max;
//}
//
//void Move(int arr[], int len,int* max,int* min)
//{
//	int temp = *max;
//	*max = arr[len - 1];
//	arr[len - 1] = temp;
//	// ������Сֵ�����鿪ͷ��Ԫ��
//	int num = *min;
//	*min = arr[0];
//	arr[0] = num;
//}