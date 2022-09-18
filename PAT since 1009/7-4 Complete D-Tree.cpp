//#include<iostream>
//#include<queue>
//#include<unordered_map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int n, degree, index = 0;
//struct node
//{
//	int val;
//	node* father = nullptr;
//	vector<node*>child;
//	node(int v) { val = v; }
//};
//vector<int>pre, level;
//unordered_map<int, node*>mmap;
//node* build(int xuhao) {
//	int temp = index;
//	index++;
//	node* root = new node(pre[temp]);
//	for (int i = 1; i <= degree; i++)
//	{
//		int next = xuhao * degree + i;
//		if (next < n) {
//			node* nod = build(next);
//			nod->father = root;
//			root->child.push_back(nod);
//		}
//	}
//	mmap[pre[temp]] = root;
//	return root;
//}
//void findfather(node* root, int index) {
//	if (root == nullptr) {
//		printf("\n");
//		return;
//	}
//	if (index != 0)printf(" ");
//	printf("%d", root->val);
//	findfather(root->father, index + 1);
//}
//int main() {
//	scanf_s("%d%d", &n, &degree);
//	pre.resize(n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf_s("%d", &pre[i]);
//	}
//	node* root = build(0);
//	queue<node*>q;
//	q.push(root);
//	while (!q.empty()) {
//		node* top = q.front();
//		q.pop();
//		level.push_back(top->val);
//		for (node* nod : top->child)
//		{
//			q.push(nod);
//		}
//	}
//	int k, query;
//	scanf_s("%d", &k);
//	for (int i = 0; i < n; i++)
//	{
//		if (i != 0)printf(" ");
//		printf("%d", level[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < k; i++)
//	{
//		scanf_s("%d", &query);
//		node* nod = mmap[level[query]];
//		findfather(nod, 0);
//	}
//	return 0;
//}