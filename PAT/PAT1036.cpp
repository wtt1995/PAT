//#include<iostream>
//using namespace std;
//struct Student
//{
//	char name[12];
//	char gender;
//	char id[12];
//	int grade;
//}Female,Male,temp;  //动态输入比较，当不考虑每一个输入都需要保存时，要这样！！！不能开辟一个数组！！因为不知道长度！
//int main()
//{
//	int n;
//	cin >> n;
//	Female.grade = -1;
//	Male.grade = 101;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> temp.name;
//		cin >> temp.gender;
//		cin >> temp.id;
//		cin >> temp.grade;
//		if (temp.gender == 'F')
//		{
//			if (temp.grade > Female.grade)
//				Female = temp;
//		}
//		if (temp.gender == 'M')
//		{
//			if (temp.grade < Male.grade)
//				Male = temp;
//		}
//	}
//	if (Female.grade == -1 && Male.grade == 101)
//	{
//		cout << "Absent\n";
//		cout << "Absent\n";
//		cout << "NA\n";
//	}
//	else if (Female.grade != -1 && Male.grade == 101)
//	{
//		cout << Female.name <<" "<< Female.id  << endl;
//		cout << "Absent\n";
//		cout << "NA\n";
//	}
//	else if (Female.grade == -1 && Male.grade != 101)
//	{
//		cout << "Absent\n";
//		cout << Male.name << " " << Male.id <<  endl;
//		cout << "NA\n";
//	}
//	else
//	{
//		cout << Female.name << " " << Female.id << endl;
//
//		cout << Male.name << " " << Male.id << endl;
//
//		cout << Female.grade - Male.grade << endl;
//	}
//
//	system("pause");
//	return 0;
//}