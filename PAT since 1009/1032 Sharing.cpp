//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int main() {
//	map<string, string>mapping;
//	map<string, int>a_mapping;
//	string a_str, b_str, a, b;
//	char letter;
//	int n, index = 0;
//	cin >> a_str >> b_str >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> a >> letter >> b;
//		mapping[a] = b;
//	}
//	while (a_str != "-1") {
//		a_mapping[a_str] = index++;
//		a_str = mapping[a_str];
//	}
//	bool match = false;
//	while (b_str != "-1") {
//		if (a_mapping.find(b_str) != a_mapping.end()) {
//			cout << b_str;
//			return 0;
//		}
//		b_str = mapping[b_str];
//	}
//	if (!match)cout << "-1";
//
//	return 0;
//}