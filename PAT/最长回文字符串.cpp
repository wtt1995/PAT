//#include<iostream>
//#include<algorithm>
//#include<cstring>
//using namespace std;
//const int Maxn = 1010;
//char S[Maxn];
//int dp[Maxn][Maxn];
//int main()
//{
//	gets_s(S, Maxn);
//	int len = strlen(S), ans = -1;
//	memset(dp, 0, sizeof(dp));
//	//边界
//	for (int i = 0; i < len; i++)
//	{
//		dp[i][i] = 1;
//		if (i < len - 1)
//		{
//			if (S[i] == S[i + 1])
//			{
//				dp[i][i + 1] = 1;
//				ans = 2;
//			}
//		}
//	}
//	//状态转移方程
//	for (int L = 3; L <= len; L++)
//	{
//		for (int i = 0; i + L - 1 < len; i++)
//		{
//			int j = i + L - 1;
//			if (S[i] == S[j] && dp[i + 1][j - 1] == 1)
//			{
//				dp[i][j] = 1;
//				ans = L;
//			}
//		}
//	}
//	cout << ans << endl;
//	system("pause");
//	return 0;
//}
