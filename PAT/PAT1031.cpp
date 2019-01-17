//#include<iostream>
//using namespace std;
//const int Maxn = 85;
//// 2*n1+n2=num-2;n1=k;k<=n2;
////2*n1+n2>=num+2;
//int main()
//{
//	char ch[Maxn];
//	cin >> ch;
//	int num=0;
//	while (ch[num] != '\0')
//	{
//		num++;
//	}
//	int n1, n2;
//	n1 = (num + 2) / 3;
//	n2 = num + 2 - 2 * n1;
//	for (int i = 0; i < n1; i++)
//	{
//		for (int j = 0; j < n2; j++)
//		{
//			if (i != n1 - 1)
//			{
//				if (j == 0)
//					cout << ch[i];
//				else if (j == n2 - 1)
//					cout << ch[num - i - 1];
//				else
//					cout << " ";
//			}
//			else
//				cout << ch[i + j];
//		}
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}
