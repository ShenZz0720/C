//#include<stdio.h>
//
//int add(int num1, int num2);
//int subtract(int num1, int num2);
//int mutiply(int num1, int num2);
//int divide(int num1, int num2);
//int main()
//{
//	/*
//		����� �� �� �� �ĸ�����
//		�û�����¼����������
//		ǰ������ʾ������������
//		��������ʾ���õĺ���
//		1���ӷ�
//		2������
//		3���˷�
//		4������
//
//		�β���ȫ��ͬ������ֵҲҪһ���ĺ������ܷŵ�ͬһ������ָ�����鵱��
//	*/
//
//	//����һ������ȥװ�ĸ�����ָ��
//	//����ָ������
//	int (*arr[4])(int, int) = { add,subtract,mutiply,divide };
//
//	//�û�¼����������
//	printf("��¼���������ֲ������\n");
//	int num1;
//	int num2;
//	scanf("%d %d", &num1, &num2);
//
//	//printf("%d\n",num1);
//	//printf("%d\n", num2);
//
//	int choose;
//	printf("��¼��һ�����ֱ�ʾҪ���еļ���(1���ӷ�; 2������; 3���˷�; 4������)\n");
//	scanf("%d", &choose);
//
//	//�����û�ѡ����ò�ͬ����
//	//��ȡ����ָ�룬��������ָ����ȡ������ĺ���
//	int res = (arr[choose - 1])(num1 ,num2);
//
//	printf("������Ϊ��%d\n", res);
//
//	return 0;
//}
//
//int add(int num1, int num2)
//{
//	return num1 + num2;
//}
//
//int subtract(int num1, int num2)
//{
//	return num1 - num2;
//}
//
//int mutiply(int num1, int num2)
//{
//	return num1 * num2;
//}
//
//int divide(int num1, int num2)
//{
//	return num1 / num2;
//}