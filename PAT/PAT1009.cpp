//#include<iostream>
//using namespace std;
//const int Maxn = 2010;
//float coef[Maxn] = { 0 }, coefA[Maxn] = { 0 }, coefB[Maxn] = {0};
//int main()
//{
//	int m, n, k=0,id;
//	cin >> m;
//	for (int i = 0; i < m; i++)
//	{
//		cin >> id;
//		cin >> coefA[id];
//	}
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> id;
//		cin >> coefB[id];
//	}
//	for (int i = 0; i < Maxn; i++)
//		for (int j = 0; j < Maxn; j++)
//		{
//			coef[i + j] += coefA[i] * coefB[j];
//		}
//	for (int i = 0; i < Maxn; i++)
//		if (coef[i] != 0)
//			k++;
//	cout << k;
//	for (int i = Maxn - 1; i >= 0; i--)
//		if (coef[i] != 0)
//			printf(" %d %.1f", i, coef[i]);
//	system("pause");
//	return 0;
//
//}


//上面发生了段错误！！！！！！！


//#include<stdio.h>
//#include<iostream>
//#include<vector>
//using namespace std;
////换一种思路，指数一个数组，系数一个数组
//int main()
//{
//	int k_A, k_B;
//	cin >> k_A;
//	vector<int> index_A(k_A);
//	vector<float> coeff_A(k_A);
//	for (int i = 0; i < k_A; i++)
//	{
//		cin >> index_A[i];
//		cin >> coeff_A[i];
//	}
//	cin >> k_B;
//	vector<int> index_B(k_B);
//	vector<float> coeff_B(k_B);
//	for (int i = 0; i < k_B; i++)
//	{
//		cin >> index_B[i];
//		cin >> coeff_B[i];
//	}
//	//现在得到了输入的系数矩阵，如何实现乘法？for循环，可以先找出最大的指数？
//	int index;
//	float coeff_C[2001] = { 0 }, coeff;
//	for (int i = 0; i < k_A; i++)
//		for (int j = 0; j < k_B; j++)
//		{
//			index = index_A[i] + index_B[j];
//			coeff = coeff_A[i] * coeff_B[j];
//			coeff_C[index] += coeff;
//		}
//	int n = 0;
//	for (int i = 0; i < 2001; i++)
//		if (coeff_C[i] != 0)
//			n++;
//	cout << n;
//	for (int i = 2000; i >= 0; i--)
//		if (coeff_C[i] != 0)
//			printf(" %d %0.1f", i, coeff_C[i]);
//	return 0;
//}

//可以考虑结构体！！
//一个先输入完成，另一个边输入边计算
//乘法，就是某一项分别与另一个数里面每一项相乘。



//速度更快！！！！，结构体与数组共用！
//#include<iostream>
//using namespace std;
//struct Poly
//{
//	int ex;
//	float coe;
//}poly[1001];
//float ans[2001] = {0.0};
//int main()
//{
//	int m, n, k = 0;
//	cin >> m;
//	for (int i = 0; i < m; i++)
//	{
//		cin >> poly[i].ex;
//		cin >> poly[i].coe;
//	}
//	int id;
//	float coe;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> id;
//		cin >> coe;
//		for (int j = 0; j < m; j++)
//			ans[id + poly[j].ex] += coe * poly[j].coe;
//	}
//	for (int i = 0; i < 2001; i++)
//		if (ans[i] != 0)
//			k++;
//	cout << k;
//	for (int i = 2000; i >= 0; i--)
//	{
//		if (ans[i] != 0.0)
//			printf(" %d %.1f", i, ans[i]);
//	}
//	system("pause");
//	return 0;
//}