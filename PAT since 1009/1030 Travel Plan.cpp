//#include<iostream>
//#include<string>
//#include<algorithm>
//#include<vector>
//#include<map>
//using namespace std;
//
//const int INF = 99999999;
//int n, m, starting, destination, lowestCost = INF;
//int e[510][510], cost[510][510], dis[510];
//bool visited[510];
//vector<int> bestPath, tempPath, pre[510];
//
//void dijkstra(int start) {
//	for (int i = 0; i < n; i++) {
//		int u = -1, distance_shorest = INF;
//		for (int j = 0; j < n; j++) {
//			if (visited[j] == false && dis[j] < distance_shorest) {
//				u = j;
//				distance_shorest = dis[j];
//			}
//		}
//		if (u == -1)return;
//		visited[u] = true;
//		for (int i = 0; i < n; i++) {
//			if (visited[i] == false && e[u][i] != INF) {
//				if (dis[i] > dis[u] + e[u][i]) {
//					dis[i] = dis[u] + e[u][i];
//					pre[i].clear();
//					pre[i].push_back(u);
//				}
//				else if (dis[i] == dis[u] + e[u][i]) {
//					pre[i].push_back(u);
//				}
//			}
//		}
//	}
//}
//
//void dfs(int node) {
//	tempPath.push_back(node);
//	if (node == starting) {
//		int localcost = 0;
//		for (int i = 0; i < tempPath.size() - 1; i++) {
//			localcost += cost[tempPath[i]][tempPath[i + 1]];
//		}
//		if (localcost < lowestCost) {
//			lowestCost = localcost;
//			bestPath = tempPath;
//		}
//		tempPath.pop_back();
//		return;
//	}
//	for (int i = 0; i < pre[node].size(); i++) {
//		dfs(pre[node][i]);
//	}
//	tempPath.pop_back();
//}
//
//int main() {
//	int start, end, distance, localCost;
//	fill(e[0], e[0] + 510 * 510, INF);
//	fill(dis, dis + 510, INF);
//	cin >> n >> m >> starting >> destination;
//	for (int i = 0; i < m; i++) {
//		cin >> start >> end >> distance >> localCost;
//		e[start][end] = e[end][start] = distance;
//		cost[start][end] = cost[end][start] = localCost;
//
//	}
//	dis[starting] = 0;
//	pre[starting].push_back(starting);
//	dijkstra(starting);
//	dfs(destination);
//	for (int i = bestPath.size() - 1; i >= 0; i--) {
//		cout << bestPath[i] << " ";
//	}
//	cout << dis[destination] << " ";
//	cout << lowestCost;
//	return 0;
//}