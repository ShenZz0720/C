//#include<stdio.h>
//
//int main()
//{
//	//ˮ�ɻ���
//
//	//�������
//	int ge;
//	int shi;
//	int bai;
//
//	//����
//	int count = 0;
//
//	//����100��999�е�ˮ�ɻ���
//	for (int i = 100; i < 1000; i++)
//	{
//		//�ֱ��ȡ �� ʮ �� λ��
//		bai = i / 100;
//		shi = i / 10 % 10;
//		ge = i % 10;
//
//		//�ж��Ƿ�Ϊˮ�ɻ���
//		if (i == ge * ge * ge + shi * shi * shi + bai * bai * bai )
//		{
//			//�����ˮ�ɻ��� ��count + 1 
//			count++;
//			//��ӡˮ�ɻ���
//			printf("%d\n", i);
//		}
//	}
//	printf("ˮ�ɻ�������%d��\n", count);
//
//
//	return 0;
//}