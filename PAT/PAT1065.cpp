#include<iostream>
using namespace std;
//��Ҫ�ж��Ƿ����
//A+B ���������������ɸ�����
//A+B ���������������ɷǸ���

bool fun(long long A, long long B, long long C)
{
	long long temp;
	temp = A + B;
	if (A > 0 && B > 0)
	{
		if (temp < 0)
			return true;
		else
			return temp > C;
	}
	if (A < 0 && B < 0)
	{
		if (temp >= 0)
			return false;
		else
			return temp > C;
	}
	return temp > C;
}
int main()
{
	int n;
	cin >> n;
	long long A, B, C;
	for (int i = 1; i <= n; i++)
	{
		cin >> A >> B >> C;
		cout << "Case #" << i << ": " << boolalpha << fun(A, B, C) << endl;
	}
	system("pause");
	return 0;
}