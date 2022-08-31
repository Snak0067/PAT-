//#include<iostream>
//#include<string>
//#include<unordered_map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//unordered_map<int, int>colorKind;
//unordered_map<int, int>part;
//vector<vector<int>>mmap;
//vector<vector<int>>pre;
//bool visit[10005];
//void dfs(int root, int paint) {
//	visit[root] = true;
//	for (int i = 0; i < mmap[root].size(); i++)
//	{
//		part[mmap[root][i]] = paint;
//	}
//	for (int i = 0; i < pre[root].size(); i++)
//	{
//		if (!visit[pre[root][i]])dfs(pre[root][i], paint);
//	}
//}
//int main() {
//	int n, m, num, a, b, colorNum = 0;
//	scanf("%d", &n);
//	pre.resize(n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &m);
//		vector<int>temp(m);
//		for (int u = 0; u < m; u++)
//		{
//			scanf("%d", &num);
//			temp[u] = num;
//			if (part.find(num) == part.end()) {
//				part[num] = i;
//			}
//			else {
//				pre[i].push_back(part[num]);
//				pre[part[num]].push_back(i);
//			}
//		}
//		mmap.push_back(temp);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (!visit[i])dfs(i, i);
//	}
//	unordered_map<int, int>::iterator it = part.begin();
//	while (it != part.end()) {
//		if (colorKind.find(it->second) == colorKind.end()) {
//			colorKind[it->second] = 1;
//			colorNum++;
//		}
//		it++;
//	}
//	printf("%d %d\n", colorNum, part.size());
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		scanf("%d %d", &a, &b);
//		if (part[a] == part[b]) {
//			printf("Yes\n");
//		}
//		else printf("No\n");
//	}
//	return 0;
//}