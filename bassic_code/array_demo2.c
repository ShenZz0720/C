//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//
//int main()
//{
//	int arr[10] = { 0 };
//	int len = sizeof(arr) / sizeof(int);
//
//	srand(time(NULL));/*设置种子*/
//	
//	for (int i = 0;i < len; i++)
//	{
//		int num = rand() % 100 + 1;/*生成随机数*/
//		arr[i] = num;
//	}
//
//	int sum = 0;
//	for (int i = 0;i < len; i++)
//	{
//		sum = sum += arr[i];
//	}
//
//	printf("%d\n", sum);
//
//
//
//	return 0;
//}