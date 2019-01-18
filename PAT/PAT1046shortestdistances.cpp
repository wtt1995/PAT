//#include<iostream>
//#include<algorithm>
//using namespace std;
//const int N = 100010;
//int D[N],Dis;
//
//void fu(int n)
//{
//	Dis = 0;
//	for (int i = 1; i <= n; i++)
//		Dis += D[i];
//}
//
//
//int fun(int left, int right)
//{
//	if (left > right)
//	{
//		int temp = left;
//		left = right;
//		right = temp;
//	}
//	int ans = 0;
//	for (int i = left; i < right; i++)
//		ans += D[i];
//	ans = min(ans, Dis - ans);
//	return ans;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> D[i];
//	}
//	fu(n);
//	int m,left,right;
//	cin >> m;
//	int ans[N],k=0;
//	while (m--)
//	{
//		cin >> left >> right;
//		ans[k++]=fun(left, right);
//	}
//	for (int j = 0; j < k; j++)
//		cout << ans[j] << endl;
//	system("pause");
//	return 0;
//}
//
//
//
//#include<iostream>
//#include<algorithm>
//using namespace std;
//const int Maxn = 100005;
//int dis[Maxn], A[Maxn];
//int main()
//{
//	int sum = 0, query, n, left, right;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> A[i];
//		sum += A[i];
//		dis[i] = sum;
//	}
//	cin >> query;
//	for (int i = 0; i < query; i++)
//	{
//		cin >> left >> right;
//		if (left > right)
//			swap(left, right);
//		int temp = dis[right - 1] - dis[left - 1];
//		int t = min(temp, sum - temp);
//		cout << t << endl;
//	}
//
//	system("pause");
//	return 0;
//}
