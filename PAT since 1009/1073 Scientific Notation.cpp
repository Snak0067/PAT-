//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int main() {
//	string s, num;
//	cin >> s;
//	int i = 0;
//	if (s[0] == '-')printf("-");
//	while (s[i] != 'E')i++;
//	string pre = s.substr(1, i - 1);
//	int exponent = stoi(s.substr(i + 1));
//	if (exponent < 0) {
//		printf("0.");
//		for (unsigned i = 0; i < abs(exponent) - 1; i++)printf("0");
//		for (unsigned i = 0; i < pre.size(); i++)
//		{
//			if (pre[i] != '.')printf("%c", pre[i]);
//		}
//	}
//	else {
//		unsigned cnt = 0, i = 2;
//		printf("%c", pre[0]);
//		for (; i < pre.size() && cnt < exponent; i++, cnt++)printf("%c", pre[i]);
//		if (i != pre.size()) {
//			printf(".");
//			for (; i < pre.size(); i++)printf("%c", pre[i]);
//		}
//		else {
//			for (; cnt < exponent; cnt++)printf("0");
//		}
//	}
//	return 0;
//}