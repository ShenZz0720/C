//#include<stdio.h>
//int main()
//{
//	//��ȡ����С�ڵ���n��������������
//	int number;
//	printf("������һ��������");
//	scanf("%d", &number);
//
//	int res = 0;
//	for (int i = 2;i <= number;i++)
//	{
//		int count = 0;
//		for (int j = 2;j < i;j++)
//		{
//			if (i % j == 0)
//			{
//				count++;
//				break;
//			}
//		}
//
//		if (count == 0)
//		{
//			res++;
//			printf("%d��һ������\n", i);
//		}
//		/*else
//		{
//			printf("%d����һ������\n", i);
//
//		}*/
//	}
//	printf("һ����%d������\n", res);
//
//	return 0;
//}