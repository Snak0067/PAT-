//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//struct node {
//	int data, height;
//	node* left;
//	node* right;
//};
////计算树的高度
//int getHeight(node* root) {
//	if (root == NULL) {
//		return 0;
//	}
//	else {
//		return max(getHeight(root->left), getHeight(root->right)) + 1;
//	}
//}
////计算当前节点的平衡因子 左子树高度-右子树的高度
//int getBalanceFactor(node* root) {
//	if (root == NULL)return 0;
//	return root->left->height - root->right->height;
//}
////左旋操作
//node* rotateLeft(node* root) {
//	node* t = root->right;
//	root->right = t->left;
//	t->left = root;
//	return t;
//}
////右旋操作
//node* rotateRight(node* root) {
//	node* t = root->left;
//	root->left = t->right;
//	t->right = root;
//	return t;
//}
////右旋左旋
//node* rotateRightLeft(node* root) {
//	root->right = rotateRight(root->right);
//	return rotateLeft(root);
//}
////左旋右旋
//node* rotateLeftRight(node* root) {
//	root->left = rotateLeft(root->left);
//	return rotateRight(root);
//}
//
//node* insert(node* root, int val) {
//	if (root == NULL) {
//		root = new node();
//		root->data = val;
//		root->left = root->right = NULL;
//	}//根节点存在，且插入数值小于根节点数值
//	else if (val < root->data) {
//		root->left = insert(root->left, val);
//		if (getHeight(root->left) - getHeight(root->right) == 2) {
//			if (val < root->left->data) {
//				root = rotateRight(root);//为LL型
//			}
//			else {
//				root = rotateLeftRight(root);//为LR型
//			}
//		}
//	}
//	else {
//		root->right = insert(root->right, val);
//		if (getHeight(root->left) - getHeight(root->right) == -2) {
//			if (val < root->right->data) {
//				root = rotateRightLeft(root);//为RL型
//			}
//			else {
//				root = rotateLeft(root);//为RR型
//			}
//		}
//	}
//	return root;
//}
//
//int main() {
//	int n, num;
//	scanf_s("%d", &n);
//	node* root = NULL;
//	for (unsigned i = 0; i < n; i++)
//	{
//		scanf_s("%d", &num);
//		root = insert(root, num);
//	}
//	printf("%d", root->data);
//
//	return 0;
//}