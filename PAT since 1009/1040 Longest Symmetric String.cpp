//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//bool symmetric(string s) {
//	string rs = s;
//	reverse(s.begin(), s.end());
//	return rs == s;
//}
//
//int main() {
//	string str;
//	getline(cin, str);
//	int longest = 1;
//	for (int i = 0; i < str.length(); i++) {
//		int next = str.find(str[i], i + 1);
//		if (next == string::npos)continue;
//		while (next != string::npos) {
//			if (symmetric(str.substr(i, next - i + 1))) {
//				if (next - i + 1 > longest) {
//					longest = next - i + 1;
//				}
//			}
//			next = str.find(str[i], next + 1);
//		}
//
//	}
//	cout << longest;
//	return 0;
//}