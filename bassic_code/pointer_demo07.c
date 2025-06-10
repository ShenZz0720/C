//#include<stdio.h>
//void swap(void* p1, void* p2, int len);
//int main()
//{
//	/*
//		特殊类型指针：void 指针
//		无法获取数据，无法计算，但是可以接受任意地址
//	*/
//
//	int a = 10;
//	short b = 20;
//
//	int* p1 = &a;
//	short* p2 = &b;
//
//	printf("%d\n", *p1);
//	printf("%d\n", *p2);
//
//	//不同类型指针之间不能互相赋值，void除外
//	void* p3 = p1;
//	void* p4 = p2;
//	//缺点：void指针无法获取变量里的数据，也不能进行加减计算
//
//
//	int c = 100;
//	int d = 200;
//
//	swap(&c, &d, 4);
//
//	printf("c = %d ,d = %d \n", c, d);
//
//
//	return 0;
//}
//	
////函数：用来交换两个变量记录数据
////修改函数，更具有通用性
//void swap(void* p1, void* p2, int len)
//{
//	//把void类型指针转换成char类型
//	char* pc1 = p1;
//	char* pc2 = p2;
//
//	char temp = 0;
//
//	//以字节为单位，一个字节一个字节的进行交换
//	for (int i = 0; i < len; i++)
//	{
//		temp = *pc1;
//		*pc1 = *pc2;
//		*pc2 = temp;
//
//		pc1++;
//		pc2++;
//	}
//}