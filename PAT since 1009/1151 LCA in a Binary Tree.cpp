//#include<iostream>
//#include<string>
//#include<unordered_map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct node {
//	int val;
//	node* left = nullptr, * right = nullptr, * father = nullptr;
//	node(int v) { val = v; }
//};
//vector<int>in, pre;
//unordered_map<int, int>mmap;
//unordered_map<int, node*>nodeMap;
//node* build(int ini, int inj, int prei, int prej) {
//	int val = pre[prei], index = ini;
//	node* root = new node(val);
//	while (in[index] != val)index++;
//	int ln = index - ini, rn = inj - index;
//	if (ln > 0) {
//		root->left = build(ini, index - 1, prei + 1, prei + ln);
//		root->left->father = root;
//	}
//	if (rn > 0) {
//		root->right = build(index + 1, inj, prei + 1 + ln, prej);
//		root->right->father = root;
//	}
//	nodeMap[val] = root;
//	return root;
//}
//int findFather(int a, int b) {
//	unordered_map<int, int>father;
//	node* af = nodeMap[a], * bf = nodeMap[b];
//	while (af != nullptr && bf != nullptr) {
//		if (father.find(af->val) != father.end()) {
//			return af->val;
//		}
//		father[af->val] = 1;
//		if (father.find(bf->val) != father.end()) {
//			return bf->val;
//		}
//		father[bf->val] = 1;
//		af = af->father;
//		bf = bf->father;
//	}
//	while (af != nullptr) {
//		if (father.find(af->val) != father.end()) {
//			return af->val;
//		}
//		father[af->val] = 1;
//		af = af->father;
//	}
//	while (bf != nullptr) {
//		if (father.find(bf->val) != father.end()) {
//			return bf->val;
//		}
//		father[bf->val] = 1;
//		bf = bf->father;
//	}
//	return -1;
//}
//int main() {
//	int m, n, a, b;
//	scanf_s("%d%d", &m, &n);
//	in.resize(n);
//	pre.resize(n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf_s("%d", &in[i]);
//		mmap[in[i]] = 1;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		scanf_s("%d", &pre[i]);
//	}
//	node* root = build(0, n - 1, 0, n - 1);
//	for (int i = 0; i < m; i++)
//	{
//		scanf_s("%d%d", &a, &b);
//		int flag1 = mmap.find(a) == mmap.end() ? -1 : 1;
//		int flag2 = mmap.find(b) == mmap.end() ? -1 : 1;
//		if (flag1 == -1 && flag2 == -1) {
//			printf("ERROR: %d and %d are not found.\n", a, b);
//		}
//		else if (flag1 == -1 || flag2 == -1) {
//			printf("ERROR: %d is not found.\n", flag1 == -1 ? a : b);
//		}
//		else {
//			int father = findFather(a, b);
//			if (father == a) {
//				printf("%d is an ancestor of %d.\n", a, b);
//			}
//			else if (father == b) {
//				printf("%d is an ancestor of %d.\n", b, a);
//			}
//			else {
//				printf("LCA of %d and %d is %d.\n", a, b, father);
//			}
//		}
//	}
//	return 0;
//}