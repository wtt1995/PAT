//#include<iostream>
//#include<algorithm>
//using namespace std;
//const int N = 110;
//int G[N][N], dp[N];//G 表示图，dp[i]表示以i为顶点的最长路径。
//struct Rect
//{
//	int x;
//	int y;
//}rect[N];
//
//void creatG(int n)
//{
//	memset(G, 0, sizeof(G));
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < n; j++)
//			if (rect[i].x > rect[j].x && rect[i].y > rect[j].y|| rect[i].x > rect[j].y && rect[i].y > rect[j].x)
//				G[i][j] = 1;
//}
//
//int DP(int i)
//{
//	if (dp[i] > 0)
//		return dp[i];
//	for (int j = 0; j < N; j++)
//	{
//		if (G[i][j] == 1)
//		{
//			dp[i] = max(dp[i],DP(j) + G[i][j]);
//		}
//	}
//	return dp[i];
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> rect[i].x;
//		cin >> rect[i].y;
//	}
//	memset(dp, 0, sizeof(dp));
//	creatG(n);
//	int maxn = 0;
//	for (int i = 0; i < n; i++)
//	{
//		int temp = DP(i);
//		if (maxn < temp)
//			maxn = temp;
//	}
//	cout << maxn+1 << endl;
//
//	system("pause");
//	return 0;
//}