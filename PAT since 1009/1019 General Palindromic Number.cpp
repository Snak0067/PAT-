//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//const int maxn = 100;
//int a[maxn], len = -1;
//bool huiwen = true;
//
//void change(int num, int base) {
//	while (num != 0) {
//		len++;
//		a[len] = num % base;
//		num = num / base;
//	}
//}
//bool judge() {
//	for (int i = 0; i <= len / 2; i++)
//	{
//		if (a[i] != a[len - i])return false;
//	}
//	return true;
//}
//
//int main() {
//	int num, base;
//	cin >> num >> base;
//	change(num, base);
//	judge() ? cout << "Yes" : cout << "No";
//	cout << endl;
//	for (int i = len; i > 0; i--) {
//		cout << a[i] << " ";
//	}
//	cout << a[0] << endl;
//
//	return 0;
//}
//
//
//
//
//
