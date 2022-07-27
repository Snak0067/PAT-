//#include<iostream>
//#include<string>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//struct student {
//	string name, id;
//	int grade;
//};
//
//vector<student>male;
//vector<student>female;
//bool cmp(student s1, student s2) { return s1.grade < s2.grade; }
//
//int main() {
//	int k;
//	cin >> k;
//	string name, id;
//	char ch;
//	int grade;
//	for (int i = 0; i < k; i++) {
//		cin >> name >> ch >> id >> grade;
//		if (ch == 'M') {
//			male.push_back({ name,id,grade });
//		}
//		else {
//			female.push_back({ name,id,grade });
//		}
//	}
//	sort(male.begin(), male.end(), cmp);
//	sort(female.begin(), female.end(), cmp);
//	if (male.size() != 0 && female.size() != 0) {
//		cout << female[female.size() - 1].name << " " << female[female.size() - 1].id << endl;
//		cout << male[0].name << " " << male[0].id << endl;
//		cout << female[female.size() - 1].grade - male[0].grade;
//	}
//	else {
//		if (female.size() != 0) {
//			cout << female[female.size() - 1].name << " " << female[female.size() - 1].id << endl;
//		}
//		else {
//			cout << "Absent" << endl;
//		}
//		if (male.size() != 0) {
//			cout << male[0].name << " " << male[0].id << endl;
//		}
//		else {
//			cout << "Absent" << endl;
//		}
//		cout << "NA";
//	}
//
//	return 0;
//}