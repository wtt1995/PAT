//#include<iostream>
//#include<cmath>
//#include<stdio.h>
//#include<vector>
//using namespace std;
//// ��һ��������ʽ�ֽ⣬��2��ĳ����֮���������
////�������� ָ��
//struct Fac
//{
//	int coef;//ϵ��
//	int expo;//ָ��
//	Fac() { coef = expo = 0; }
//};
////���������������ݣ�����ɼ���������ˣ�2��3��5��7��11��13��17��19��23��27��29��31��37�ȵ�
////����һ������,�洢����
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
//			prem[num++] = i;   //����num��������
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
//		//��ӡ
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