//#include<stdio.h>
//#include<string.h>
//
//
//typedef struct student
//{
//	char name[100];
//	int age;
//}S;
//
//
//void method(S st);
//void method2(S* p);
//
//int main()
//{
//
//
//	S stu;
//
//	strcpy(stu.name, "aaa");
//	stu.age = 0;
//
//	//method(stu);
//
//	//printf("学生的信息修改为：%s, %d\n", stu.name, stu.age);
//
//
//
//	method2(&stu);
//	printf("学生的信息修改为：%s, %d\n", stu.name, stu.age);
//
//
//
//	return 0;
//
//}
//
//
//void method(S st)
//{																
//	printf("接收到的初始数据为：%s,%d\n", st.name, st.age);
//
//	printf("请输入要修改的名字：\n");
//	scanf("%s", st.name);
//	printf("请输入要修改的年龄：\n");
//	scanf("%d", &st.age);
//
//	printf("修改后的初始数据为：%s,%d\n", st.name, st.age);
//
//}
//
//
//
////指针中记录的是main函数中stu的内存地址
//void method2(S* p)
//{
//	printf("接收到的初始数据为：%s,%d\n", (*p).name, (*p).age);
//
//	printf("请输入要修改的名字：\n");
//	scanf("%s", (*p).name);
//	printf("请输入要修改的年龄：\n");
//	scanf("%d", &((*p).age));
//
//	printf("修改后的初始数据为：%s,%d\n", (*p).name, (*p).age);
//
//}