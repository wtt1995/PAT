//#include<iostream>
//#include<stdio.h>
//#include<cstring>
//#include<algorithm>
//using namespace std;
//struct Book
//{
//	char ID[8];
//	char Title[81];
//	char Author[81];
//	char Keyword[5][11];
//	char Pushlier[81];
//	char Year[5];
//}book[10000];
//bool cmp(Book a, Book b)
//{
//	return strcmp(a.ID, b.ID) < 0;
//}
//int main()
//{
//	int m, n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> book[i].ID;
//		getchar();
//		cin.getline(book[i].Title, 81);
//		cin.getline(book[i].Author, 81);
//		for (int j = 0; j < 5; j++)
//		{
//			cin >> book[i].Keyword[j];
//			if (getchar() == '\n')
//				j = 5;
//		}
//		cin.getline(book[i].Pushlier,81);
//		cin >> book[i].Year;
//	}
//	sort(book, book + n, cmp);
//	cin >> m;
//	char quene[1000];
//	char query[1000][81];
//	for (int i = 0; i < m; i++)
//	{
//		cin >> quene[i];
//		cin.get();
//		cin.get();
//		cin.getline(query[i], 81);
//	}
//	bool flag = false;
//	for (int i = 0; i < m; i++)
//	{
//		switch (quene[i])
//		{
//		case '1': {
//			// 书名
//			printf("%c: %s\n", quene[i], query[i]);
//			for (int j = 0; j < n; j++)
//			{
//				if (strcmp(query[i], book[j].Title) == 0)
//				{
//					printf("%s\n", book[j].ID);
//					flag = true;
//				}
//			}
//			if (flag == false)
//			{
//				printf("Not Found\n");
//			}
//			else
//				flag = false;
//			break;
//		}
//		case '2': {
//			//作者
//			printf("%c: %s\n", quene[i], query[i]);
//			for (int j = 0; j < n; j++)
//			{
//				if (strcmp(query[i], book[j].Author) == 0)
//				{
//					printf("%s\n", book[j].ID);
//					flag = true;
//				}
//			}
//			if (flag == false)
//			{
//				printf("Not Found\n");
//			}
//			else
//				flag = false;
//
//			break;
//		}
//		case '3': {
//			//关键词
//			printf("%c: %s\n", quene[i], query[i]);
//			for (int j = 0; j < n; j++)
//			{
//				for (int k = 0; k < 5; k++)
//				{
//					if (strcmp(query[i], book[j].Keyword[k]) == 0)
//					{
//						printf("%s\n", book[j].ID);
//						flag = true;
//					}
//				}
//			}
//			if (flag == false)
//			{
//				printf("Not Found\n");
//			}
//			else
//				flag = false;
//
//			break;
//		}
//		case '4': {
//			//出版社
//			printf("%c: %s\n", quene[i], query[i]);
//			for (int j = 0; j < n; j++)
//			{
//				if (strcmp(query[i], book[j].Pushlier) == 0)
//				{
//					printf("%s\n", book[j].ID);
//					flag = true;
//				}
//			}
//			if (flag == false)
//			{
//				printf("Not Found\n");
//			}
//			else
//				flag = false;
//			break;
//		}
//		case '5': {
//			//年份
//			printf("%c: %s\n", quene[i], query[i]);
//			for (int j = 0; j < n; j++)
//			{
//				if (strcmp(query[i], book[j].Year) == 0)
//				{
//					printf("%s\n", book[j].ID);
//					flag = true;
//				}
//			}
//			if (flag == false)
//			{
//				printf("Not Found\n");
//			}
//			else
//				flag = false;
//			break;
//		}
//		}
//	}
//
//
//
//	system("pause");
//	return 0;
//}
//
