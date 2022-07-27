//#include<iostream>
//#include<string>
//#include<map>
//#include<stack>
//#include<algorithm>
//using namespace std;
//
//map<int, string>mapping;
//string compute(int x) {
//	stack<int>s;
//	if (x == 0)return "00";
//	while (x != 0) {
//		s.push(x % 13);
//		x /= 13;
//	}
//	string result = "";
//	if (s.size() == 1) {
//		result += "0";
//		if (s.top() > 9)result += mapping[s.top()];
//		else {
//			result += to_string(s.top());
//		}
//	}
//	else {
//		while (s.size() != 0) {
//			if (s.top() > 9)result += mapping[s.top()];
//			else {
//				result += to_string(s.top());
//			}
//			s.pop();
//		}
//	}
//	
//	return result;
//}
//
//int main() {
//	mapping[10] = "A";
//	mapping[11] = "B";
//	mapping[12] = "C";
//	
//	int x;
//	cin >> x;
//	cout << "#";
//	cout << compute(x);
//	cin >> x;
//	cout << compute(x);
//	cin >> x;
//	cout << compute(x);
//	return 0;
//}