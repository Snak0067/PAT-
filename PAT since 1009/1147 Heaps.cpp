//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
////2 maxheap 1 minheap 0 non-heap
//int ifHeap(vector<int>tree) {
//	int kind = tree[0] > tree[1] ? 2 : 1, len = tree.size();
//	for (int i = len - 1; i >= 1; i--)
//	{
//		int kindc = tree[(i - 1) / 2] > tree[i] ? 2 : 1;
//		if (kindc != kind)return 0;
//	}
//	return kind;
//}
//void post(vector<int>tree, vector<int>& ans, int len, int index) {
//	if (index * 2 + 1 < len)post(tree, ans, len, index * 2 + 1);
//	if (index * 2 + 2 < len)post(tree, ans, len, index * 2 + 2);
//	ans.push_back(tree[index]);
//}
//
//int main() {
//	vector<int>tree;
//	int m, n;
//	scanf_s("%d%d", &m, &n);
//	for (int i = 0; i < m; i++)
//	{
//		tree.clear();
//		tree.resize(n);
//		for (int j = 0; j < n; j++)
//		{
//			scanf_s("%d", &tree[j]);
//		}
//		int kind = ifHeap(tree);
//		if (kind == 2)printf("Max Heap\n");
//		else if (kind == 1)printf("Min Heap\n");
//		else if (kind == 0)printf("Not Heap\n");
//		vector<int>ans;
//		post(tree, ans, tree.size(), 0);
//		for (int j = 0; j < ans.size(); j++)
//		{
//			if (j != 0)printf(" ");
//			printf("%d", ans[j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}