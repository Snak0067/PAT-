//#include<iostream>
//#include<string>
//#include<unordered_map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int n, m, k, a, b;
//int vec[1010][1010];
//unordered_map<int, unordered_map<int, int>>father;
//vector<vector<int>>child;
//bool judge(vector<int>v) {
//	unordered_map<int, int>mmap;
//	for (int i = 0; i < v.size(); i++)
//	{
//		if (mmap.find(v[i]) != mmap.end())return false;
//		mmap[v[i]]++;
//		if (i != 0 && vec[v[i - 1]][v[i]] == -1) {
//			for (int x : child[v[i - 1]])
//			{
//				if (mmap.find(x) == mmap.end())return false;
//			}
//		}
//	}
//	if (mmap.size() != n)return false;
//	return true;
//}
//
//int main() {
//
//	scanf_s("%d%d%d", &n, &m, &k);
//	child.resize(n + 1);
//	fill(vec[0], vec[0] + 1010 * 1010, -1);
//	for (int i = 0; i < m; i++)
//	{
//		scanf_s("%d%d", &a, &b);
//		vec[a][b] = 1;
//		father[b][a] = 1;
//		child[a].push_back(b);
//	}
//	for (int i = 0; i < k; i++)
//	{
//		vector<int>test;
//		for (int j = 0; j < n; j++)
//		{
//			scanf_s("%d", &a);
//			test.push_back(a);
//		}
//		printf("%s\n", judge(test) == true ? "yes" : "no");
//	}
//	return 0;
//}