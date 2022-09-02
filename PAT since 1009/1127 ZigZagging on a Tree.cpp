//#include<iostream>
//#include<queue>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//struct node
//{
//	int val;
//	node* left = nullptr, * right = nullptr;
//	node(int v) { val = v; }
//};
//vector<int>in, post;
//vector<vector<int>>ans;
//node* pre(int root, int ini, int inj, int posti, int postj) {
//	node* nod = new node(post[root]);
//	int inRoot = 0;
//	while (in[inRoot] != post[root])inRoot++;
//	int left = inRoot - ini, right = inj - inRoot;
//	if (left > 0)nod->left = pre(posti + left - 1, ini, inRoot - 1, posti, posti + left - 1);
//	if (right > 0)nod->right = pre(root - 1, inRoot + 1, inj, posti + left, root - 1);
//	return nod;
//}
//int main() {
//	int n, num, remain = 1, childNum = 0, level = 0;
//	scanf_s("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf_s("%d", &num);
//		in.push_back(num);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		scanf_s("%d", &num);
//		post.push_back(num);
//	}
//	node* root = pre(n - 1, 0, n - 1, 0, n - 1);
//	vector<int>temp;
//	queue<node*>q;
//	q.push(root);
//	while (!q.empty()) {
//		node* nod = q.front();
//		q.pop();
//		temp.push_back(nod->val);
//		remain--;
//		if (nod->left != nullptr) {
//			q.push(nod->left); childNum++;
//		}
//		if (nod->right != nullptr) {
//			q.push(nod->right); childNum++;
//		}
//		if (remain == 0) {
//			remain = childNum;
//			childNum = 0;
//			if (level % 2 == 0)reverse(temp.begin(), temp.end());
//			ans.push_back(temp);
//			temp.clear();
//			level++;
//		}
//	}
//	for (int i = 0; i < ans.size(); i++)
//	{
//		for (int u = 0; u < ans[i].size(); u++) {
//			if (i != 0)printf(" ");
//			printf("%d", ans[i][u]);
//		}
//	}
//	printf("\n");
//	return 0;
//}