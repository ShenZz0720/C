//#include<stdio.h>
//int* method();
//int main()
//{
//	/*
//		Ұָ�룺ָ��ָ��Ŀռ�δ����
//		����ָ�룺ָ��ָ��Ŀռ��ѷ��䣬���Ǳ��ͷ���
//	*/
//
//	//Ұָ��
//	int a = 10;
//	int* p1 = &a;
//	printf("%p\n", p1);
//	printf("%d\n", *p1);
//
//	//p2Ұָ��
//	int* p2 = p1 + 10;
//	printf("%p\n", p2);
//	printf("%d\n", *p2);
//
//	//����ָ��
//	int* p3 = method();
//
//	printf("�ϵ�ʱ��\n");
//
//
//	printf("%p\n", p3);
//	printf("%d\n", *p3);
//
//
//	return 0;
//}
//
//int* method()
//{
//	int num = 10;
//	int* p = &num;
//	return p;
//}