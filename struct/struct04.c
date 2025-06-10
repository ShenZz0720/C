//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//
//typedef struct spot
//{
//	char name[100];
//	int count;
//}S;
//
//int main()
//{
//	S arr[4] = { {"A",0},{"B",0},{"C",0},{"D",0} };
//
//	srand(time(NULL));
//
//	for (int  i = 0; i < 80; i++)
//	{
//		int choose = rand() % 4;
//		arr[choose].count++;
//
//	}
//
//	int max = arr[0].count;
//	for (int i = 1; i < 4; i++)
//	{
//		S temp = arr[i];
//		if (arr[i].count > max)
//		{
//			max = arr[i].count;
//		}
//	}
//
//
//	for (int i = 1; i < 4; i++)
//	{
//		S temp = arr[i];
//		if (arr[i].count == max)
//		{
//			printf("投票最多的景点为：%s 共%d张票\n", temp.name, temp.count);
//			break;
//		}
//	}
//
//
//
//	for (int i = 0; i < 4; i++)
//	{
//		S temp = arr[i];
//		printf("%s %d\n", temp.name, temp.count);
//	}
//
//
//
//
//
//	return 0;
//}