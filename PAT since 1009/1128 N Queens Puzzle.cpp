//#include<iostream>
//#include<string>
//#include<unordered_map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int main() {
//	int n, k;
//	scanf_s("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf_s("%d", &k);
//		vector<int>v(k + 1);
//		unordered_map<int, int>digit, diagonal;
//		int u;
//		for (u = 1; u <= k; u++)
//		{
//			scanf_s("%d", &v[u]);
//		}
//		for (u = 1; u <= k; u++)
//		{
//			if (digit.find(v[u]) == digit.end() && diagonal.find(u + v[u]) == diagonal.end()) {
//				digit[v[u]] = 1;
//				diagonal[u + v[u]] = 1;
//			}
//			else {
//				printf("NO\n"); break;
//			}
//		}
//		if (u == k + 1)printf("YES\n");
//	}
//
//	return 0;
//}