#include<iostream>
#include<string>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>>pre;


int main() {
	int n, m, k, a, b;
	scanf_s("%d%d", &n, &m);
	pre.resize(n + 1);
	for (int i = 0; i < m; i++)
	{
		scanf_s("%d%d", &a, &b);
		pre[b].push_back(a);
	}
	scanf_s("%d", &k);
	unordered_map<int, int>query;
	vector<int>ans;
	for (int i = 0; i < k; i++)
	{
		for (int u = 0; u < n; u++)
		{
			scanf_s("%d", &a);
			query[a] = u;
		}
		bool topological = true;
		auto it = query.begin();
		while (topological && it != query.end()) {
			int element = it->first;
			for (int j = 0; j < pre[element].size() && topological; j++)
			{
				if (query[pre[element][j]] > query[element]) {
					topological = false;
				}
			}
			it++;
		}
		if (!topological)ans.push_back(i);
	}
	for (int i = 0; i < ans.size(); i++)
	{
		if (i != 0)printf(" ");
		printf("%d", ans[i]);
	}
	return 0;
}