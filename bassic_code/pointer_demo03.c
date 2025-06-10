//#include<stdio.h>
//
//int getremainder(int num1, int num2, int* res);
//
//int main()
//{
//	int a = 10; 
//	int b = 3;
//	int res = 0;
//
//	int flag = getremainder(a, b, &res);
//	
//	if (!flag)
//	{
//		printf("获取到的余数为：%d\n", res);
//	}
//	else
//	{
//		printf("error");
//	}
//
//	return 0;
//}
//
//int getremainder(int num1, int num2,int* res)
//{
//	if (num2 == 0)
//	{
//		return 1;
//	}
//	*res = num1 % num2;
//	return 0;
//}