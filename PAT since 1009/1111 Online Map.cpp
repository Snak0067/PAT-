//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//const int INF = 99999999;
//int length[505][505], dis[505], lowtime[505];
//int mytime[505][505];
//bool visit_len[505];
//bool visit_time[505];
//int n, m, v1, v2, oneway, len, t;
//int source, destination, mintime = INF, minNum = INF;
//vector<int>ans_len, ans_time;
//void dis_dfs(int current, int temptime, int len, vector<int>path, vector<bool>visit) {
//	if (current == destination) {
//		if (len == dis[destination] && temptime < mintime) {
//			mintime = temptime;
//			ans_len = path;
//		}
//		return;
//	}
//	if (len > dis[destination] || temptime > mintime)return;
//	for (int i = 0; i < n; i++)
//	{
//		if (visit[i] == false && length[current][i] != INF) {
//			visit[i] = true;
//			path.push_back(i);
//			dis_dfs(i, temptime + mytime[current][i], len + length[current][i], path, visit);
//			path.pop_back();
//			visit[i] = false;
//		}
//	}
//}
//void time_dfs(int current, int num, int temptime, vector<int>path, vector<bool>visit) {
//	if (current == destination) {
//		if (temptime == lowtime[destination] && num < minNum) {
//			minNum = num;
//			ans_time = path;
//		}
//		return;
//	}
//	if (temptime > lowtime[destination] || num > minNum)return;
//	for (int i = 0; i < n; i++)
//	{
//		if (visit[i] == false && mytime[current][i] != INF) {
//			visit[i] = true;
//			path.push_back(i);
//			time_dfs(i, num + 1, mytime[current][i] + temptime, path, visit);
//			visit[i] = false;
//			path.pop_back();
//		}
//	}
//}
//bool arrayEqual(vector<int>a, vector<int>b)
//{
//	if (a.size() != b.size())return false;
//	for (int i = 0; i < a.size(); i++)
//	{
//		if (a[i] != b[i])return false;
//	}
//	return true;
//}
//int main() {
//	scanf_s("%d%d", &n, &m);
//	fill(dis, dis + 505, INF);
//	fill(length[0], length[0] + 505 * 505, INF);
//	fill(lowtime, lowtime + 505, INF);
//	fill(mytime[0], mytime[0] + 505 * 505, INF);
//	for (int i = 0; i < n; i++)
//	{
//		length[i][i] = 0;
//		mytime[i][i] = 0;
//	}
//	for (int i = 0; i < m; i++)
//	{
//		scanf_s("%d %d %d %d %d", &v1, &v2, &oneway, &len, &t);
//		if (oneway == 0) {
//			length[v2][v1] = len;
//			mytime[v2][v1] = t;
//		}
//		length[v1][v2] = len;
//		mytime[v1][v2] = t;
//	}
//	scanf_s("%d%d", &source, &destination);
//	dis[source] = 0;
//	//最短路径dijkstra
//	for (int i = 0; i < n; i++)
//	{
//		int templen = INF, next = -1;
//		for (int u = 0; u < n; u++)
//		{
//			if (visit_len[u] == false && dis[u] < templen) {
//				templen = dis[u];
//				next = u;
//			}
//		}
//		if (next == -1)break;
//		visit_len[next] = true;
//		for (int u = 0; u < n; u++)
//		{
//			if (visit_len[u] == false && dis[u] > dis[next] + length[next][u]) {
//				dis[u] = dis[next] + length[next][u];
//			}
//		}
//	}
//	lowtime[source] = 0;
//	//最短时间dijkstra
//	for (int i = 0; i < n; i++)
//	{
//		int temptime = INF, next = -1;
//		for (int u = 0; u < n; u++)
//		{
//			if (visit_time[u] == false && lowtime[u] < temptime) {
//				temptime = lowtime[u];
//				next = u;
//			}
//		}
//		if (next == -1)break;
//		visit_time[next] = true;
//		for (int u = 0; u < n; u++)
//		{
//			if (visit_time[u] == false && lowtime[u] > lowtime[next] + mytime[next][u]) {
//				lowtime[u] = lowtime[next] + mytime[next][u];
//			}
//		}
//	}
//	vector<int>path;
//	vector<bool>visit;
//	visit.resize(n);
//	visit[source] = true;
//	dis_dfs(source, 0, 0, path, visit);
//	path.clear();
//	visit.clear();
//	visit.resize(n);
//	visit[source] = true;
//	time_dfs(source, 1, 0, path, visit);
//	if (arrayEqual(ans_len, ans_time)) {
//		printf("Distance = %d; Time = %d: %d", dis[destination], lowtime[destination], source);
//		for (int i = 0; i < ans_len.size(); i++)
//		{
//			printf(" -> %d", ans_len[i]);
//		}
//	}
//	else {
//		printf("Distance = %d: %d", dis[destination], source);
//		for (int i = 0; i < ans_len.size(); i++)
//		{
//			printf(" -> %d", ans_len[i]);
//		}
//		printf("\nTime = %d: %d", lowtime[destination], source);
//		for (int i = 0; i < ans_time.size(); i++)
//		{
//			printf(" -> %d", ans_time[i]);
//		}
//	}
//	return 0;
//}