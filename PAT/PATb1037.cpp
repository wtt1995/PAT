// 不好的方法
//#include<iostream>
//#include<stdio.h>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	int a, b, c;
//	int A, B, C;
//	scanf_s("%d.%d.%d", &A, &B, &C);
//	scanf_s("%d.%d.%d", &a, &b, &c);
//	int m, n, o;
//	int flag = 0;
//	if (A > a)
//		flag = 1;
//	else if (A==a && B > b)
//		flag = 1;
//	else if (A == a && B == b && C > c)
//		flag = 1;
//	if (flag == 1)
//	{
//		swap(A, a);
//		swap(B, b);
//		swap(C, c);
//	}
//	o = c - C;
//	if (o < 0)
//	{
//		
//		b = b - 1; 
//		o = o + 29;
//		if (b < 0)
//		{
//			a = a - 1;
//			b = b + 17;
//		}
//	}
//	n = b - B;
//	if (n < 0)
//	{
//		a = a - 1;
//		n = n + 17;
//	}
//	m = a - A;
//	if (flag == 0)
//	{
//		printf("%d.%d.%d\n", m, n, o);
//	}
//	else
//	{
//		printf("-%d.%d.%d\n", m, n, o);
//	}
//	system("pause");
//	return 0;
//}



//2.全部转换为统一单位

//#include<stdio.h>
//int main()
//{
//	int A, B, C;
//	int a, b, c;
//	int price, pay, change;
//	scanf_s("%d.%d.%d %d.%d.%d", &A, &B, &C, &a, &b, &c);
//	price = A * 17 * 29 + B * 29 + C;
//	pay = a * 17 * 29 + b * 29 + c;
//	change = pay - price;
//	if (change < 0)
//	{
//		printf("-");
//		change = -change;
//	}
//	printf("%d.%d.%d", change / (17 * 29), change % (17 * 29) / 29, change % 29);
//	getchar();
//	getchar();
//	return 0;
//}
