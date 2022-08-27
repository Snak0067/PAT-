//#include<iostream>
//#include<string>
//#include<queue>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//vector<vector<int>>v(11);
//bool mention[11];
//vector<int> ans;
//void dfs(int root) {
//	if (root == -1)return;
//	dfs(v[root][1]);
//	ans.push_back(root);
//	dfs(v[root][0]);
//}
//int main() {
//	int n;
//	string a, b;
//	scanf_s("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a >> b;
//		if (a == "-") {
//			v[i].push_back(-1);
//		}
//		else {
//			v[i].push_back(stoi(a));
//			mention[stoi(a)] = true;
//		}
//		if (b == "-") {
//			v[i].push_back(-1);
//		}
//		else {
//			v[i].push_back(stoi(b));
//			mention[stoi(b)] = true;
//		}
//	}
//	int root;
//	for (int i = 0; i < n; i++)
//	{
//		if (!mention[i]) {
//			root = i;
//			break;
//		}
//	}
//	queue<int>q;
//	q.push(root);
//	while (!q.empty()) {
//		int top = q.front();
//		ans.push_back(top);
//		q.pop();
//		if (v[top][1] != -1)q.push(v[top][1]);
//		if (v[top][0] != -1)q.push(v[top][0]);
//	}
//	printf("%d", ans[0]);
//	for (int i = 1; i < n; i++)printf(" %d", ans[i]);
//	ans.clear();
//	dfs(root);
//	printf("\n%d", ans[0]);
//	for (int i = 1; i < n; i++)printf(" %d", ans[i]);
//	return 0;
//}