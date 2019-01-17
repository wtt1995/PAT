//#include<iostream>
//using namespace std;
//char M[11] = { '1','0','X' ,'9','8','7','6','5','4','3','2'};
//int weight[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
//
//int main()
//{
//	char num[20];
//	int n,k=0,j=0;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		int flag=1;
//		cin >> num;
//		int sum = 0;
//		for (j = 0; j < 17; j++)
//		{
//			if (num[j]<'0' || num[j]>'9')
//			{
//				flag = 0;
//				k++;
//				break;
//			}
//			sum += (num[j] - '0')* weight[j];
//		}
//		if (flag == 1)
//		{
//			if (M[sum % 11] != num[17])
//			{
//				flag = 0;
//				k++;
//			}
//		}
//		if (flag == 0)
//		{
//			cout << num << endl;;
//		}
//	}
//	if (k == 0)
//		cout << "All passed\n";
//	return 0;
//}