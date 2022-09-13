////#include<iostream>
////#include<set>
////#include<vector>
////#include<algorithm>
////using namespace std;
////
////const int INF = 999999999;
////int dis[300][300];
////
////int main() {
////	int n, m, k, a, b, len, shortDis = INF, shortPoint = 0;
////	scanf("%d%d", &n, &m);
////	fill(dis[0], dis[0] + 300 * 300, INF);
////	for (int i = 0; i < m; i++)
////	{
////		scanf("%d%d%d", &a, &b, &len);
////		dis[a][b] = dis[b][a] = len;
////	}
////	scanf("%d", &m);
////	for (int i = 0; i < m; i++)
////	{
////		scanf("%d", &k);
////		vector<int>v;
////		set<int>s;
////		for (int j = 0; j < k; j++)
////		{
////			scanf("%d", &a);
////			v.push_back(a);
////			s.insert(a);
////		}
////		int distance = 0, kind = 1;
////		for (int u = 0; u < v.size() - 1; u++)
////		{
////			if (dis[v[u]][v[u + 1]] == INF)kind = -1;
////			else distance += dis[v[u]][v[u + 1]];
////		}
////		if (kind == -1) {
////			printf("Path %d: NA (Not a TS cycle)\n", i + 1);
////		}
////		else if (v[0] != v[k - 1] || s.size() != n) {
////			printf("Path %d: %d (Not a TS cycle)\n", i + 1, distance);
////		}
////		else {
////			if (k == n + 1) {
////				printf("Path %d: %d (TS simple cycle)\n", i + 1, distance);
////			}
////			else {
////				printf("Path %d: %d (TS cycle)\n", i + 1, distance);
////			}
////			if (distance < shortDis) {
////				shortDis = distance;
////				shortPoint = i + 1;
////			}
////		}
////	}
////	printf("Shortest Dist(%d) = %d\n", shortPoint, shortDis);
////	return 0;
////}
//#include<iostream>
//#include<string>
//#include<unordered_map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//const int INF = 999999999;
//int dis[205][205];
//
//int main() {
//	int n, m, k, a, b, len, shortDis = INF, shortPoint = 0;
//	scanf("%d%d", &n, &m);
//	fill(dis[0], dis[0] + 205 * 205, INF);
//	for (int i = 0; i < m; i++)
//	{
//		scanf("%d%d%d", &a, &b, &len);
//		dis[a][b] = dis[b][a] = len;
//	}
//	scanf("%d", &m);
//	for (int i = 0; i < m; i++)
//	{
//		scanf("%d", &k);
//		unordered_map<int, int>mmap;
//		vector<int>v;
//		for (int j = 0; j < k; j++)
//		{
//			scanf("%d", &a);
//			v.push_back(a);
//			mmap[a]++;
//		}
//		int distance = 0, kind = 1;
//		for (int u = 0; u < v.size() - 1; u++)
//		{
//			if (dis[v[u]][v[u + 1]] == INF)kind = -1;
//			else distance += dis[v[u]][v[u + 1]];
//		}
//		if (kind == -1) {
//			printf("Path %d: NA (Not a TS cycle)\n", i + 1);
//		}
//		else if (v[0] != v[v.size() - 1] || mmap.size() != n) {
//			printf("Path %d: %d (Not a TS cycle)\n", i + 1, distance);
//		}
//		else {
//			if (k == n + 1) {
//				printf("Path %d: %d (TS simple cycle)\n", i + 1, distance);
//			}
//			else {
//				printf("Path %d: %d (TS cycle)\n", i + 1, distance);
//			}
//			if (distance < shortDis) {
//				shortDis = distance;
//				shortPoint = i + 1;
//			}
//		}
//	}
//	printf("Shortest Dist(%d) = %d\n", shortPoint, shortDis);
//	return 0;
//}