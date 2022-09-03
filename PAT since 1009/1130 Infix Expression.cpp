//#include<iostream>
//#include<string>
//#include<unordered_map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//unordered_map<int, string>mmap;
//vector<int>tree[25];
//bool visit[25];
//string ans;
//int root = 1, n, a, b;
//string dfs(int index) {
//	if (index == -1)return "";
//	int left = tree[index][0], right = tree[index][1];
//	if (right != -1) {
//		mmap[index] = dfs(left) + mmap[index] + dfs(right);
//		if (index != root)mmap[index] = "(" + mmap[index] + ")";
//	}
//	return mmap[index];
//}
//int main() {
//	string syntax;
//	scanf_s("%d", &n);
//	fill(visit, visit + 25, false);
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> syntax;
//		scanf_s("%d%d", &a, &b);
//		mmap[i] = syntax;
//		tree[i].push_back(a);
//		tree[i].push_back(b);
//		if (a != -1)visit[a] = true;
//		if (b != -1)visit[b] = true;
//	}
//	while (visit[root])root++;
//	printf("%s", dfs(root).c_str());
//	return 0;
//}