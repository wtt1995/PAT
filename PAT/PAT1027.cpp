//#include<iostream>
//#include<stdio.h>
//using namespace std;
//// 13进制，还要考虑 A、B、C
//void change(int n)
//{
//	char a,b;
//	if (n / 13 < 10)
//		a = '0' + (n / 13);
//	else if (n / 13 == 10)
//		a = 'A';
//	else if (n / 13 == 11)
//		a = 'B';
//	else
//		a = 'C';
//	if (n % 13 < 10)
//		b = '0' + (n % 13);
//	else if (n % 13 == 10)
//		b = 'A';
//	else if (n % 13 == 11)
//		b = 'B';
//	else
//		b = 'C';
//	printf("%c%c", a, b);
//}
//
//int main()
//{
//	int R, G, B;
//	cin >> R >> G >> B;
//	printf("#");
//	change(R);
//	change(G);
//	change(B);
//	system("pause");
//	return 0;
//}

//也可以考虑建一个char[] 索引表！！！！！，更简洁。