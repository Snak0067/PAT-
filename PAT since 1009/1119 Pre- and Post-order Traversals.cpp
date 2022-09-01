//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//vector<int>pre, post;
//vector<vector<int>>tree;
//bool Unique = true;
//int n;
//void traverse(int root, int prei, int prej, int posti, int postj) {
//	if (prei >= n || prei > prej || postj < 0 || postj < posti)return;
//	if (prei == prej) {
//		Unique = false;
//		tree[root].push_back(pre[prei]);
//		return;
//	}
//	if (pre[prei] != post[postj]) {
//		tree[root].push_back(pre[prei]);
//		tree[root].push_back(post[postj]);
//		int right = prej, left = posti;
//		while (pre[right] != post[postj]) { right--; }
//		while (post[left] != pre[prei]) { left++; }
//		traverse(pre[prei], prei + 1, right - 1, posti, left - 1);
//		traverse(pre[right], right + 1, prej, left + 1, postj - 1);
//	}
//	else {
//		Unique = false;
//		tree[root].push_back(pre[prei]);
//		traverse(pre[prei], prei + 1, prej, posti, postj - 1);
//	}
//}
//void dfs(int root) {
//	if (tree[root].size() > 0)dfs(tree[root][0]);
//	if (Unique == false) {
//		printf("%d", root);
//		Unique = true;
//	}
//	else {
//		printf(" %d", root);
//	}
//	if (tree[root].size() > 1)dfs(tree[root][1]);
//}
//int main() {
//	scanf_s("%d", &n);
//	pre.resize(n);
//	post.resize(n);
//	tree.resize(50);
//	for (int i = 0; i < n; i++)
//	{
//		scanf_s("%d", &pre[i]);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		scanf_s("%d", &post[i]);
//	}
//	int root = pre[0];
//	traverse(root, 1, n - 1, 0, n - 2);
//	if (Unique) {
//		printf("Yes\n");
//	}
//	else {
//		printf("No\n");
//	}
//	Unique = false;
//	dfs(root);
//	printf("\n");
//	return 0;
//}