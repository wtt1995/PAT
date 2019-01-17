//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int a[3];
//	int i = 0;
//	if (n == 0)
//	{
//		cout << 0;
//		return 0;
//	}
//	while (n != 0)
//	{
//		a[i++] = n % 10;
//		n = n / 10;
//	}
//	for (int j = i - 1; j >= 0; j--)
//	{
//		if (j == 2)
//		{
//			for (int k = 0; k < a[j]; k++)
//				cout << "B";
//		}
//		if (j == 1)
//		{
//			for (int k = 0; k < a[j]; k++)
//				cout << "S";
//		}
//		if (j == 0)
//		{
//			for (int k = 1; k <= a[j]; k++)
//				cout << k;
//		}
//	}
//	return 0;
//}