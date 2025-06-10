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
//	printf("学生的信息为：\n");
//	printf("学生的姓名为：%s\n",stu.name);
//	printf("学生的年龄为：%d\n", stu.age);
//	printf("学生的性别为：%c\n", stu.gender);
//	printf("学生的身高为：%lf\n", stu.height);
//
//	printf("手机号为：%s\n", stu.msg.phone);
//	printf("邮箱为：%s\n", stu.msg.mail);
//
//	st stu2 = { "lisi",24,'F',168,{"156478646","sanfiusafh@qq.com"} };
//
//
//	printf("学生的信息为：\n");
//	printf("学生的姓名为：%s\n", stu2.name);
//	printf("学生的年龄为：%d\n", stu2.age);
//	printf("学生的性别为：%c\n", stu2.gender);
//	printf("学生的身高为：%lf\n", stu2.height);
//
//	printf("手机号为：%s\n", stu2.msg.phone);
//	printf("邮箱为：%s\n", stu2.msg.mail);
//
//
//	return 0;
//}