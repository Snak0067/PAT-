//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct node {
//	string ch;
//	int left = -1, right = -1;
//};
//vector<node>v;
//vector<int>mark;
//void post(int root) {
//	cout << "(";
//	if (v[root].left * v[root].right > 1) {
//		post(v[root].left);
//		post(v[root].right);
//	}
//	cout << v[root].ch;
//	if (v[root].left * v[root].right < 1)post(v[root].right);
//	cout << ")";
//}
//int main() {
//	int n, root;
//	cin >> n;
//	v.resize(n + 1);
//	mark.resize(n + 1);
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> v[i].ch >> v[i].left >> v[i].right;
//		if (v[i].left != -1)mark[v[i].left] = 1;
//		if (v[i].right != -1)mark[v[i].right] = 1;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (!mark[i]) {
//			root = i;
//			break;
//		}
//	}
//	post(root);
//	return 0;
//}