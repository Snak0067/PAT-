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
////�������ĸ߶�
//int getHeight(node* root) {
//	if (root == NULL) {
//		return 0;
//	}
//	else {
//		return max(getHeight(root->left), getHeight(root->right)) + 1;
//	}
//}
////���㵱ǰ�ڵ��ƽ������ �������߶�-�������ĸ߶�
//int getBalanceFactor(node* root) {
//	if (root == NULL)return 0;
//	return root->left->height - root->right->height;
//}
////��������
//node* rotateLeft(node* root) {
//	node* t = root->right;
//	root->right = t->left;
//	t->left = root;
//	return t;
//}
////��������
//node* rotateRight(node* root) {
//	node* t = root->left;
//	root->left = t->right;
//	t->right = root;
//	return t;
//}
////��������
//node* rotateRightLeft(node* root) {
//	root->right = rotateRight(root->right);
//	return rotateLeft(root);
//}
////��������
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
//	}//���ڵ���ڣ��Ҳ�����ֵС�ڸ��ڵ���ֵ
//	else if (val < root->data) {
//		root->left = insert(root->left, val);
//		if (getHeight(root->left) - getHeight(root->right) == 2) {
//			if (val < root->left->data) {
//				root = rotateRight(root);//ΪLL��
//			}
//			else {
//				root = rotateLeftRight(root);//ΪLR��
//			}
//		}
//	}
//	else {
//		root->right = insert(root->right, val);
//		if (getHeight(root->left) - getHeight(root->right) == -2) {
//			if (val < root->right->data) {
//				root = rotateRightLeft(root);//ΪRL��
//			}
//			else {
//				root = rotateLeft(root);//ΪRR��
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