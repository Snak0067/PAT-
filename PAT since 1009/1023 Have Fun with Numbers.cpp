//#include <iostream>
//#include <string>
//using namespace std;
//int book[10];
//int main() {
//	string num;
//	cin >> num;
//	int flag = 0;
//	for (int i = num.length() - 1; i >= 0; i--) {
//		int temp = num[i] - '0';
//		book[temp]++;
//		book[(temp * 2) % 10 + flag]--;
//		num[i] = (temp * 2) % 10 + flag + '0';
//		flag = (temp * 2) / 10;
//	}
//	if (flag == 1) {
//		num = "1" + num;
//		book[1]--;
//	}
//	bool match = true;
//	for (int i = 0; i < 10 && match; i++) {
//		if (book[i] != 0)match = false;
//	}
//	cout << (match == true ? "Yes" : "No") << endl;
//	cout << num;
//	return 0;
//}