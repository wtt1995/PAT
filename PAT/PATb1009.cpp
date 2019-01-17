//#include<iostream>
//using namespace std;
//int main()
//{
//	char str[100];
//	char  s[100][100];
//	cin.getline(str,100);
//	int n = strlen(str);
//	int j = 0,k=0;
//	for (int i = 0; i < n; i++)
//	{
//		if (str[i] != ' ')
//			s[j][k++] = str[i];
//		else
//		{
//			s[j][k] = '\0';
//			j++;
//			k = 0;
//		}
//	}
//	s[j][k] = '\0';
//	for (int m = j ; m >= 0; m--)
//	{
//		cout << s[m];
//		if (m != 0)
//			cout << " ";
//	}
//	return 0;
//}