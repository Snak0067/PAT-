//#include<iostream>
//#include<string>
//#include<vector>
//#include<map>
//#include<algorithm>
//using namespace std;
//
//map<char, char>letterMap;
//
//struct User {
//	string username, password;
//};
//
//string recover(string password) {
//	bool match = false;
//	for (int i = 0; i < password.length(); i++) {
//		if (letterMap.find(password[i]) != letterMap.end()) {
//			password[i] = letterMap[password[i]];
//			match = true;
//		}
//	}
//	if (match)return password;
//	return "";
//}
//vector<User> v;
//
//int main() {
//	int k, matchedNum = 0;
//	string a, b;
//	cin >> k;
//	letterMap['l'] = 'L';
//	letterMap['1'] = '@';
//	letterMap['0'] = '%';
//	letterMap['O'] = 'o';
//	if (k == 1) {
//		cout << "There is 1 account and no account is modified";
//		return 0;
//	}
//
//	for (int i = 0; i < k; i++) {
//		cin >> a >> b;
//		string modified_b = recover(b);
//		if (modified_b != "") {
//			v.push_back({ a,modified_b });
//		}
//	}
//	if (v.size() != 0) {
//		cout << v.size() << endl;
//		for (int i = 0; i < v.size(); i++) {
//			cout << v[i].username << " " << v[i].password << endl;
//		}
//	}
//	else {
//		printf_s("There are %d accounts and no account is modified", k);
//	}
//
//	return 0;
//}