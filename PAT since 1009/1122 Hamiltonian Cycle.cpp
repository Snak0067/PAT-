//#include<iostream>
//#include<string>
//#include<set>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int v[205][205], visit[205];
//vector<vector<int>>vec;
//
//int main() {
//	int n, m, a, b, k;
//	scanf("%d%d", &n, &m);
//	for (int i = 0; i < m; i++)
//	{
//		scanf("%d%d", &a, &b);
//		v[a][b] = v[b][a] = 1;
//	}
//	scanf("%d", &m);
//	while (m--) {
//		scanf("%d", &k);
//		vector<int> vec(k);
//		set<int> s;
//		int flag1 = 1, flag2 = 1;
//		for (int i = 0; i < k; i++)
//		{
//			scanf("%d", &vec[i]);
//			s.insert(vec[i]);
//		}
//		if (s.size() != n || k - 1 != n || vec[0] != vec[k - 1])flag1 = 0;
//		for (int i = 0; i < k - 1; i++)
//		{
//			if (v[vec[i]][vec[i + 1]] == 0) {
//				flag2 = 0; break;
//			}
//		}
//		printf("%s", flag1 && flag2 ? "YES\n" : "NO\n");
//	}
//	return 0;
//}