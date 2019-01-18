//#include<iostream>
//#include<cmath>
//#include<stdio.h>
//#include<vector>
//using namespace std;
//// 求一个数的因式分解，从2到某个数之间的素数，
////素数，和 指数
//struct Fac
//{
//	int coef;//系数
//	int expo;//指数
//	Fac() { coef = expo = 0; }
//};
////分析，长整型数据，最多由几个素数相乘？2，3，5，7，11，13，17，19，23，27，29，31，37等等
////定义一个数组,存储素数
//const int Maxn = 100010;
//int prem[Maxn] = { 0 },num=0;
//bool is_prime(long int n)
//{
//	if (n <= 1) return false;
//	int t = (int)sqrt(1.0*n);
//	for (int i = 2; i <= t; i++)
//		if (n%i == 0)
//			return false;
//	return true;
//}
//void Save(long int n)
//{
//	int t = (int)sqrt(1.0*n);
//	for (int i = 1; i <= t; i++)
//		if (is_prime(i))
//			prem[num++] = i;   //共有num个素数。
//}
//
//void fun(long int n)
//{
//	Save(n);
//	vector<Fac> fac(num);
//	int k = 0;
//	cout << n << "=";
//	if (n == 1 || is_prime(n))
//	{
//		printf("%d",n);
//	}
//	else {
//		for (int j = 0; j < num; j++)
//		{
//
//			if (n % prem[j] == 0)
//			{
//				fac[k].coef = prem[j];
//				fac[k].expo = 0;
//				while (n % prem[j] == 0)
//				{
//					n = n / prem[j];
//					fac[k].expo++;
//				}
//				k++;
//			}
//			if (n == 1)
//				break;
//		}
//		//打印
//		
//		for (int i = 0; i < k; i++)
//		{
//			if (fac[i].expo != 0 && fac[i].expo != 1)
//				cout << fac[i].coef << "^" << fac[i].expo;
//			if (fac[i].expo == 1)
//				cout << fac[i].coef;
//			if (i < k - 1)
//				cout << "*";
//		}
//	}
//}
//
//int main()
//{
//	long int n;
//	cin >> n;
//	fun(n);
//	cout << endl;
//	system("pause");
//	return 0;
//}