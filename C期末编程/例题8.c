//#include<stdio.h>
//
//int average(int arr[], int len);
//int Max(int arr[], int len);
//int Min(int arr[], int len);
//
//int main()
//{
//	//��ȫ��ͬѧ��8�ˣ�8�˵ĳɼ��ֱ���78��56��90��35��46��60��77��82��
//	//ͳ�Ʋ����ȫ��ƽ���֡���߷�������ͷ֣�
//	//����ҳ�����8���ɼ��г���ƽ��ֵ����Щ���ֲ���ӡ������
//
//	int arr[8] = {78,56,90,35,46,60,77,82};
//	int len = sizeof(arr) / sizeof(int);
//
//	//���ú���
//	int max = Max(arr,len);
//	int min = Min(arr, len);
//	int avg = average(arr, len);
//
//	printf("��߷��ǣ�%d\n", max);
//	printf("��ͷ��ǣ�%d\n", min);
//	printf("ƽ�����ǣ�%d\n", avg);
//
//
//	printf("����ƽ���ֵ��У�");
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