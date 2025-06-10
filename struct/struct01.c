//#include<stdio.h>
//
//struct  Student
//{
//	char name[100];
//	int age;
//};
//
//
//int main()
//{
//	struct Student stu1 = { "zhangsan",23 };
//	struct Student stu2 = { "lis",24 };
//	struct Student stu3 = { "wangwu",25 };
//
//	struct Student stuArr[3] = { stu1,stu2,stu3 };
//	
//	for (int  i = 0; i < 3; i++)
//	{
//		struct Student temp = stuArr[i];
//		printf("学生的信息为：姓名%s,年龄：%d\n", temp.name, temp.age);
//	}
//
//
//	return 0;
//
//}