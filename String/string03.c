//#include<stdio.h>
//int main()
//{
//	/*
//		定义一个数组存储5个学生的名字并进行遍历
//
//		字符串的底层其实就是字符数组
//		把多个字符数组，放入到一个大的数组当中
//		二维数组
//	*/
//
//	//定义一个二维数组，存储多个学生的名字
//	char strArr[5][100] =
//	{
//		"zhangsan",
//		"lisi",
//		"wangwu",
//		"zhaoliu",
//		"qianqi"
//	};
//
//	for (int i = 0; i < 5; i++)
//	{
//		char* str = strArr[i];
//		printf("%s\n", str);
//	}
//
//	printf("\n");
//
//	//第二种方式
//	//指针数组
//	char* strArr2[] =
//	{
//		"zhangsan",
//		"lisi",
//		"wangwu",
//		"zhaoliu",
//		"qianqi"
//	};
//
//	//遍历指针数组
//	for (int i = 0; i < 5; i++)
//	{
//		char* str = strArr2[i];
//		printf("%s\n", str);
//	//% s 需要的是地址：% s 的语义是“从某个地址开始输出整个字符串”
//	//所以在这里str指针指向strArr[i]的首地址，也就不需要*解引用运算符
//	}
//
//
//	return 0;
//}