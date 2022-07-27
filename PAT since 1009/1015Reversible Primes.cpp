//#include<iostream>
//#include<algorithm>
//#include<math.h>
//using namespace std;
//
//bool Prime(int n) {
//	if (n == 1)return false;
//	int sqr = int(sqrt(n * 1.0));
//	for (int i = 2; i <= sqr; i++) {
//		if (n % i == 0)return false;
//	}
//	return true;
//}
//
//int main() {
//	int num, radix;
//	cin >> num;
//	while (num>0) {
//		cin >> radix;
//		if (Prime(num) == false) {
//			cout << "No" << endl;
//		}
//		else {
//			int n = 0;
//			while (num > 0) {
//				n = n * radix + num % radix;
//				num /= radix;
//			}
//			Prime(n) ? cout << "Yes" << endl : cout << "No" << endl;
//		}
//		cin >> num;
//	}
//}