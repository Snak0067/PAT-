//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int N, K, courseId, courseNum;
//map<string, vector<int>> student;
//
//int main() {
//	cin >> N >> K;
//	string name;
//	for (int i = 0; i < K; i++) {
//		cin >> courseId >> courseNum;
//		for (int i = 0; i < courseNum; i++) {
//			cin >> name;
//			if (student.find(name) == student.end()) {
//				vector<int> courseList;
//				courseList.push_back(courseId);
//				student[name] = courseList;
//			}
//			else {
//				student[name].push_back(courseId);
//			}
//		}
//	}
//	map<string, vector<int>>::iterator iter = student.begin();
//	while (iter != student.end()) {
//		sort(iter->second.begin(), iter->second.end(), less<int>());
//		iter++;
//	}
//	for (int i = 0; i < N; i++) {
//		cin >> name;
//		if (student.find(name) == student.end()) {
//			cout << name << " 0" << endl;
//		}
//		else {
//			int i;
//			vector<int> courseList = student[name];
//			cout << name << " " << courseList.size() << " ";
//			for (i = 0; i < courseList.size() - 1; i++) {
//				cout << courseList[i] << " ";
//			}
//			cout << courseList[i] << endl;
//		}
//	}
//
//	return 0;
//}