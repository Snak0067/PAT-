//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//string x;
//void add(string t) {
//	int len = x.length(), carry = 0;
//	for (int i = 0; i < len; i++) {
//		x[i] = x[i] + t[i] + carry - '0';
//		carry = 0;
//		if (x[i] > '9') {
//			carry = 1;
//			x[i] -= 10;
//		}
//	}
//	if (carry)x = x + "1";
//	reverse(x.begin(), x.end());
//}
//
//int main() {
//	int steps, i;
//	cin >> x >> steps;
//	for (i = 0; i < steps; i++) {
//		string t = x;
//		reverse(t.begin(), t.end());
//		if (t == x || i == steps)break;
//		add(t);
//	}
//	cout << x << endl << i;
//	return 0;
//}