//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//struct student
//{
//	string name, id;
//	int grade;
//	student(string n, string i, int g) {
//		name = n;
//		id = i;
//		grade = g;
//	}
//};
//bool cmp(student s1, student s2) {
//	return s1.grade > s2.grade;
//}
//vector<student>v;
//
//int main() {
//	int n, grade;
//	string name, id;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> name >> id >> grade;
//		v.push_back(student(name, id, grade));
//	}
//	sort(v.begin(), v.end(), cmp);
//	int grade1, grade2;
//	cin >> grade1 >> grade2;
//	bool out = false;
//	for (int i = 0; i < v.size(); i++)
//	{
//		if (v[i].grade >= grade1 && v[i].grade <= grade2) {
//			out = true;
//			printf("%s %s\n", v[i].name.c_str(), v[i].id.c_str());
//		}
//	}
//	if (!out)printf("NONE");
//	return 0;
//}