//#include<iostream>
//#include<string>
//using namespace std;
//int main() {
//	string s1, s2;
//	cin >> s1 >> s2;
//	char str[13] = { '0','1','2','3','4','5','6','7','8','9','J','Q','K' };
//	int a[101] = { 0 }, b[101] = { 0 }; int l1 = s1.length() - 1, l2 = s2.length() - 1;
//	int maxlen = s1.length() > s2.length() ? s1.length() : s2.length();
//	for (int i = maxlen - 1; i >= 0 && l2 >= 0; i--) b[i] = s2[l2--] - '0';
//	for (int i = maxlen - 1; i >= 0 && l1 >= 0; i--) a[i] = s1[l1--] - '0';
//	for (int i = 0; i < maxlen; i++) {
//		if ((maxlen - i) % 2 == 1) {//如果是奇数位 
//			cout << str[(a[i] + b[i]) % 13];
//		}
//		else {//如果是偶数位 
//			if (b[i] - a[i] >= 0) cout << b[i] - a[i];
//			else cout << b[i] - a[i] + 10;
//		}
//	}
//	return 0;
//}
