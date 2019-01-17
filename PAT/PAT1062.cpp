//#include<iostream>
//#include<algorithm>
//using namespace std;
//struct Student
//{
//	char id[10];
//	int talent_grade;
//	int virtue_grade;
//	int total_grade;
//	int rank;
//}student[10010];
//
//bool cmp1(Student a, Student b)
//{
//	if (a.rank != b.rank)
//		return a.rank < b.rank;
//	else if (a.total_grade != b.total_grade)
//		return a.total_grade > b.total_grade;
//	else if (a.virtue_grade != b.virtue_grade)
//		return a.virtue_grade > b.virtue_grade;
//	else
//		return strcmp(a.id, b.id) < 0;
//}
//int main()
//{
//	int n,L,H;
//	cin >> n>>L>>H;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> student[i].id;
//		cin >> student[i].virtue_grade;
//		cin >> student[i].talent_grade;
//		student[i].total_grade = student[i].virtue_grade + student[i].talent_grade;
//		if (student[i].virtue_grade >= H)
//		{
//			if (student[i].talent_grade >= H)
//				student[i].rank = 1;
//			else if (student[i].talent_grade >= L)
//				student[i].rank = 2;
//			else
//				student[i].rank = 5;
//		}
//		else if (student[i].virtue_grade >= L)
//		{
//			if (student[i].talent_grade >= L)
//			{
//				if (student[i].virtue_grade >= student[i].talent_grade)
//					student[i].rank = 3;
//				else
//					student[i].rank = 4;
//			}
//			else
//				student[i].rank = 5;
//		}
//		else
//			student[i].rank = 5;
//
//	}
//	int m = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (student[i].rank == 5)
//			m++;
//	}
//	sort(student, student + n,cmp1);
//	cout <<n- m << endl;
//	for (int i = 0; i < n - m; i++)
//	{
//		cout << student[i].id << " " << student[i].virtue_grade << " " << student[i].talent_grade <<" "<<student[i].rank <<endl;
//	}
//	system("pause");
//	return 0;
//}
//
///*
//14 60 80
//10000001 64 90
//10000002 90 60
//10000011 85 80
//10000003 85 80
//10000004 80 85
//10000005 82 77
//10000006 83 76
//10000007 90 78
//10000008 75 79
//10000009 59 90
//10000010 88 45
//10000012 80 100
//10000013 90 99
//10000014 66 60
//
//*/

//新思路，如果出现运行超时，则考虑用C风格输入输出！！！