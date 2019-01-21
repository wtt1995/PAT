//#include<iostream>
//using namespace std;
////第一个不重复的数字
//int Hashtable[10010] = {0};
//
//int main()
//{
//	int n,a[10010],win;
//	int flag = 0;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//		Hashtable[a[i]]++;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (Hashtable[a[i]]  == 1)
//		{
//			win = a[i];
//			flag = 1;
//			break;
//		}
//	}
//	if (flag)
//		cout << win;
//	else
//		cout << "None";
//	system("pause");
//	return 0;
//}