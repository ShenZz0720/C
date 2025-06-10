//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char* str1 = "ABc";/*存储到只读常量区*/
//	char str2[100] = "Abc";
//	char str3[5] = {'q','w','e','r','\0'};
//	char str4[100] = "ABc";/*存储到只读常量区*/
//
//
//	printf("----strlen长度----\n");
//	//细节1：strlen在统计长度的时候，不计算结束标记
//	//细节2: 在windows中，默认情况下，一个中文占两个字节
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	int len3 = strlen(str3);
//
//	printf("%d\n", len1);
//	printf("%d\n", len2);
//	printf("%d\n", len3);
//
//
//
//	printf("----strcat拼接----\n");
//	//把第二个字符中全部内容，拷贝到第一个字符串的末尾（会保留第一个字符串）
//	//		前提1：第一个字符串是可以被修改的
//	//		前提2：第一个字符串剩余空间可以容纳拼接的字符串
//	strcat(str2, str3);
//	printf("%s\n", str2);
//	printf("%s\n", str3);
//
//
//
//	printf("----strcpy拷贝---\n");
//	//	细节：把第二个字符串中全部的内容，拷贝到第一个字符串中，把第一个字符串里面原有的内容给覆盖了
//	//		前提1：第一个字符串是可以被修改的
//	//		前提2：第一个字符串剩余空间可以容纳拼接的字符串
//	//	
//	strcpy(str2, str3);
//	printf("%s\n", str2);
//	printf("%s\n", str3);
//
//
//	printf("----strcmp比较---\n");
//	//细节：在比较的时候，要求顺序和内容要完全一致，才叫做字符串一样
//	//完全一样：0
//	//只要有一个不一样：非0
//	int res1 = strcmp(str1, str4);
//	int res2 = strcmp(str2, str4);
//	printf("%d\n", res1);
//	printf("%d\n", res2);
//	//str2 已经被修改为 "qwer"
//
//
//	printf("----strlwr变小写---\n");
//	//细节：
//	//		只能转换英文大小写，不能转换中文
//	_strlwr(str4);
//	printf("%s\n", str4);
//
//	printf("----strupr变大写---\n");
//	//细节：
//	//		只能转换英文大小写，不能转换中文
//	_strupr(str4);
//	printf("%s\n", str4);
//
//		
//
//	return 0;
//}