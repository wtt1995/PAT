#include<iostream>
#include<string>
using namespace std;
const int N = 55;
string start[N] = { "","S1","S2","S3","S4","S5","S6","S7","S8","S9","S10","S11","S12","S13",
					"H1","H2","H3","H4","H5","H6","H7","H8","H9","H10","H11","H12","H13" ,
					"C1","C2","C3","C4","C5","C6","C7","C8","C9","C10","C11","C12","C13" ,
					"D1","D2","D3","D4","D5","D6","D7","D8","D9","D10","D11","D12","D13",
					"J1","J2" };
string temp[N];
int position[N];

void fun()
{
	for (int i = 1; i < N; i++)
	{
		temp[position[i]] = start[i];
	}
	for (int i = 1; i < N; i++)
	{
		start[i] = temp[i];
	}
}

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i < N; i++)
	{
		cin >> position[i];
	}
	for (int i = 0; i < n; i++)
		fun();
	for (int i = 1; i < N; i++)
	{
		if (i != N - 1)
			cout << start[i] << " ";
		else
			cout << start[i];
	}
	system("pause");
	return 0;
}