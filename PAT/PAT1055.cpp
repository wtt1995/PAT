//#include<iostream>
//#include<algorithm>
//using namespace std;
//struct Person
//{
//	char name[10];
//	int age;
//	int wealth;
//}person[100010];
//
//bool cmp(Person a, Person b)
//{
//	if (a.wealth != b.wealth)
//		return a.wealth > b.wealth;
//	else if (a.age != b.age)
//		return a.age < b.age;
//	else
//		return strcmp(a.name, b.name) < 0;
//}
//
//int main()
//{
//	int n,k;
//	cin >> n >> k;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> person[i].name;
//		cin >> person[i].age;
//		cin >> person[i].wealth;
//	}
//	sort(person, person + n, cmp);
//	for (int i = 0; i < k; i++)
//	{
//		int m,Amin, Amax;
//		cin >> m >> Amin >> Amax;
//		int count = 0;
//		int flag = 0;
//		printf("Case #%d:\n",i+1);
//		for (int j = 0; j < n; j++)
//		{
//			if (person[j].age >= Amin && person[j].age <= Amax)
//			{
//				flag = 1;
//				cout << person[j].name << " " << person[j].age << " " << person[j].wealth << endl;
//				count++;
//			}
//			if (count == m)
//				break;
//		}
//		if (flag == 0)
//			cout << "None\n";
//	}
//	system("pause");
//	return 0;
//}
//
//
