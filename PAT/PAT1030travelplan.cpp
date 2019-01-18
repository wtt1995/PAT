#include<iostream>
using namespace std;
const int Maxn = 510;
const int INF = 1000000000;
int n, m, s, t, G[Maxn][Maxn], cost[Maxn][Maxn];
int pre[Maxn], c[Maxn], d[Maxn];
int vis[Maxn] = { false };
void Dij(int s)
{
	fill(d, d + Maxn, INF);
	fill(c, c + Maxn, INF);
	for (int i = 0; i < n; i++)
	{
		pre[i] = i;
	}
	d[s] = 0;
	c[s] = 0;
	for (int i = 0; i < n; i++)
	{
		int u = -1;
		int MIN = INF;
		for (int j = 0; j < n; j++)
		{
			if (vis[j] == false && d[j] < MIN)
			{
				u = j;
				MIN = d[j];
			}
		}
		if (u == -1) return;
		vis[u] = true;
		for (int v = 0; v < n; v++)
		{
			if (vis[v] == false && G[u][v] != INF)
			{
				if (d[u] + G[u][v] < d[v])
				{
					d[v] = d[u] + G[u][v];
					c[v] = c[u] + cost[u][v];
					pre[v] = u;
				}
				else if (d[u] + G[u][v] == d[v])
				{
					if (c[u] + cost[u][v] < c[v])
					{
						c[v] = c[u] + cost[u][v];
						pre[v] = u;
					}

				}
			}
		}

	}

}

//´òÓ¡Â·¾¶
void DFS(int v)
{
	if (v == s)
	{
		printf("%d ",v);
		return;
	}
	DFS(pre[v]);
	printf("%d ", v);
}

int main()
{
	cin >> n >> m >> s >> t;
	int u, v;
	fill(G[0], G[0] + Maxn * Maxn, INF);
	for (int i = 0; i < m; i++)
	{
		cin >> u >> v;
		cin >> G[u][v];
		cin >> cost[u][v];
		G[v][u] = G[u][v];
		cost[v][u] = cost[u][v];
	}
	Dij(s);
	DFS(t);
	printf("%d %d",d[t],c[t]);
	system("pause");
	return 0;
}


/*
4 5 0 3
0 1 1 20
1 3 2 30
0 3 4 10
0 2 2 20
2 3 1 20
*/