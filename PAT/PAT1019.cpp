//#include<iostream>
//using namespace std;
//int main()
//{
//	int num,base;
//	cin >> num >> base;
//	int a[32],n=0;
//	while (num != 0)
//	{
//		a[n++] = num % base;
//		num = num / base;
//	}
//	int flag = 1;
//	for (int i = 0; i < n / 2; i++)
//	{
//		if (a[i] != a[n - i - 1])
//		{
//			flag = 0;
//			break;
//		}
//	}
//	if (flag == 0)
//		cout << "No\n";
//	else
//		cout << "Yes\n";
//	for (int i = n - 1; i >= 0; i--)
//	{
//		cout << a[i];
//		if (i != 0)
//			cout << " ";
//	}
//	system("pause");
//	return 0;
//}