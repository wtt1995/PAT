//#include<iostream>
//using namespace std;
//const int N = 1010;
//int Hashtable[N] = { 0 };
//
//int main()
//{
//	int n,m,a;
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a;
//		++Hashtable[a];
//	}
//	for (int i = 1; i < m; i++)
//	{
//		if (Hashtable[i] && Hashtable[m - i])
//		{
//			if (i == m - i && Hashtable[i] <= 1)
//				continue;
//
//			cout << i << " " << m - i;
//			system("pause");
//			return 0;
//		}
//	}
//	cout << "No Solution\n";
//	system("pause");
//	return 0;
//}