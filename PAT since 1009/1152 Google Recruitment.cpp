//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//
//bool prime(int num) {
//	if (num == 1 || num == 0)return false;
//	for (int i = 2; i * i <= num; i++)
//	{
//		if (num % i == 0)return false;
//	}
//	return true;
//}
//
//int main() {
//	int l, k;
//	cin >> l >> k;
//	string s;
//	cin >> s;
//	for (int i = 0; i <= s.length() - k; i++)
//	{
//		string str = s.substr(i, k);
//		if (prime(stoi(str))) {
//			printf("%s\n", str.c_str());
//			return 0;
//		}
//	}
//	printf("404\n");
//	return 0;
//}