//#include<stdio.h>
//#include<string.h>
//
//typedef struct message
//{
//	char phone[12];
//	char mail[100];
//
//}M;
//
//typedef struct student
//{
//	char name[100];
//	int age;
//	char gender;
//	double height;
//	M msg;
//}st;
//
//int main()
//{
//	st stu;
//
//	strcpy(stu.name, "zhangsan");
//	stu.age = 23;
//	stu.gender = 'M';
//	stu.height = 178;
//	
//	strcpy(stu.msg.phone ,"18959618950");
//	strcpy(stu.msg.mail, "18959618950@qq.com");
//
//	printf("ѧ������ϢΪ��\n");
//	printf("ѧ��������Ϊ��%s\n",stu.name);
//	printf("ѧ��������Ϊ��%d\n", stu.age);
//	printf("ѧ�����Ա�Ϊ��%c\n", stu.gender);
//	printf("ѧ�������Ϊ��%lf\n", stu.height);
//
//	printf("�ֻ���Ϊ��%s\n", stu.msg.phone);
//	printf("����Ϊ��%s\n", stu.msg.mail);
//
//	st stu2 = { "lisi",24,'F',168,{"156478646","sanfiusafh@qq.com"} };
//
//
//	printf("ѧ������ϢΪ��\n");
//	printf("ѧ��������Ϊ��%s\n", stu2.name);
//	printf("ѧ��������Ϊ��%d\n", stu2.age);
//	printf("ѧ�����Ա�Ϊ��%c\n", stu2.gender);
//	printf("ѧ�������Ϊ��%lf\n", stu2.height);
//
//	printf("�ֻ���Ϊ��%s\n", stu2.msg.phone);
//	printf("����Ϊ��%s\n", stu2.msg.mail);
//
//
//	return 0;
//}