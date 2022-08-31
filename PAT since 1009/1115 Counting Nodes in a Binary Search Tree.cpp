//#include<iostream>
//#include<string>
//#include<queue>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//struct node
//{
//	int val, treeHeight = 0;
//	node* left = nullptr, * right = nullptr;
//	node() {}
//	node(int v) { val = v; }
//};
//void insert(node* root, int val) {
//	if (val > root->val) {
//		if (root->right == nullptr)root->right = new node(val);
//		else insert(root->right, val);
//	}
//	else {
//		if (root->left == nullptr)root->left = new node(val);
//		else insert(root->left, val);
//	}
//}
//int treeHeight(node* root) {
//	if (root == nullptr)return 0;
//	root->treeHeight = max(treeHeight(root->left), treeHeight(root->right)) + 1;
//	return root->treeHeight;
//}
//int main() {
//	int n, num;
//	node* root = new node();
//	scanf("%d", &n);
//	if (n > 0)scanf("%d", &root->val);
//	if (n == 0) {
//		printf("0 + 0 = 0");
//		return 0;
//	}
//	for (int i = 1; i < n; i++)
//	{
//		scanf("%d", &num);
//		insert(root, num);
//	}
//	treeHeight(root);
//	int totalTreeHeight = root->treeHeight, level = 0, lowest = 0, lowest_above = 0, tempNum = 0, remainNum = 1;
//	int recordL = totalTreeHeight - 2 + 1;
//	queue<node*>q;
//	node* leader = new node();
//	leader->left = root;
//	q.push(leader);
//	while (!q.empty()) {
//		node* nod = q.front();
//		q.pop();
//		remainNum--;
//		if (nod->left != nullptr) {
//			q.push(nod->left);
//			tempNum++;
//		}
//		if (nod->right != nullptr) {
//			q.push(nod->right);
//			tempNum++;
//		}
//		if (remainNum == 0) {
//			remainNum = tempNum;
//			tempNum = 0;
//			level++;
//			if (level >= recordL) {
//				if (lowest_above == 0)lowest_above = remainNum;
//				else {
//					lowest = remainNum;
//					break;
//				}
//			}
//		}
//	}
//	printf("%d + %d = %d", lowest, lowest_above, lowest + lowest_above);
//	return 0;
//}