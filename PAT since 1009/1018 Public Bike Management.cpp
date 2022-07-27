//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<stack>
//using namespace std;
//const int maxn = 505, INF = 1000000000;
//int maxc, n, sp, m, capacity, G[maxn][maxn];
//bool vis[maxn] = { false };
//struct node {
//	int d = INF, c = INF, range, front = 0;
//};
//vector<node> nodeArray(maxn);
//
///*不具有最优子结构，不能这么简单的做*/
//
//void dijkstra() {
//	nodeArray[0].d = 0;
//	nodeArray[0].c = 0;
//	for (int i = 0; i <= n; i++) {
//		int u = -1, MIN = INF;
//		for (int j = 0; j <= n; j++) {
//			if (vis[j] == false && nodeArray[j].d < MIN) {
//				u = j;
//				MIN = nodeArray[j].d;
//			}
//		}
//		if (u == -1)return;
//		vis[u] = true;
//		for (int j = 0; j <= n; j++) {
//			if (vis[j] == false && G[u][j] != INF && nodeArray[u].d + G[u][j] <= nodeArray[j].d) {
//				if (nodeArray[u].c + nodeArray[j].range < nodeArray[j].c && !(j == sp && u == 0)) {
//					nodeArray[j].c = nodeArray[u].c + nodeArray[j].range;
//					nodeArray[j].front = u;
//				}
//				nodeArray[j].d = nodeArray[u].d + G[u][j];
//			}
//		}
//	}
//}
//int main() {
//	fill(G[0], G[0] + maxn * maxn, INF);
//	cin >> maxc >> n >> sp >> m;
//	for (int i = 1; i <= n; i++) {
//		scanf_s("%d", &capacity);
//		nodeArray[i].range = capacity - (maxc / 2);
//	}
//	for (int i = 0; i < m; i++) {
//		int a, b, c;
//		cin >> a >> b >> c;
//		G[a][b] = G[b][a] = c;
//
//	}
//	dijkstra();
//	stack<int> s;
//	node temp = nodeArray[sp];
//	int range = nodeArray[sp].c;
//	while (temp.front != 0) {
//		s.push(temp.front);
//		temp = nodeArray[temp.front];
//	}
//	cout << (range > 0 ? 0 : 0 - range) << " 0->";
//	while (s.size() > 0) {
//		cout << s.top() << "->";
//		s.pop();
//	}
//	cout << sp << " " << (range > 0 ? range : 0) << endl;
//	return 0;
//}
