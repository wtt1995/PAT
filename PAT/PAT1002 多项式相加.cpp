//#include<iostream>
//#include<cstring>
//using namespace std;
//const int Maxn = 1010;
//float polyA[Maxn] = { 0 }, polyB[Maxn] = { 0 }, polyC[Maxn] = {0};//��ָ��Ϊ�±��ϵ������
//int main()
//{
//	int m, n, k=0;
//	int in;
//	cin >> m;
//	for (int i = 0; i < m; i++)
//	{
//		cin >> in;  //ָ��
//		cin>>polyA[in];//ϵ��
//	}
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> in;  //ָ��
//		cin>>polyB[in];//ϵ��
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

// һ�����������������飬һ����������һ�����飬������߼��㡣��Ҫ�Ǳ߽����������ã������ǵø�ʽ����

//#include<stdio.h>
//#include<iostream>
//#include<cmath>
//using namespace std;
//const int N = 1000 + 1;
//int main()
//{
//	int k, exp, num, count = 0; //kΪ���������������Ҫһ����ָ��Ϊ�±�������ϵ������
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