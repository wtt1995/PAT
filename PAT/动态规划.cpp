//#include<iostream>
//#include<algorithm>
//using namespace std;
//const int Maxn = 1000;
//int f[Maxn][Maxn], dp[Maxn][Maxn];
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= i; j++)
//		{
//			cin >> f[i][j];
//		}
//	for (int j = 1; j <= n; j++)
//		dp[n][j] = f[n][j];
//	for (int i = n - 1; i >= 1; i--)
//		for (int j = 1; j <= i; j++)
//		{
//			dp[i][j] = max(dp[i + 1][j], dp[i + 1][j + 1]) + f[i][j];
//		}
//	cout << dp[1][1] << endl;
//	system("pause");
//	return 0;
//	
//}