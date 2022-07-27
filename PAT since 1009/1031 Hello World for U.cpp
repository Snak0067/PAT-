//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//int compute_n(string s) {
//	int N = s.length(), N1, N2;
//	double tempn2 = (N * 1.0 + 2) / 3, tempn1;
//	(int)tempn2 == tempn2 ? N2 = (int)tempn2 : N2 = (int)tempn2 + 1;
//	N2 < 3 ? N2 = 3 : N2 = N2;
//	tempn1 = (N * 1.0 - N2 + 2) / 2;
//	while ((int)tempn1 != tempn1) {
//		N2++;
//		tempn1 = (N * 1.0 - N2 + 2) / 2;
//	}
//	return tempn1;
//}
//
//int main() {
//	string s;
//	cin >> s;
//	int N, N1, N2, left = 0, right = s.length() - 1,i;
//	N = s.length();
//	N1 = compute_n(s);
//	N2 = N + 2 - 2 * N1;
//	for (i = 0; i < N1 - 1; i++) {
//		cout << s[left];
//		for (int i = 0; i < N2 - 2; i++)cout << " ";
//		cout << s[right] << endl;
//		left++;
//		right--;
//	}
//	cout << s.substr(left, N2);
//	return 0;
//}