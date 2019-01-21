//#include<iostream>
//#include<algorithm>
//using namespace std;
//const int Maxn = 110;
//const int INF = 10010;
//struct edge
//{
//	int u, v;
//	int cost;
//}Edge[Maxn];
//bool cmp(edge a, edge b)
//{
//	return a.cost < b.cost;
//}
//int father[Maxn];
//int findFather(int x)
//{
//	int a = x;
//	while (x != father[x])
//	{
//		x = father[x];
//	}
//	while (a != father[a])
//	{
//		int z = a;
//		a = father[a];
//		father[z] = x;
//	}
//	return x;
//}
//
//int kruskal(int n, int m)
//{
//	int ans = 0, Num_edge = 0;
//	for (int i = 0; i < n; i++)
//	{
//		father[i] = i;
//	}
//	sort(Edge, Edge + m, cmp);
//	for (int i = 0; i < m; i++)
//	{
//		int faU = findFather(Edge[i].u);
//		int faV = findFather(Edge[i].v);
//		if (faU != faV)
//		{
//			father[faU] = faV;
//			ans += Edge[i].cost;
//			Num_edge++;
//			if (Num_edge == n - 1)
//				break;
//		}
//	}
//	if (Num_edge != n - 1)
//		return -1;
//	else
//		return ans;
//}
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 0; i < m; i++)
//	{
//		cin >> Edge[i].u >> Edge[i].v >> Edge[i].cost;
//	}
//	int ans = kruskal(n,m);
//	printf("%d\n",ans);
//	system("pause");
//	return 0;
//}