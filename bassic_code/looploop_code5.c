//#include<stdio.h>
//int main()
//{
//	//幂级数列
//	int number;
//	printf("请输入一个整数：");
//	scanf("%d", &number);
//
//	long long res = 0;
//
//	for (int i = 1;i <= number;i++)
//	{
//		//内循环：表示外循环的数字要乘几次。
//		//i = 1：乘1次
//		//i = 2：乘2次
//		//i = 3：乘3次
//		long long pow = 1;
//		for (int j = 1;j <= i;j++)
//		{
//			//当i = 2 的时候，j 要 <= 2,所以pow要经历两次循环，乘两次i。
//			pow = pow * i;
//		}
//		res = res + pow;
//	}
//
//	printf("%lld\n", res);
//}