////�����������
//#include<iostream>
//#include<string>
//#include<cstring>
//#include<algorithm>
//using namespace std;
//const int N = 100;
//char A[N], B[N];
//int dp[N][N];
//int main()
//{
//	gets_s(A + 1, N);
//	gets_s(B + 1, N);
//	int lenA = strlen(A + 1);
//	int lenB = strlen(B + 1);
//	for (int i = 0; i < lenA; i++)
//	{
//		dp[i][0] = 0;
//	}
//	for (int i = 0; i < lenB; i++)
//	{
//		dp[0][i] = 0;
//	}
//	for (int i = 1; i <= lenA; i++)
//	{
//		for (int j = 1; j <= lenB; j++)
//		{
//			if (A[i] == B[j])
//				dp[i][j] = dp[i - 1][j - 1] + 1;
//			else
//				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//		}
//	}
//	printf("%d\n", dp[lenA][lenB]);
//	system("pause");
//	return 0;
//}
