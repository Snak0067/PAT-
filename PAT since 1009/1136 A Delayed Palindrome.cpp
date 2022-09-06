//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//bool palindromic(string a) {
//	string b = a;
//	reverse(b.begin(), b.end());
//	return a == b;
//}
//string add(string a, string b) {
//	int index = 0, flag = 0;
//	string result = "";
//	reverse(a.begin(), a.end());
//	reverse(b.begin(), b.end());
//	while (index < a.size() && index < b.size()) {
//		char temp = a[index] + b[index] + flag - '0';
//		if (temp > '9') {
//			flag = 1;
//			temp -= 10;
//		}
//		else {
//			flag = 0;
//		}
//		result.push_back(temp);
//		index++;
//	}
//	while (index < a.size()) {
//		char temp = a[index] + flag;
//		if (temp > '9') {
//			flag = 1;
//			temp -= 10;
//		}
//		else {
//			flag = 0;
//		}
//		result.push_back(temp);
//		index++;
//	}
//	while (index < b.size()) {
//		char temp = b[index] + flag;
//		if (temp > '9') {
//			flag = 1;
//			temp -= 10;
//		}
//		else {
//			flag = 0;
//		}
//		result.push_back(temp);
//		index++;
//	}
//	if (flag == 1)result.push_back('1');
//	reverse(result.begin(), result.end());
//	return result;
//}
//
//int main() {
//	int cnt = 0;
//	string a, b, c;
//	cin >> a;
//	c = a;
//	while (cnt < 10) {
//		if (palindromic(c)) {
//			printf("%s is a palindromic number.", c.c_str());
//			return 0;
//		}
//		a = c;
//		b = c;
//		reverse(b.begin(), b.end());
//		c = add(a, b);
//		printf("%s + %s = %s\n", a.c_str(), b.c_str(), c.c_str());
//		cnt++;
//	}
//	printf("Not found in 10 iterations.");
//	return 0;
//}