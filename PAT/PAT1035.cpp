//#include<iostream>
//#include<cstring>
//using namespace std;
//struct Account
//{
//	char name[15];
//	char password[15];
//	int flag = 0;
//}account[1010];
//
//int main()
//{
//	int n, number_modified = 0;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> account[i].name;
//		cin >> account[i].password;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		int j = 0;
//		while (account[i].password[j] != '\0')
//		{
//			if (account[i].password[j] == '1')
//			{
//				account[i].password[j] = '@';
//				account[i].flag = 1;
//			}
//			else if (account[i].password[j] == '0')
//			{
//				account[i].password[j] = '%';
//				account[i].flag = 1;
//			}
//			else if (account[i].password[j] == 'l')
//			{
//				account[i].password[j] = 'L';
//				account[i].flag = 1;
//			}
//			else if (account[i].password[j] == 'O')
//			{
//				account[i].password[j] = 'o';
//				account[i].flag = 1;
//			}
//			j++;
//		}
//		if (account[i].flag == 1)
//			number_modified++;
//	}
//	if (number_modified == 0)
//	{
//		if (n == 1)
//			printf("There is %d account and no account is modified", n);
//		else
//			printf("There are %d accounts and no account is modified", n);
//	}
//	else
//		printf("%d\n", number_modified);
//	for (int i = 0; i < n; i++)
//	{
//		if (account[i].flag == 1)
//		{
//			cout << account[i].name << " " << account[i].password << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}