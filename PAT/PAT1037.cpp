//#include<iostream>
//#include<algorithm>
//using namespace std;
//const int maxn = 100010;
//int NC[maxn];
//int NP[maxn];
//
//int main()
//{
//	int n, m;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> NC[i];
//	}
//	cin>> m;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> NP[i];
//	}
//	sort(NC, NC + n);
//	sort(NP, NP + m);
//	int sum = 0;
//	int i = 0, j = 0;
//	int p = n - 1;
//	int q = m - 1;
//
//	while (i < n && j < m && NC[i] < 0 && NP[j] < 0)
//	{
//		sum += NC[i] * NP[j];
//		i++;
//		j++;
//	}
//
//	while (p >= 0 && q >= 0 & NC[p] > 0 && NP[q] < 0)
//	{
//		sum += NC[i] * NP[j];
//		p--;
//		q--;
//	}
//	cout << sum << endl;
//	system("pause");
//	return 0;
//}
//
