//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//struct student {
//	int grade;
//	string ID, name;
//};
//bool cmp_1(const student& s1, const student& s2) {
//	return s1.ID < s2.ID;
//}
//bool cmp_2(const student& s1, const student& s2) {
//	if (s1.name == s2.name) {
//		return s1.grade > s2.grade;
//	}
//	return s1.name < s2.name;
//}
//bool cmp_3(const student& s1, const student& s2) {
//	if (s1.grade == s2.grade) {
//		if (s1.name.compare(s2.name) == 0) {
//			return s1.ID < s2.ID;
//		}
//		return s1.name.compare(s2.name) == -1;
//	}
//	return s1.grade < s2.grade;
//}
//vector<student>v;
//
//int main() {
//	int k, m;
//	cin >> k >> m;
//	for (int i = 0; i < k; i++) {
//		student s;
//		cin >> s.ID >> s.name >> s.grade;
//		v.push_back(s);
//	}
//	switch (m)
//	{
//	case 1:
//		sort(v.begin(), v.end(), cmp_1); break;
//	case 2:
//		sort(v.begin(), v.end(), cmp_2); break;
//	case 3:
//		sort(v.begin(), v.end(), cmp_3); break;
//	default:
//		break;
//	}
//	for (int i = 0; i < k; i++) {
//		cout << v[i].ID << " " << v[i].name << " " << v[i].grade << endl;
//	}
//
//	return 0;
//}