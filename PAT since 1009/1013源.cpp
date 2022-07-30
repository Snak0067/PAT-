//#include<iostream>
//#include<algorithm>
//
//using namespace std;
//
//const int maxn = 1005;
//const int INF = 100000000;
//int n, m, k;//������������·��ţ������ǵĳ��б��
//int lost;//��ʧȥ�ĳ��б��
//int G[maxn][maxn];
//bool vis[maxn];
//
//void DFS(int num) {
//	vis[num] = true;
//	for (int i = 1; i <= n; i++) {
//		if (vis[i] == false && G[num][i] != INF) {
//			if (i != lost)	DFS(i);
//		}
//	}
//}
//
//int main() {
//	cin >> n >> m >> k;
//	fill(G[0], G[0] + maxn * maxn, INF);
//	for (int i = 0; i < m; i++) {
//		int start, end;
//		cin >> start >> end;
//		G[start][end] = G[end][start] = 1;
//	}
//	while (k--) {
//		//����Ҫ���ǵĳ��еı��
//		cin >> lost;
//		fill(vis, vis + maxn, false);
//		int count = 0;//��ͨ��֧������
//		for (int i = 1; i <= n; i++) {
//			if (vis[i] == false && i != lost) {
//				DFS(i);
//				count++;
//			}
//		}
//		cout << count - 1 << endl;
//	}
//	return 0;
//}