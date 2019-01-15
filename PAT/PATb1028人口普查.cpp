//#include<iostream>
//using namespace std;
//struct Person
//{
//	char name[7];
//	int yy;
//	int mm;
//	int dd;
//}left1,right1,oldest,youngest,temp;
//
//
//bool Lesscmp(Person a, Person b)
//{
//	if (a.yy != b.yy)
//		return a.yy <= b.yy;
//	else if (a.mm != b.mm)
//		return a.mm <= b.mm;
//	else
//		return a.dd <= b.dd;
//}
//
//bool Morecmp(Person a, Person b)
//{
//	if (a.yy != b.yy)
//		return a.yy>=b.yy;
//	else if (a.mm != b.mm)
//		return a.mm>=b.mm;
//	else 
//		return a.dd>=b.dd;
//}
//void init()
//{
//	left1.yy = youngest.yy=1814;
//	left1.mm = youngest.mm = 9;
//	left1.dd = youngest.dd = 6;
//
//	right1.yy = oldest.yy = 2014;
//	right1.mm = oldest.mm = 9;
//	right1.dd = oldest.dd = 6;
//}
//int main()
//{
//	init();
//	int n,num=0;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> temp.name;
//		scanf_s("%d/%d/%d", &temp.yy, &temp.mm, &temp.dd);
//		if (Morecmp(temp, left1) && Lesscmp(temp,right1))
//		{
//			num++;
//			if (Lesscmp(temp, oldest)) oldest = temp;
//			if (Morecmp(temp, youngest)) youngest = temp;
//		}
//	}
//	if (num != 0)
//	{
//		cout << num << " ";
//		cout << oldest.name << " " << youngest.name << endl;
//	}
//	else
//		cout <<num;
//	system("pause");
//	return 0;
//}
///*
//
//5
//John 2001/05/12
//Tom 1814/09/06
//Ann 2121/01/30
//James 1814/09/05
//Steve 1967/11/20
//
//*/