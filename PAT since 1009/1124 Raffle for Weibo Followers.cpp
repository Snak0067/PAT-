//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//map<string, int>win;
//vector<string>ans;
//
//int main() {
//	int	m, n, s, index = 0;
//	string nickname;
//	scanf_s("%d%d%d", &m, &n, &s);
//	for (int i = 1; i <= m; i++)
//	{
//		cin >> nickname;
//		if (i < s)continue;
//		if (win.find(nickname) == win.end()) {
//			win[nickname] = 1;
//			ans.push_back(nickname);
//			int end = i + n - 1;
//			for (int u = i; u < end && u < m; u++)
//			{
//				cin >> nickname;
//				i++;
//			}
//		}
//	}
//	if (ans.size() > 0) {
//		for (string x : ans) {
//			printf("%s\n", x.c_str());
//		}
//	}
//	else {
//		printf("%s\n", "Keep going...");
//	}
//
//	return 0;
//}