//#include<iostream>
//#include<cstring>
//using namespace std;
//const int Maxn = 2010;
//int ex[Maxn], in[Maxn];//ex 系数，in指数
//
//int main()
//{
//	int i = 0;
//	while (cin>>ex[i]>>in[i] && cin.get()!='\n')
//	{
//		i++;
//	}
//	for (int j = 0; j <= i; j++)
//	{
//		ex[j] *= in[j];
//		in[j] = in[j] - 1;
//	}
//	for (int j = 0; j <= i; j++)
//	{
//		if (ex[j] == 0)
//			continue;
//		if (j !=0)
//			cout << " ";
//		cout << ex[j] << " " << in[j];
//	}
//	if (ex[0] == 0 && i == 0)
//		cout << "0 0";
//	system("pause");
//	return 0;
//}