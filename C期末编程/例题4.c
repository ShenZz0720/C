//#include<stdio.h>
////�θ�һ�����ڣ�����ó��������Ǹ���ĵڼ��졣����ʾ������2�·�Ϊ29�죬������2�·�Ϊ28�죩�������ڽṹ���£�
//int data_of_year(struct data d);	
//								
////����ṹ��
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
//	//��ȡ�û�����
//	printf("������һ�����ڣ��� �� �գ���");
//	scanf("%d" "%d" "%d", &temp.year, &temp.month, &temp.day);
//
//	//���ú���
//	int res = data_of_year(temp);
//	
//	//��ӡ���
//	printf("����%d��ĵ�%d�졣", temp.year, res);
//
//	return 0;
//}
//
//
////���㺯��
//int data_of_year(struct data d)
//{
//	//��������洢����
//	int arr[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	int len = sizeof(arr) / sizeof(int);
//
//	int total = 0;
//
//	//��������
//	for (int i = 0; i < d.month - 1; i++)
//	{
//		//�ۼ�ǰ�����µ�����
//		total += arr[i];
//	}
//
//	//���ϵ��µ�����
//	total += d.day;
//
//	//��year�������ʱ�򣬱�2�´��Ҫ���һ��
//	if (d.month > 2 && (d.year % 400 == 0 || (d.year % 4 == 0 && d.year % 100 != 0)))
//	{
//		total += 1;
//	}
//
//	return total;
//}