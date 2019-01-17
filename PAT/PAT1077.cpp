//#include<iostream>
//#include<cstring>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	cin.get();
//	char str[110][260];
//	for (int i = 0; i < n; i++)
//		cin.getline(str[i], 260);
//	char com[256];
//	int num = 0;
//	int minlen = strlen(str[0]);
//	for (int i = 0; i < n; i++)
//	{
//		int k = strlen(str[i]);
//		if (minlen < k)
//			minlen = k;
//	}
//	for (int i = 0; i < minlen; i++)
//	{
//		int flag = 1;
//		char ch = str[0][strlen(str[0]) - i - 1];
//		for (int j = 1; j < n; j++)
//		{
//			char ch2 = str[j][strlen(str[j]) - i - 1];
//			if (ch != ch2)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//			com[num++] = ch;
//		else
//			break;
//	}
//	if (num == 0)
//		printf("nai");
//	else
//	{
//		for (int i = num - 1; i >= 0; i--)
//			cout << com[i];
//	}
//	system("pause");
//	return 0;
//}