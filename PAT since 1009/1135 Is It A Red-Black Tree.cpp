////#include<iostream>
////#include<vector>
////#include<algorithm>
////using namespace std;
////struct node
////{
////	int val;//red为1 则为红
////	node* left = nullptr, * right = nullptr;
////	node(int v) { val = v; }
////};
////node* insert(node* root, int val) {
////	if (root == nullptr) return new node(val);
////	if (abs(root->val) > abs(val)) root->left = insert(root->left, val);
////	else if (abs(root->val) < abs(val))root->right = insert(root->right, val);
////	return root;
////}
//////If a node is red, then both its children are black.
////bool judge1(node* root) {
////	if (root == nullptr)return true;
////	if (root->val < 0) {
////		if (root->left != nullptr && root->left->val < 0)return false;
////		if (root->right != nullptr && root->right->val < 0)return false;
////	}
////	return judge1(root->left) && judge1(root->right);
////}
////int getNum(node* root) {
////	if (root == nullptr)return 0;
////	int l = getNum(root->left);
////	int r = getNum(root->right);
////	return root->val > 0 ? max(l, r) + 1 : max(l, r);
////}
////bool judge2(node* root) {
////	if (root == nullptr)return true;
////	int l = getNum(root->left);
////	int r = getNum(root->right);
////	if (l != r)return false;
////	return judge2(root->left) && judge2(root->right);
////}
////int main() {
////	int k, n, val;
////	scanf_s("%d", &k);
////	for (int i = 0; i < k; i++)
////	{
////		scanf_s("%d", &n);
////		node* root = nullptr;
////		int flag;
////		for (int j = 0; j < n; j++)
////		{
////			scanf_s("%d", &val);
////			root = insert(root, val);
////		}
////		if (root->val > 0 && judge1(root) && judge2(root)) {
////			printf("Yes\n");
////		}
////		else {
////			printf("No\n");
////		}
////	}
////	return 0;
////}
//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//struct node
//{
//	int val, red, blackNums = 0;//red为1 则为红
//	node* left = nullptr, * right = nullptr;
//	node(int v, int r) { val = v, red = r; }
//};
//
//node* insert(node* root, int val, int flag) {
//	if (root == nullptr) {
//		return new node(val, flag);
//	}
//	if (root->val > val) {
//		root->left = insert(root->left, val, flag);
//	}
//	else if (root->val < val) {
//		root->right = insert(root->right, val, flag);
//	}
//	return root;
//}
//int blackNum(node* root) {
//	if (root == nullptr)return 0;
//	int left = 0, right = 0;
//	if (root->left != nullptr)left = blackNum(root->left);
//	if (root->right != nullptr) right = blackNum(root->right);
//	root->blackNums = (max(left, right) + 1 - root->red);
//	return root->blackNums;
//}
//int getBlackNum(node* root) {
//	if (root == nullptr)return 0;
//	return root->blackNums;
//}
//bool judge(node* root) {
//	if (root == nullptr)return true;
//	// If a node is red, then both its children are black.
//	if (root->red == 1) {
//		if (root->left != nullptr && root->left->red == 1)return false;
//		if (root->right != nullptr && root->right->red == 1)return false;
//	}
//	// all simple paths from the node to descendant leaves contain the same number of black nodes.
//	if (getBlackNum(root->left) != getBlackNum(root->right))return false;
//	return judge(root->left) && judge(root->right);
//}
//int main() {
//	int k, n, val;
//	scanf_s("%d", &k);
//	for (int i = 0; i < k; i++)
//	{
//		scanf_s("%d", &n);
//		node* root = nullptr;
//		int flag;
//		for (int j = 0; j < n; j++)
//		{
//			flag = 0;
//			scanf_s("%d", &val);
//			if (val < 0) {
//				val = 0 - val;
//				flag = 1;
//			}
//			root = insert(root, val, flag);
//		}
//		blackNum(root);
//		if (root->red == 0 && judge(root)) {
//			printf("Yes\n");
//		}
//		else {
//			printf("No\n");
//		}
//	}
//
//	return 0;
//}