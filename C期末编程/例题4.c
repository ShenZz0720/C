//#include<stdio.h>
////任给一个日期，计算得出该日期是该年的第几天。（提示：闰年2月份为29天，非闰年2月份为28天）定义日期结构如下：
//int data_of_year(struct data d);	
//								
////定义结构体
//typedef struct data
//{
//	int year;
//	int month;
//	int day;
//}d;
//
//int main()
//{
//	d temp;
//	
//	//获取用户输入
//	printf("请输入一个日期（年 月 日）：");
//	scanf("%d" "%d" "%d", &temp.year, &temp.month, &temp.day);
//
//	//调用函数
//	int res = data_of_year(temp);
//	
//	//打印输出
//	printf("这是%d年的第%d天。", temp.year, res);
//
//	return 0;
//}
//
//
////计算函数
//int data_of_year(struct data d)
//{
//	//定义数组存储天数
//	int arr[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	int len = sizeof(arr) / sizeof(int);
//
//	int total = 0;
//
//	//遍历数组
//	for (int i = 0; i < d.month - 1; i++)
//	{
//		//累加前几个月的天数
//		total += arr[i];
//	}
//
//	//加上当月的天数
//	total += d.day;
//
//	//当year是闰年的时候，比2月大的要多加一天
//	if (d.month > 2 && (d.year % 400 == 0 || (d.year % 4 == 0 && d.year % 100 != 0)))
//	{
//		total += 1;
//	}
//
//	return total;
//}