//#include<iostream>
//#include<string>
//#include<queue>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int maxn = -1, lastIndex = -1;
//struct node
//{
//	int l = -1, r = -1;
//};
//bool visit[25];
//vector<node>v(25);
//void dfs(int root, int index) {
//	if (index > maxn) {
//		maxn = index;
//		lastIndex = root;
//	}
//	if (v[root].l != -1)dfs(v[root].l, index * 2);
//	if (v[root].r != -1)dfs(v[root].r, index * 2 + 1);
//}
//int main() {
//	int n;
//	string a, b;
//	scanf_s("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a >> b;
//		if (a != "-") {
//			v[i].l = (stoi(a));
//			visit[stoi(a)] = true;
//		}
//		if (b != "-") {
//			v[i].r = (stoi(b));
//			visit[stoi(b)] = true;
//		}
//	}
//	int root = 0, nodeNum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (!visit[i]) {
//			root = i; break;
//		}
//	}
//	dfs(root, 1);
//	if (maxn == n) {
//		printf("YES %d", lastIndex);
//	}
//	else {
//		printf("NO %d", root);
//	}
//
//	return 0;
//}