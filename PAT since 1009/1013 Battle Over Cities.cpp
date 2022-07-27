//#include<iostream>
//#include<algorithm>
//#include<map>
//#include<vector>
//using namespace std;
//
//const int MAXV = 100;
//int n, G[MAXV][MAXV] = { 0 };
//
//struct node {
//	int start;
//	int end;
//	node(int n, int m) {
//		start = n;
//		end = m;
//	}
//
//};
//void DFS(bool vis[], int color[], int u, int type) {
//	vis[u] = true;
//	color[u] = type;
//	for (int v = 1; v <= n; v++) {
//		if (vis[v] == false && G[u][v] != 0)
//		{
//			DFS(vis, color, v, type);
//		}
//	}
//}
//
//void DFSTrave(bool vis[], int color[]) {
//	for (int u = 1; u <= n; u++) {
//		if (color[u] == 0) {
//			DFS(vis, color, u, u);
//		}
//	}
//}
//int connectedComponent(bool vis[], int color[]) {
//	DFSTrave(vis, color);
//	map<int, int> colorMap;
//	for (int i = 1; i <= n; i++) {
//		map<int, int>::iterator iter = colorMap.find(color[i]);
//		if (iter == colorMap.end()) {
//			colorMap[color[i]] = 1;
//		}
//	}
//	return colorMap.size() - 2;
//}
//void test(int v) {
//	for (int i = 1; i <= n; i++) {
//		G[i][v] = 0;
//		G[v][i] = 0;
//	}
//	bool vis[MAXV] = { false };
//	int color[MAXV] = { 0 };
//	cout << connectedComponent(vis, color) << endl;
//
//}
//
//int main() {
//	int N, M, K, start, end, num;
//	vector<int> vec;
//	vector<node>nodeV;
//	scanf_s("%d%d%d", &N, &M, &K);
//	n = N;
//	for (int i = 0; i < M; i++) {
//		scanf_s("%d%d", &start, &end);
//		nodeV.push_back(node(start, end));
//	}
//	for (int i = 0; i < K; i++) {
//		scanf_s("%d", &num);
//		vec.push_back(num);
//	}
//
//	int vecLen = vec.size();
//	for (int k = 0; k < vecLen; k++) {
//		fill(G[0], G[0] + MAXV * MAXV, 0);
//		for (vector<node>::iterator iter = nodeV.begin(); iter != nodeV.end(); iter++)
//		{
//			G[iter->start][iter->end] = 1;
//			G[iter->end][iter->start] = 1;
//		}
//		test(vec.front());
//		vec.erase(vec.begin());
//	}
//	return 0;
//}