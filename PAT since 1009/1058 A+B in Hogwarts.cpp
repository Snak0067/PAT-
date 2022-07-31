//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//string compute(string a, string b, int flag) {
//	string result;
//	reverse(a.begin(), a.end());
//	reverse(b.begin(), b.end());
//	int index = 0, index_a = 0, index_b = 0;
//	while (index_a < a.length() && index_b < b.length()) {
//		char temp = a[index_a++] + b[index_b++] - '0' + flag;
//		if (temp > '9') {
//			temp = temp - '9';
//			flag = 1;
//		}
//		else {
//			flag = 0;
//		}
//		result.push_back(temp);
//	}
//	while (index_a < a.length()) {
//		char temp = a[index_a++] + flag;
//		if (temp > '9') {
//			temp = temp - '9';
//			flag = 1;
//		}
//		else {
//			flag = 0;
//		}
//		result.push_back(temp);
//	}
//	while (index_b < b.length()) {
//		char temp = b[index_b++] + flag;
//		if (temp > '9') {
//			temp = temp - '9';
//			flag = 1;
//		}
//		else {
//			flag = 0;
//		}
//		result.push_back(temp);
//	}
//	if (flag == 1)result.push_back('1');
//	reverse(result.begin(), result.end());
//	return result;
//}
//
//int main() {
//	string A, B, ga, gb, gr;
//	int sa, sb, ka, kb, sr, kr;
//	cin >> A >> B;
//	int adot1, adot2, bdot1, bdot2;
//	adot1 = A.find_first_of('.');
//	adot2 = A.find_last_of('.');
//	bdot1 = B.find_first_of('.');
//	bdot2 = B.find_last_of('.');
//	ga = A.substr(0, adot1);
//	gb = B.substr(0, bdot1);
//	sa = stoi(A.substr(adot1 + 1, adot2 - adot1).c_str());
//	sb = stoi(B.substr(bdot1 + 1, bdot2 - bdot1).c_str());
//	ka = stoi(A.substr(adot2 + 1, 4).c_str());
//	kb = stoi(B.substr(bdot2 + 1, 4).c_str());
//	int flag = 0;
//	kr = (ka + kb) % 29;
//	flag = (ka + kb) / 29;
//	sr = (sa + sb + flag) % 17;
//	flag = (sa + sb + flag) / 17;
//	gr = compute(ga, gb, flag);
//	printf("%s.%d.%d", gr.c_str(), sr, kr);
//	cout << INT_MAX;
//	return 0;
//}