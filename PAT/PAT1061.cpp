//#include<iostream>
//#include<cstring>
//char DAY[7][5] = { "MON","TUE","WED","THU","FRI","SAI","SUN" };
//using namespace std;
//int main()
//{
//	char str1[70],str2[70],str3[70],str4[70];
//	int i;
//	cin >> str1;
//	cin >> str2;
//	cin >> str3;
//	cin >> str4;
//	int a = strlen(str1) > strlen(str2) ? strlen(str2) : strlen(str1);
//	int b = strlen(str3) > strlen(str4) ? strlen(str4) : strlen(str3);
//	for (i = 0; i < a; i++)
//		if (str1[i] == str2[i] && str1[i] >= 'A' && str1[i] <= 'G')
//		{
//			printf("%s ",DAY[str1[i]-'A']);
//			break;
//		}
//	for (i = i + 1; i < a; i++)
//	{
//		if (str1[i] == str2[i])
//		{
//			if (str1[i] >= '0' && str1[i] <= '9')
//			{
//
//				printf("%02d:", str1[i] - '0');
//				break;
//			}
//			if (str1[i] >= 'A' && str1[i] <= 'N')
//			{
//				printf("%02d:", str1[i] - 'A' + 10);
//				break;
//			}
//		}
//	}
//	for (i = 0; i < b; i++)
//	{
//		if (str3[i] == str4[i])
//			if ((str3[i] >= 'A'&& str3[i] <= 'Z') || (str3[i] >= 'a'&& str3[i] <= 'z'))
//			{
//				printf("%02d", i);
//				break;
//			}
//	}
//	while (1) {}
//	return 0;
//}
//上面的代码不知道为何有一个测试点无法通过？

//
//#include <iostream>
//#include <string>
//#include <cctype>
//#include<algorithm>
//using namespace std;
//int main() {
//	string a, b, c, d;
//	cin >> a >> b >> c >> d;
//	int min1 = min(a.length(), b.length());
//	int min2 = min(c.length(), d.length());
//	string weekday[7] = {"MON ", "TUE ", "WED ", "THU ", "FRI ", "SAT ", "SUN "};
//	char t[2];
//	int pos, j;
//	for (int i = 0; i < min1; i++) {
//		if (a[i] == b[i] && (a[i] >= 'A' && a[i] <= 'G')) {
//			t[0] = a[i];
//			j = i;
//			break;
//		}
//	}
//	for (int i = j + 1; i < min1; i++) {
//		if (a[i] == b[i] && ((a[i] >= 'A' && a[i] <= 'N') || isdigit(a[i]))) {
//			t[1] = a[i];
//			break;
//		}
//	}
//	for (int i = 0; i < min2; i++) {
//		if (c[i] == d[i] && isalpha(c[i])) {
//			pos = i;
//			break;
//		}
//	}
//	int m = t[1] - '0';
//	if (!isdigit(t[1])) m = t[1] - 'A' + 10;
//	cout << weekday[t[0] - 'A'];
//	printf("%02d:%02d", m, pos);
//	while (1) {}
//	return 0;
//}
