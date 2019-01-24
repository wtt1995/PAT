//#include<iostream>
//#include<algorithm>
//using namespace std;
//struct Monocake
//{
//	double amount;
//	double totalprice;
//	double price;
//}monocake[1005];
//
//bool cmp(Monocake a, Monocake b)
//{
//	return a.price > b.price;
//}
//
//int main()
//{
//	int n;
//	double m;
//	cin >> n >> m;
//	double profit = 0.0;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> monocake[i].amount;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cin >> monocake[i].totalprice;
//		monocake[i].price = monocake[i].totalprice / monocake[i].amount;
//	}
//	sort(monocake, monocake + n, cmp);
//	int i = 0;
//	double k = 0;
//	while (k < m)
//	{
//		if (monocake[i].amount >= m - k)
//		{
//			profit += (m - k)*monocake[i].price;
//			break;
//		}
//		else
//		{
//			k += monocake[i].amount;
//			profit += monocake[i].totalprice;
//			i++;
//		}
//	}
//	printf("%0.2f",profit);
//
//	system("pause");
//	return 0;
//}
//
///*
//
//3 200
//180 150 100
//7.5 7.2 4.5
//
//*/