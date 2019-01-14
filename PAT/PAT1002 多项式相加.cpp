//#include<iostream>
//#include<cstring>
//using namespace std;
//const int Maxn = 1010;
//float polyA[Maxn] = { 0 }, polyB[Maxn] = { 0 }, polyC[Maxn] = {0};//以指数为下标的系数矩阵
//int main()
//{
//	int m, n, k=0;
//	int in;
//	cin >> m;
//	for (int i = 0; i < m; i++)
//	{
//		cin >> in;  //指数
//		cin>>polyA[in];//系数
//	}
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> in;  //指数
//		cin>>polyB[in];//系数
//	}
//	for (int i = 0; i < Maxn; i++)
//	{
//		polyC[i] = polyA[i] + polyB[i];
//	}
//
//	for (int i = 0; i < Maxn; i++)
//	{
//		if (polyC[i] != 0)
//			k++;
//	}
//	cout << k;
//	for (int i = Maxn - 1; i >= 0; i--)
//	{
//		if (polyC[i] != 0)
//		{
//			printf(" %d %.1f", i, polyC[i]);
//		}
//	}
//	system("pause");
//	return 0;
//}

// 一个是申请了三个数组，一个是申请了一个数组，边输入边计算。主要是边界条件的设置！！！记得格式！！

//#include<stdio.h>
//#include<iostream>
//#include<cmath>
//using namespace std;
//const int N = 1000 + 1;
//int main()
//{
//	int k, exp, num, count = 0; //k为非零项个数，还需要一个以指数为下标索引的系数数组
//	double coef_1[N] = { 0 }, coef;
//	for (int i = 0; i < 2; i++)
//	{
//		cin >> k;
//		for (int j = 0; j < k; j++)
//		{
//			cin >> exp;
//			cin >> coef;
//			coef_1[exp] += coef;
//		}
//	}
//	for (num = N - 1; num >= 0; num--)
//	{
//		if (fabs(coef_1[num]) != 0)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	for (num = N - 1; num >= 0; num--)
//	{
//		if (fabs(coef_1[num]) != 0)
//		{
//			printf(" %d %.1f", num, coef_1[num]);
//		}
//	}
//	printf("\n");
//	return 0;
//}