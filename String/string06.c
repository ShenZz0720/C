#include<stdio.h>
#include<string.h>
int main()
{
	/*
		键盘录入一个字符串，统计该字符串中大写字母字符，小写字母字符，数字字符出现的次数
		（不考虑其他字符）
	*/

	printf("请输入一个字符串：\n");
	char str[100];
	scanf("%s", str);

	//计数器思想
	// 变量a       a++
	//遍历字符串
	int big = 0;
	int small = 0;
	int number = 0;


	for (int i = 0; i < strlen(str); i++)
	{
		char c = str[i];

		if (c >= 'a' && c <= 'z')
		{
			small++;
		}

		else if (c >= '0' && c <= '9')
		{
			number++;
		}

		else if (c >= 'A' && c <= 'Z')
		{
			big++;
		}
	}

	printf("大写字符出现了%d次\n", big);
	printf("小写字符出现了%d次\n", small);
	printf("数字字符出现了%d次\n", number);



	return 0;
}