//#include<stdio.h>
//int main()
//{
//	//�ݼ�����
//	int number;
//	printf("������һ��������");
//	scanf("%d", &number);
//
//	long long res = 0;
//
//	for (int i = 1;i <= number;i++)
//	{
//		//��ѭ������ʾ��ѭ��������Ҫ�˼��Ρ�
//		//i = 1����1��
//		//i = 2����2��
//		//i = 3����3��
//		long long pow = 1;
//		for (int j = 1;j <= i;j++)
//		{
//			//��i = 2 ��ʱ��j Ҫ <= 2,����powҪ��������ѭ����������i��
//			pow = pow * i;
//		}
//		res = res + pow;
//	}
//
//	printf("%lld\n", res);
//}