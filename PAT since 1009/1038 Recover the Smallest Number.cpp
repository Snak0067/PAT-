//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//const int INF = 999999999;
//vector<string> v;
//vector<string> check;
//int main() {
//	int n;
//	string s, num;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> s;
//		v.push_back(s);
//	}
//	sort(v.begin(), v.end(), less<string>());
//	while (v.size() != 0) {
//		int next = 1;
//		if (next == v.size()) {
//			num += v[0]; break;
//		}
//		if (v[next].find(v[0]) == string::npos) {
//			num += v[0];
//			v.erase(v.begin());
//		}
//		else {
//			check.clear();
//			check.push_back(v[0]);
//			while (next != v.size() && v[next].find(v[0]) != string::npos) {
//				check.push_back(v[next++]);
//			}
//			int priority = 0;
//			for (int j = 1; j < check.size(); j++) {
//				string a = check[priority] + check[j];
//				string b = check[j] + check[priority];
//				if (a > b)priority = j;
//			}
//			num += v[priority];
//			v.erase(v.begin() + priority);
//		}
//
//	}
//	while (num[0] == '0')num = num.substr(1);
//	cout << (num.length() == 0 ? "0" : num);
//	return 0;
//}