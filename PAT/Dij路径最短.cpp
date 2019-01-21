//#include<iostream>
//#include<algorithm>
//using namespace std;
//const int Maxn = 510;
//const int INF = 1000000000;
//int n, m, s, t, G[Maxn][Maxn], weight[Maxn];//n 城市个数，m 道路条数， s 所在城市， t 目标城市
//int d[Maxn],nums[Maxn],w[Maxn];
//bool vis[Maxn] = {false};
//
//void Dij(int s)
//{
//	fill(d, d + Maxn, INF);
//	memset(nums, 0, sizeof(nums));
//	memset(w, 0, sizeof(w));
//	d[s] = 0;
//	w[s] = weight[s];
//	nums[s] = 1;
//	for (int i = 0; i < n; i++)
//	{
//		int u = -1, MIN = INF;
//		for (int j = 0; j < n; j++)
//		{
//			if (vis[j] == false && d[j] < MIN)
//			{
//				u = j;
//				MIN = d[j];
//			}
//		}
//		if (u == -1)
//			return;
//		vis[u] = true;
//		for (int v = 0; v < n; v++)
//		{
//			if (vis[v] == false && G[u][v] != INF)
//			{
//				if (d[u] + G[u][v] < d[v])
//				{
//					d[v] = d[u] + G[u][v];
//					w[v] = w[u] + weight[v];
//					nums[v] = nums[u];
//				}
//				else if (d[u] + G[u][v] == d[v])
//				{
//					if (w[u] + G[u][v] > w[v])
//					{
//						w[v] = w[u] + G[u][v];
//					}
//					nums[v] += nums[u];
//				}
//			}
//		}
//	}
//}
//int main()
//{
//	cin >> n >> m >> s >> t;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> weight[i];
//	}
//	int u, v;
//	fill(G[0],G[0]+Maxn*Maxn,INF);
//	for (int i = 0; i < m; i++)
//	{
//		cin >> u >> v;
//		cin >> G[u][v];
//		G[v][u] = G[u][v];
//	}
//	Dij(s);
//	cout << nums[t] << " " << w[t];
//	system("pause");
//	return 0;
//}
//
//
