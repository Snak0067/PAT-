//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//const int INF = 999999999;
//int G[1020][1020];
//bool visited[1020];
//int dis[1020];
//map<string, int>GtoNum;
//int N, M, K, maxD;
//
//
//int main() {
//	scanf_s("%d%d%d%d", &N, &M, &K, &maxD);
//	for (int i = 1; i <= M; i++) {
//		string gasName = "G" + to_string(i);
//		GtoNum[gasName] = N + i;//G1-5,G2-6，序号接着房屋
//	}
//	fill(G[0], G[0] + 1020 * 1020, INF);
//	for (int i = 0; i < K; i++) {
//		string P1, P2;
//		int dist, p1, p2;
//		cin >> P1 >> P2;
//		P1[0] == 'G' ? p1 = GtoNum[P1] : p1 = stoi(P1.c_str());
//		P2[0] == 'G' ? p2 = GtoNum[P2] : p2 = stoi(P2.c_str());
//		scanf_s("%d", &dist);
//		G[p1][p2] = dist;
//		G[p2][p1] = dist;
//	}
//	int gasChosen = -1;
//	double avgChosen = -1, mindisChosen = 0;
//	for (int index = N + 1; index <= N + M; index++) {
//		double avgDis = 0.0, minDis = INF;
//		fill(visited, visited + 1020, false);
//		fill(dis, dis + 1020, INF);
//		dis[index] = 0;
//		for (int i = 0; i < N + M; i++) {
//			int next = -1, localDis = INF;
//			//选出目前距离最小的点
//			for (int j = 1; j <= N + M; j++) {
//				if (visited[j] == false && dis[j] < localDis) {
//					next = j;
//					localDis = dis[j];
//				}
//			}
//			if (next == -1)break;
//			visited[next] = true;
//			for (int j = 1; j <= N + M; j++) {
//				if (visited[j] == false && dis[j] > dis[next] + G[next][j]) {
//					dis[j] = dis[next] + G[next][j];
//				}
//			}
//		}
//		bool match = true;
//		for (int i = 1; i <= N; i++) {
//			if (dis[i] > maxD) {
//				match = false;
//				break;
//			}
//			if (minDis > dis[i]) {
//				minDis = dis[i];
//			}
//			avgDis += dis[i];
//		}
//		if (match) {
//			avgDis = avgDis / N;
//			if (minDis > mindisChosen) {
//				mindisChosen = minDis;
//				gasChosen = index;
//				avgChosen = avgDis;
//			}
//			else if (minDis == mindisChosen && avgDis < avgChosen) {
//				gasChosen = index;
//				avgChosen = avgDis;
//			}
//		}
//	}
//	if (gasChosen == -1) {
//		printf("No Solution");
//	}
//	else {
//		printf("G%d\n", gasChosen - N);
//		printf("%.1f %.1f", mindisChosen, avgChosen);
//	}
//	return 0;
//}