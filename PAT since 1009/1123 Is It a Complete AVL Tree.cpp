//#include<iostream>
//#include<string>
//#include<queue>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//struct node
//{
//	int val = -1;
//	node* left = nullptr, * right = nullptr;
//	node() {}
//	node(int v) { val = v; }
//};
//
//node* rightRotation(node* root) {
//	node* child = root->left;
//	root->left = child->right;
//	child->right = root;
//	return child;
//}
//node* leftRotation(node* root) {
//	node* child = root->right;
//	root->right = child->left;
//	child->left = root;
//	return child;
//}
//node* leftRightRotation(node* root) {
//	root->left = leftRotation(root->left);
//	return rightRotation(root);
//}
//node* rightLeftRotation(node* root) {
//	root->right = rightRotation(root->right);
//	return leftRotation(root);
//}
//int treeHeight(node* root) {
//	if (root == nullptr)return 0;
//	return max(treeHeight(root->left), treeHeight(root->right)) + 1;
//}
//node* insertNode(node* root, int val) {
//	if (root == nullptr)return new node(val);
//	if (root->val >= val) {
//		root->left = insertNode(root->left, val);
//		int l = treeHeight(root->left), r = treeHeight(root->right);
//		if (l - r >= 2) {
//			if (val < root->left->val) {//LL型
//				root = rightRotation(root);
//			}//LR型
//			else {
//				root = leftRightRotation(root);
//			}
//		}
//	}
//	else if (root->val < val) {
//		root->right = insertNode(root->right, val);
//		int l = treeHeight(root->left), r = treeHeight(root->right);
//		if (l - r <= -2) {
//			if (val > root->right->val) {//RR型
//				root = leftRotation(root);
//			}
//			else {//RL型
//				root = rightLeftRotation(root);
//			}
//		}
//	}
//	return root;
//}
//
//int v[64], lastIndex = 0;
//vector<int>ans;
//void fullTree(node* root, int index) {
//	if (index > lastIndex)lastIndex = index;
//	v[index] = root->val;
//	if (root->left != nullptr)fullTree(root->left, index * 2 + 1);
//	if (root->right != nullptr)fullTree(root->right, index * 2 + 2);
//}
//int main() {
//	int cnt, val, n;
//	scanf_s("%d%d", &cnt, &val);
//	n = cnt;
//	node* root = new node(val); cnt--;
//	while (cnt--) {
//		scanf_s("%d", &val);
//		root = insertNode(root, val);
//	}
//	fill(v, v + 64, -1);
//	queue<node*>q;
//	q.push(root);
//	while (!q.empty()) {
//		node* temp = q.front();
//		q.pop();
//		ans.push_back(temp->val);
//		if (temp->left != nullptr) {
//			q.push(temp->left);
//		}
//		if (temp->right != nullptr) {
//			q.push(temp->right);
//		}
//	}
//	fullTree(root, 0);
//	printf("%d", ans[0]);
//	for (int i = 1; i < ans.size(); i++) {
//		printf(" %d", ans[i]);
//	}
//	printf("\n%s\n", lastIndex == n - 1 ? "YES" : "NO");
//
//	return 0;
//}