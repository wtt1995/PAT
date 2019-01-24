//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//const int maxn = 10010;
//string segments[maxn];
//
//bool cmp(string p, string q)
//{
//	return (p+q)<(q+p);
//}
//
//int main()
//{
//	int n;
//	string str;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		cin>>segments[i];
//	sort(segments, segments + n,cmp);
//	str = segments[0];
//	for (int i = 1; i < n; i++)
//	{
//		str += segments[i];
//	}
//	int len = (int)str.length();
//	int j = 0;
//	for (; j < len - 1; j++)
//	{
//		if (str[j] != '0')
//			break;
//	}
//	if (j == len - 1)
//	{
//		cout << "0" << endl;
//		system("pause");
//		return 0;
//	}
//	while (str[j] != '\0')
//	{
//		cout << str[j];
//		j++;
//	}
//
//	system("pause");
//	return 0;
//}