//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	int arr[] = {1,2,4,5,6,8};
//	int len = sizeof(arr) / sizeof(int);
//	printf("ԭ��������Ϊ��\n");
//
//	for (int i = 0; i < len;i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//
//
//	srand(time(NULL));
//	for (int i = 0; i < len;i++)
//	{
//		int index = rand() % len;
//		int temp = arr[i];
//		arr[i] = arr[index];
//		arr[index] = temp;
//	}
//
//	printf("���Һ������Ϊ��\n");
//	for (int i = 0; i < len;i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//
//
//	return 0;
//}