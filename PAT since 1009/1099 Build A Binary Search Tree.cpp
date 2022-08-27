//#include<iostream>
//#include<string>
//#include<queue>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//vector<vector<int>>node(105, vector<int>(4));
//vector<int>leftNum(105);
//vector<int>rightNum(105);
//vector<int>v, ans;
//int dfs(int root) {
//	if (root == -1)return 0;
//	if (node[root][0] != -1) {
//		leftNum[root] = dfs(node[root][0]);
//	}
//	if (node[root][1] != -1) {
//		rightNum[root] = dfs(node[root][1]);
//	}
//	return leftNum[root] + rightNum[root] + 1;
//}
//int main() {
//	int n, root = 0;
//	scanf_s("%d", &n);
//	v.resize(n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf_s("%d", &node[i][0]);
//		scanf_s("%d", &node[i][1]);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		scanf_s("%d", &v[i]);
//	}
//	dfs(0);
//	sort(v.begin(), v.end());
//	queue<int>q, p;
//	q.push(root);
//	p.push(0);
//	while (!q.empty()) {
//		int top = q.front(), dis = p.front();
//		int index = leftNum[top];
//		ans.push_back(v[index + dis]);
//		q.pop();
//		p.pop();
//		if (node[top][0] != -1) {
//			q.push(node[top][0]);
//			p.push(dis);
//		}
//		if (node[top][1] != -1) {
//			q.push(node[top][1]);
//			p.push(index + dis + 1);
//		}
//	}
//	printf("%d", ans[0]);
//	for (int i = 1; i < n; i++)
//	{
//		printf(" %d", ans[i]);
//	}
//	return 0;
//}
