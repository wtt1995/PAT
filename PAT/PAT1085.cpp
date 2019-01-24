//#include<iostream>
//#include<algorithm>
//using namespace std;
//const int maxn = 100010;
//int numbers[maxn];
//int n, p;
//int binargSearch1(int i, long long x)
//{
//	if (numbers[n - 1] <= x)
//		return n;
//	int l = i+1, r = n - 1, mid;
//	while (l < r)
//	{
//		mid = (l + r) / 2;
//		if (numbers[mid] <= x)
//		{
//			l = mid + 1;
//		}
//		else
//		{
//			r = mid;
//		}
//	}
//	return l;
//}
//
//int main()
//{
//	cin >> n >> p;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> numbers[i];
//	}
//	sort(numbers, numbers + n);
//	int ans = 1;
//	for (int i = 0; i < n; i++)
//	{
//		int j = binargSearch1(i, (long long)numbers[i] * p);
//		ans = max(ans, j - i);	
//	}
//	cout << ans<< endl;
//	system("pause");
//	return 0;
//}


/*
局部变量  和 全局变量，注意使用范围。

*/