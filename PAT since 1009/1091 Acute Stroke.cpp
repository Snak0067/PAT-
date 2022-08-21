//#include<iostream>
//#include<string>
//#include<queue>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int m, n, l, t;
//struct node
//{
//	int x, y, z;
//	node(int xx, int yy, int zz) { x = xx, y = yy, z = zz; }
//};
//int core[1300][130][80];
//bool visit[1300][130][80];
//
//bool judge(int x, int y, int z) {
//	if (x < 0 || x >= m || y < 0 || y >= n || z < 0 || z >= l)return false;
//	if (core[x][y][z] == 0 || visit[x][y][z] == true)return false;
//	return true;
//}
////东西南北上下
//int X[6] = { -1, 1, 0, 0, 0, 0 };
//int Y[6] = { 0, 0,-1, 1, 0, 0 };
//int Z[6] = { 0, 0, 0, 0, 1,-1 };
//int bfs(int x, int y, int z) {
//	int cnt = 0;
//	queue<node>q;
//	q.push(node(x, y, z));
//	visit[x][y][z] = true;
//	while (q.size() != 0) {
//		node top = q.front();
//		q.pop();
//		cnt++;
//		for (int i = 0; i < 6; i++)
//		{
//			int tx = top.x + X[i];
//			int ty = top.y + Y[i];
//			int tz = top.z + Z[i];
//			if (judge(tx, ty, tz)) {
//				visit[tx][ty][tz] = true;
//				q.push(node(tx, ty, tz));
//			}
//		}
//	}
//	return cnt >= t ? cnt : 0;
//}
//int main() {
//	scanf_s("%d %d %d %d", &m, &n, &l, &t);
//	for (int z = 0; z < l; z++)
//	{
//		for (int x = 0; x < m; x++)
//		{
//			for (int y = 0; y < n; y++)scanf_s("%d", &core[x][y][z]);
//		}
//	}
//	int ans = 0;
//	for (int z = 0; z < l; z++)
//	{
//		for (int x = 0; x < m; x++)
//		{
//			for (int y = 0; y < n; y++) {
//				if (core[x][y][z] == 1 && visit[x][y][z] == false) {
//					ans += bfs(x, y, z);
//				}
//			}
//		}
//	}
//	cout << ans;
//	return 0;
//}