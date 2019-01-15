//#include<iostream>
//#include<stack>
//#include<string>
//using namespace std;
//
////stack 分析可知，push，pop函数是stack自带的，不用处理，需要做的是计算怎么样求解中位数？
////（n+1）/2，n/2；要知道里面的个数；
//
//const int Maxn = 10010;
//const int sqrN = 316;
//
//stack<int> st;
//int block[sqrN];
//int table[Maxn];
//
//void peekmedian(int k)
//{
//	int sum = 0;
//	int idx = 0;
//	while (sum + block[idx] < k)
//	{
//		sum += block[idx++];
//	}
//	int num = idx * sqrN;
//	while (sum + table[num] < k)
//	{
//		sum += table[num++];
//	}
//	cout << num << endl;
//}
//
//void Push(int x)
//{
//	st.push(x);
//	block[x / sqrN]++;
//	table[x]++;
//}
//
//void Pop()
//{
//	int x = st.top();
//	st.pop();
//	block[x / sqrN]--;
//	table[x]--;
//	cout << x << endl;
//
//}
//
//int main()
//{
//	int query;
//	memset(block,0,sizeof(block));
//	memset(table, 0, sizeof(table));
//	string str;
//	cin >> query;
//	for (int i = 0; i < query; i++)
//	{
//		int j;
//		cin >> str;
//		if (str == "Pop")
//			j = 0;
//		else if (str == "PeekMedian")
//			j = 1;
//		else if (str == "Push")
//			j = 2;
//		else
//		{
//			cout << "Wrong!" << endl;
//			break;
//		}
//		switch (j)
//		{
//		case 0: {
//			if (st.size() == 0)
//				cout << "Invalid\n";
//			else
//				Pop();
//		}
//				break;
//		case 1: {
//			if (st.size() == 0)
//				cout << "Invalid\n";
//			else
//			{
//				int k = st.size();
//				if (k % 2 == 0)
//					k = k / 2;
//				else
//					k = (k + 1) / 2;
//				peekmedian(k);
//			}
//		}
//				break;
//		case 2: {
//			int num;
//			cin >> num;
//			Push(num);
//		}
//				break;
//		}
//	}
//	system("pause");
//	return 0;
//}