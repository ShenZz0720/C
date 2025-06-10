//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	/*
//		已知正确的用户名和密码，请用程序实现模拟用户登录
//			总共给第三次机会，登录之后，给出相应提示
//	*/
//	char rightusername[100] = "zhangsan";
//	char rightpassword[100] = "szz123";
//
//	for (int i = 1; i <= 3; i++)
//	{
//		char username[100];
//		printf("请输入用户名:");
//		scanf("%s",username);
//
//		char password[100];
//		printf("请输入密码:");
//		scanf("%s", password);
//
//
//		if (!strcmp(username, rightusername) && !strcmp(password, rightpassword))
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			if (i == 3)
//			{
//				printf("用户%s被锁定",username);
//			}
//			else
//			{
//				printf("登录失败，还剩下%d次机会\n", 3 - i);
//			}
//		}
//	}
//
//
//	
//
//
//
//	return 0;
//}