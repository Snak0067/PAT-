//#include<iostream>
//#include<string>
//#include<queue>
//#include<unordered_map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//struct node
//{
//	int val;
//	node* left = nullptr, * right = nullptr, * father = nullptr;
//	node(int v) { val = v; }
//};
//bool fulltree = true;
//vector<int>post, in;
//unordered_map<int, node*>nodes;
//node* build(int ini, int inj, int posti, int postj) {
//	if (ini > inj || posti > postj)return nullptr;
//	node* root = new node(post[postj]);
//	int rid = ini, kidnum = 0;
//	while (rid <= inj && in[rid] != post[postj])rid++;
//	int leftn = rid - ini, rightn = inj - rid;
//	if (leftn > 0) {
//		root->left = build(ini, rid - 1, posti, posti + leftn - 1);
//		root->left->father = root;
//		kidnum++;
//	}
//	if (rightn > 0) {
//		root->right = build(rid + 1, inj, postj - rightn, postj - 1);
//		root->right->father = root;
//		kidnum++;
//	}
//	if (kidnum == 1)fulltree = false;
//	nodes[root->val] = root;
//	return root;
//}
//bool findfather(node* child, node* father) {
//	while (child != nullptr && child != father) {
//		child = child->father;
//	}
//	return child == nullptr ? false : true;
//}
//
//
//int main() {
//	int n, a;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a;
//		post.push_back(a);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a;
//		in.push_back(a);
//	}
//	node* root = build(0, n - 1, 0, n - 1);
//	unordered_map<int, int>nodeLevel;
//	queue<node*>q;
//	q.push(root);
//	int remain = 1, kidnum = 0, level = 1;
//	while (!q.empty()) {
//		node* top = q.front();
//		nodeLevel[top->val] = level;
//		q.pop();
//		remain--;
//		if (top->left != nullptr) {
//			q.push(top->left);
//			kidnum++;
//		}
//		if (top->right != nullptr) {
//			q.push(top->right);
//			kidnum++;
//		}
//		if (remain == 0) {
//			remain = kidnum;
//			kidnum = 0;
//			level++;
//		}
//	}
//	int k;
//	string input;
//	cin >> k;
//	getline(cin, input);
//	for (int i = 0; i < k; i++)
//	{
//		input.clear();
//		getline(cin, input);
//		if (input.find("root") != string::npos) {
//			int inputNum = stoi(input.substr(0, input.find_first_of(' ')));
//			printf("%s\n", inputNum != root->val ? "No" : "Yes");
//		}
//		else if (input.find("of") != string::npos) {
//			int a = stoi(input.substr(0, input.find_first_of(' ')));
//			int b = stoi(input.substr(input.find_last_of(' ')));
//			if (input.find("parent") != string::npos) {
//				printf("%s\n", nodes[b]->father != nodes[a] ? "No" : "Yes");
//			}
//			else if (input.find("left") != string::npos) {
//				printf("%s\n", nodes[b]->left != nodes[a] ? "No" : "Yes");
//			}
//			else if (input.find("right") != string::npos) {
//				printf("%s\n", nodes[b]->right != nodes[a] ? "No" : "Yes");
//			}
//		}
//		else if (input.find("siblings") != string::npos) {
//			string sub = input.substr(0, input.find("are") - 1);
//			int a = stoi(sub.substr(0, sub.find_first_of(' ')));
//			int b = stoi(sub.substr(sub.find_last_of(' ')));
//			printf("%s\n", nodes[a]->father != nodes[b]->father ? "No" : "Yes");
//		}
//		else if (input.find("level") != string::npos) {
//			string sub = input.substr(0, input.find("are") - 1);
//			int a = stoi(sub.substr(0, sub.find_first_of(' ')));
//			int b = stoi(sub.substr(sub.find_last_of(' ')));
//			printf("%s\n", nodeLevel[a] != nodeLevel[b] ? "No" : "Yes");
//		}
//		else {
//			printf("%s\n", fulltree == false ? "No" : "Yes");
//		}
//	}
//	return 0;
//}