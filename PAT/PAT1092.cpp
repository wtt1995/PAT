//#include<iostream>
//#include<cstring>
//using namespace std;
//int Hashtable[100] = { 0 };
//int charToint(char ch)
//{
//	if (ch >= '0' && ch <= '9')
//		return ch - '0';
//	else if (ch >= 'a' && ch <= 'z')
//		return ch - 'a' + 10;
//	else 
//		return ch - 'A' + 36;
//}
//int main()
//{
//	char str1[1010], str2[1010];
//	int miss = 0;
//	int flag = 0;
//	cin >> str1;
//	cin >> str2;
//	int len1 = (int)strlen(str1);
//	int len2 = (int)strlen(str2);
//	for (int i = 0; i < len1; i++)
//		Hashtable[charToint(str1[i])]++;
//	for (int i = 0; i < len2; i++)
//	{
//		Hashtable[charToint(str2[i])]--;
//		if (Hashtable[charToint(str2[i])] <0)
//		{
//			miss++;
//			flag = 1;
//		}
//	}
//	if (flag == 0)
//		cout << "Yes " << len1 - len2 << endl;
//	else
//		cout << "No " << miss << endl;
//	system("pause");
//	return 0;
//
//}