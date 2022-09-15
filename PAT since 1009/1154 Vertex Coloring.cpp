//#include<iostream>
//#include<string>
//#include<unordered_map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//struct node
//{
//	int x, y;
//};
//vector<node>v;
//
//int main() {
//	int n, m, k, a, b;
//	scanf("%d%d", &n, &m);
//	for (int i = 0; i < m; i++)
//	{
//		scanf("%d%d", &a, &b);
//		v.push_back(node({ a,b }));
//	}
//
//	scanf("%d", &k);
//	for (int i = 0; i < k; i++)
//	{
//		unordered_map<int, int>mmap;
//		vector<int>color(n);
//		for (int j = 0; j < n; j++) {
//			scanf("%d", &color[j]);
//			mmap[color[j]]++;
//		}
//		bool same = false;
//		for (int j = 0; j < v.size() && !same; j++)
//		{
//			if (color[v[j].x] == color[v[j].y])same = true;
//		}
//		if (!same) {
//			printf("%d-coloring\n", mmap.size()); continue;
//		}
//		printf("No\n");
//	}
//	return 0;
//}