//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//
//
//
//int main() {
//	string a, b;
//	int k;
//	cin >> a >> k;
//	while (k > 1) {
//		string b = "";
//		int cnt = 1;
//		char temp = ' ';
//		for (int i = 0; i < a.length(); i++)
//		{
//			if (temp == ' ') {
//				temp = a[i];
//			}
//			else if (temp == a[i]) {
//				cnt++;
//			}
//			else if (temp != a[i]) {
//				b.push_back(temp);
//				b.push_back('0' + cnt);
//				cnt = 1;
//				temp = a[i];
//			}
//		}
//		b.push_back(temp);
//		b.push_back('0' + cnt);
//		a = b;
//		k--;
//	}
//	cout << a;
//
//
//	return 0;
//}