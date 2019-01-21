//#include<iostream>
//#include<stdio.h>
//#include<cstring>
//#include<algorithm>
//using namespace std;
//struct Student
//{
//	char ID[8];
//	char name[10];
//	int grade;
//}student[100010];
//
//bool cmp1(Student a, Student b)
//{
//	return strcmp(a.ID, b.ID) <0 ;
//}
//bool cmp2(Student a, Student b)
//{
//	if (strcmp(a.name, b.name) != 0)
//		return strcmp(a.name, b.name) < 0;
//	else
//		return strcmp(a.ID, b.ID) < 0;
//}
//
//bool cmp3(Student a, Student b)
//{
//	if (a.grade != b.grade)
//		return a.grade < b.grade;
//	else
//		return strcmp(a.ID, b.ID) < 0;
//}
//
//int main()
//{
//	int n;
//	char C;
//	cin >> n>>C;
//	for (int i = 0; i < n; i++)
//	{
//		cin>> student[i].ID;
//		cin >> student[i].name;
//		cin >> student[i].grade;
//	}
//	switch (C)
//	{
//	case '1': {sort(student,student+n,cmp1);
//		for (int i = 0; i < n; i++)
//			printf("%s %s %d\n", student[i].ID, student[i].name, student[i].grade);
//		break;
//	}
//	case '2': {sort(student, student + n, cmp2);
//		for (int i = 0; i < n; i++)
//			printf("%s %s %d\n", student[i].ID, student[i].name, student[i].grade);
//		break;
//	}
//	case '3': {sort(student, student + n, cmp3);
//		for (int i = 0; i < n; i++)
//			printf("%s %s %d\n", student[i].ID, student[i].name, student[i].grade);
//		break;
//	}
//		
//	}
//	system("pause");
//	return 0;
//
//}