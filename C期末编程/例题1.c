//#include<stdio.h>
//
//double surface_area(double r, double h);
//
//int main()
//{
//	//在main函数中，从键盘输入一个半径r，输入高度h, 调用函数，能返回圆柱体的表面积。最后保存文件为s.c
//
//	//定义变量
//	double r;
//	double h;
//
//	//获取用户输入
//	printf("请输入半径：");
//	scanf("%lf",&r);
//	printf("\n");
//	printf("请输入高度：");
//	scanf("%lf", &h);
//	printf("\n");
//
//
//	//调用函数
//	double s = surface_area(r, h);
//
//	//输出打印表面积
//	printf("圆柱体的表面积是：%lf\n", s);
//
//	return 0;
//}
//
//double surface_area(double r, double h)
//{
//	//圆柱体表面积计算
//	double s = 2 * 3.14 * r * r + 2 * 3.14 * r * h;
//	return s;
//}