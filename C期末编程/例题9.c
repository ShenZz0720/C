//#include<stdio.h>
//
//void traverse(int arr[], int len);
//
//int main()
//{
//	//����һ������Ϊ8����������,�ֱ�����ֵ78,56,90,35,46,60,77,82,
//	//��ð�������㷨��ѡ�������㷨,���մӴ�С˳������Ҫ�������ԭ�����ֵ,����������������Ԫ�ء�
//
//
//	int arr1[8] = { 78,56,90,35,46,60,77,82 };
//	int len = sizeof(arr1) / sizeof(int);
//
//	printf("ԭ���飺");
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
//	printf("ð�������");
//	traverse(arr1, len);
//	printf("\n");
//
//
//	printf("\n");
//
//
//	int arr2[8] = { 78,56,90,35,46,60,77,82 };
//
//	printf("ԭ���飺");
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
//	printf("ѡ�������");
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