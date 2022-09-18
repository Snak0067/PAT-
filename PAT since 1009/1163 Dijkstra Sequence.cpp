//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//const int INF = 999999999;
//int vec[1005][1005], dis[1005];
//bool visit[1005];
//int n, m;
//int main() {
//	int  a, b, len;
//	cin >> n >> m;
//	fill(vec[0], vec[0] + 1005 * 1005, INF);
//	for (int i = 0; i < m; i++)
//	{
//		scanf("%d%d%d", &a, &b, &len);
//		vec[a][b] = vec[b][a] = len;
//	}
//	int k, vertice;
//	cin >> k;
//	for (int i = 0; i < k; i++)
//	{
//		vector<int>path(n);
//		for (int i = 0; i < n; i++) {
//			scanf("%d", &path[i]);
//		}
//		int start = path[0], end = path[n - 1];
//		vector<int>cost;
//		fill(visit, visit + 1005, false);
//		fill(dis, dis + 1005, INF);
//		dis[start] = 0;
//		for (int j = 1; j <= n; j++)
//		{
//			int next = -1, maxN = INF;
//			for (int u = 1; u <= n; u++)
//			{
//				if (visit[u] == false && dis[u] < maxN) {
//					next = u;
//					maxN = dis[u];
//				}
//			}
//			if (next == -1)break;
//			visit[next] = true;
//			for (int u = 1; u <= n; u++)
//			{
//				if (visit[u] == false && dis[u] > dis[next] + vec[next][u]) {
//					dis[u] = dis[next] + vec[next][u];
//				}
//			}
//		}
//		int max = -1;
//		bool match = true;
//		for (int u = 0; u < path.size() && match; u++)
//		{
//			if (dis[path[u]] < max) {
//				match = false;
//			}
//			max = dis[path[u]];
//		}
//		printf("%s\n", match == true ? "Yes" : "No");
//	}
//
//	return 0;
//}