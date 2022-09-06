//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//vector<vector<int>>vertex;
//int edge[10005];
//
//int main() {
//	int n, m, k, vn, a, b;
//	cin >> n >> m;
//	vertex.resize(n);
//	for (int i = 0; i < m; i++)
//	{
//		scanf_s("%d%d", &a, &b);
//		vertex[a].push_back(i);
//		vertex[b].push_back(i);
//	}
//	scanf_s("%d", &k);
//	for (int i = 0; i < k; i++)
//	{
//		scanf_s("%d", &vn);
//		fill(edge, edge + m, 0);
//		for (int u = 0; u < vn; u++)
//		{
//			scanf_s("%d", &a);
//			for (int j = 0; j < vertex[a].size(); j++)
//			{
//				edge[vertex[a][j]] = 1;
//			}
//		}
//		bool match = false;
//		for (int j = 0; j < m && !match; j++)
//		{
//			if (edge[j] == 0) {
//				printf("No\n");
//				match = true;
//			}
//		}
//		if (!match)printf("Yes\n");
//	}
//	return 0;
//}