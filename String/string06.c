#include<stdio.h>
#include<string.h>
int main()
{
	/*
		����¼��һ���ַ�����ͳ�Ƹ��ַ����д�д��ĸ�ַ���Сд��ĸ�ַ��������ַ����ֵĴ���
		�������������ַ���
	*/

	printf("������һ���ַ�����\n");
	char str[100];
	scanf("%s", str);

	//������˼��
	// ����a       a++
	//�����ַ���
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

	printf("��д�ַ�������%d��\n", big);
	printf("Сд�ַ�������%d��\n", small);
	printf("�����ַ�������%d��\n", number);



	return 0;
}