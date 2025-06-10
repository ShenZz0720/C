//#include<stdio.h>
//
//int main()
//{
//	//水仙花数
//
//	//定义变量
//	int ge;
//	int shi;
//	int bai;
//
//	//记数
//	int count = 0;
//
//	//遍历100到999中的水仙花数
//	for (int i = 100; i < 1000; i++)
//	{
//		//分别获取 个 十 百 位数
//		bai = i / 100;
//		shi = i / 10 % 10;
//		ge = i % 10;
//
//		//判断是否为水仙花数
//		if (i == ge * ge * ge + shi * shi * shi + bai * bai * bai )
//		{
//			//如果是水仙花数 则count + 1 
//			count++;
//			//打印水仙花数
//			printf("%d\n", i);
//		}
//	}
//	printf("水仙花数共有%d个\n", count);
//
//
//	return 0;
//}