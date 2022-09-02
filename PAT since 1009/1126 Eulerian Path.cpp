//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//vector<vector<int>>v;
//vector<bool>visit;
//int cnt = 0;
//void dfs(int node) {
//	visit[node] = true;
//	cnt++;
//	for (int i = 0; i < v[node].size(); i++)
//	{
//		if (!visit[v[node][i]]) {
//			dfs(v[node][i]);
//		}
//	}
//}
//int main() {
//	int n, m, a, b, odd = 0;
//	scanf_s("%d%d", &n, &m);
//	visit.resize(n + 1);
//	v.resize(n + 1);
//	for (int i = 0; i < m; i++)
//	{
//		scanf_s("%d%d", &a, &b);
//		v[a].push_back(b);
//		v[b].push_back(a);
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (i != 1)printf(" ");
//		printf("%d", v[i].size());
//		if (v[i].size() % 2 == 1)odd++;
//	}
//	printf("\n");
//	dfs(1);
//	if (odd == 2 && cnt == n) {
//		printf("%s", "Semi-Eulerian");
//	}
//	else if (odd == 0 && cnt == n) {
//		printf("%s", "Eulerian");
//	}
//	else {
//		printf("Non-Eulerian");
//	}
//
//	return 0;
//}