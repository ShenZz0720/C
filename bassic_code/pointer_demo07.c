//#include<stdio.h>
//void swap(void* p1, void* p2, int len);
//int main()
//{
//	/*
//		��������ָ�룺void ָ��
//		�޷���ȡ���ݣ��޷����㣬���ǿ��Խ��������ַ
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
//	//��ͬ����ָ��֮�䲻�ܻ��ำֵ��void����
//	void* p3 = p1;
//	void* p4 = p2;
//	//ȱ�㣺voidָ���޷���ȡ����������ݣ�Ҳ���ܽ��мӼ�����
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
////������������������������¼����
////�޸ĺ�����������ͨ����
//void swap(void* p1, void* p2, int len)
//{
//	//��void����ָ��ת����char����
//	char* pc1 = p1;
//	char* pc2 = p2;
//
//	char temp = 0;
//
//	//���ֽ�Ϊ��λ��һ���ֽ�һ���ֽڵĽ��н���
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