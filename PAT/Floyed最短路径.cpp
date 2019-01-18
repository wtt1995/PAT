#include<iostream>
#include<algorithm>
using namespace std;
const int INF = 1000000000;
const int Maxn = 200;
int n, m;
int dis[Maxn][Maxn];

void Floyed()
{
	for(int k=0;k<n;k++)
		for(int i=0;i<n;i++)
			for (int j = 0; j < n; j++)
			{
				if (dis[i][k] != INF && dis[k][j] != INF && dis[i][k] + dis[k][j] < dis[i][j])
					dis[i][j] = dis[i][k] + dis[k][j];
			}
}


int main()
{
	int u, v, w;
	fill(dis[0],dis[0]+Maxn*Maxn,INF);
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		dis[i][i] = 0;
	}
	for (int i = 0; i < m; i++)
	{
		cin >> u >> v >> w;
		dis[u][v] = w;
	}
	Floyed();
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d ", dis[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}