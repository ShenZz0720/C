//#include<stdio.h>
//
//void method1();
//int method2(int num1, int num2);
//int main()
//{
//	/*
//		函数指针
//	*/
//
//	//定义指针
//	void (*p1)()= method1;;
//	int (*p2)(int , int ) = method2;
//
//	//利用函数指针调用函数
//	p1();
//	int num = p2(10,20);
//	printf("%d\n", num);
//
//
//
//	return 0;
//}
//
//void method1()
//{
//	printf("method1\n");
//}
//
//int method2(int num1,int num2)
//{
//	printf("method2\n");
//	return num1 + num2;
//}