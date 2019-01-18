//#include<iostream>
//#include<stdio.h>
//#include<algorithm>
//#include<cstring>
//#include<string>
//using namespace std;
//const int Maxn = 1000;
////int A[Maxn], dp[Maxn];
//
////最大连续子序列和
////int main()
////{
////	int n;
////	cin >> n;
////	for (int i = 0; i < n; i++)
////	{
////		cin >> A[i];
////	}
////	dp[0] = A[0];
////	for (int i = 1; i < n; i++)
////	{
////		dp[i] = max(A[i],dp[i-1]+A[i]);
////	}
////	int k = 0;
////	for (int i = 0; i < n; i++)
////	{
////		if (dp[i] > dp[k])
////		{
////			k = i;
////		}
////	}
////	cout << dp[k] << endl;
////	system("pause");
////	return 0;
////}
//// 最长不下降子序列
////int main()
////{
////	int n;
////	cin >> n;
////	for (int i = 1; i <= n; i++)
////	{
////		cin >> A[i];
////	}
////	int ans = -1;
////	for (int i = 1; i <= n; i++)
////	{
////		dp[i] = 1;
////		for (int j = 1; j < i; j++)
////		{
////			if (A[i] >= A[j] && (dp[j] + 1 > dp[i]))
////				dp[i] = dp[j] + 1;
////		}
////		ans = max(ans, dp[i]);
////	}
////	cout << ans << endl;
////	system("pause");
////	return 0;
////}
///*
//8
//1 2 3 -9 3 9 0 11
//*/
