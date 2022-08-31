#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

struct node
{
	int val;
	node* left = nullptr, * right = nullptr;
	node();
	node(int v) { val = v; }
};
void insert(node* root, int val) {
	if (val > root->val) {
		if (root->right == nullptr)root->right = new node(val);
		else insert(root->right, val);
	}
	else {
		if (root->left == nullptr)root->left = new node(val);
		else insert(root->left, val);
	}
}

int main() {
	int n, num;
	node* root = new node();
	scanf_s("%d %d", &n, &root->val);
	for (int i = 1; i < n - 1; i++)
	{
		scanf_s("%d", &num);
		insert(root, num);
	}

	return 0;
}