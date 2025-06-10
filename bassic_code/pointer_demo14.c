//#include<stdio.h>
//
//int add(int num1, int num2);
//int subtract(int num1, int num2);
//int mutiply(int num1, int num2);
//int divide(int num1, int num2);
//int main()
//{
//	/*
//		定义加 减 乘 除 四个函数
//		用户键盘录入三个数字
//		前两个表示参与计算的数字
//		第三个表示调用的函数
//		1：加法
//		2：减法
//		3：乘法
//		4：除法
//
//		形参完全相同，返回值也要一样的函数才能放到同一个函数指针数组当中
//	*/
//
//	//定义一个数组去装四个函数指针
//	//函数指针数组
//	int (*arr[4])(int, int) = { add,subtract,mutiply,divide };
//
//	//用户录入三个数据
//	printf("请录入两个数字参与计算\n");
//	int num1;
//	int num2;
//	scanf("%d %d", &num1, &num2);
//
//	//printf("%d\n",num1);
//	//printf("%d\n", num2);
//
//	int choose;
//	printf("请录入一个数字表示要进行的计算(1：加法; 2：减法; 3：乘法; 4：除法)\n");
//	scanf("%d", &choose);
//
//	//根据用户选择调用不同函数
//	//获取数组指针，根据数组指针来取到里面的函数
//	int res = (arr[choose - 1])(num1 ,num2);
//
//	printf("运算结果为：%d\n", res);
//
//	return 0;
//}
//
//int add(int num1, int num2)
//{
//	return num1 + num2;
//}
//
//int subtract(int num1, int num2)
//{
//	return num1 - num2;
//}
//
//int mutiply(int num1, int num2)
//{
//	return num1 * num2;
//}
//
//int divide(int num1, int num2)
//{
//	return num1 / num2;
//}