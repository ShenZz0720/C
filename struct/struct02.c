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
//	//printf("ѧ������Ϣ�޸�Ϊ��%s, %d\n", stu.name, stu.age);
//
//
//
//	method2(&stu);
//	printf("ѧ������Ϣ�޸�Ϊ��%s, %d\n", stu.name, stu.age);
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
//	printf("���յ��ĳ�ʼ����Ϊ��%s,%d\n", st.name, st.age);
//
//	printf("������Ҫ�޸ĵ����֣�\n");
//	scanf("%s", st.name);
//	printf("������Ҫ�޸ĵ����䣺\n");
//	scanf("%d", &st.age);
//
//	printf("�޸ĺ�ĳ�ʼ����Ϊ��%s,%d\n", st.name, st.age);
//
//}
//
//
//
////ָ���м�¼����main������stu���ڴ��ַ
//void method2(S* p)
//{
//	printf("���յ��ĳ�ʼ����Ϊ��%s,%d\n", (*p).name, (*p).age);
//
//	printf("������Ҫ�޸ĵ����֣�\n");
//	scanf("%s", (*p).name);
//	printf("������Ҫ�޸ĵ����䣺\n");
//	scanf("%d", &((*p).age));
//
//	printf("�޸ĺ�ĳ�ʼ����Ϊ��%s,%d\n", (*p).name, (*p).age);
//
//}