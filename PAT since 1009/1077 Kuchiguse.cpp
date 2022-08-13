//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//vector<string>v;
//
//int main() {
//	int n, minlen = 500;
//	string s, Kuchiguse;
//	scanf_s("%d", &n);
//	getline(cin, s);
//	s.resize(n);
//	for (unsigned i = 0; i < n; i++)
//	{
//		getline(cin, s);
//		if (minlen > s.length())minlen = s.length();
//		reverse(s.begin(), s.end());
//		v.push_back(s);
//	}
//	for (unsigned i = 0; i < minlen; i++)
//	{
//		char temp = v[0][i];
//		bool match = true;
//		for (unsigned u = 1; u < v.size(); u++)
//		{
//			if (v[u][i] != temp) {
//				match = false;
//				break;
//			}
//		}
//		if (match) {
//			Kuchiguse.push_back(temp);
//		}
//		else {
//			break;
//		}
//	}
//	if (Kuchiguse.size() > 0) {
//		reverse(Kuchiguse.begin(), Kuchiguse.end());
//		printf("%s", Kuchiguse.c_str());
//	}
//	else {
//		printf("nai");
//	}
//
//	return 0;
//}