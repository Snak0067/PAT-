#include<iostream>
#include<string>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int m, n, u, v, num;
	scanf("%d%d", &m, &n);
	unordered_map<int, bool>mmap;
	vector<int>pre(n + 1);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &pre[i]);
		mmap[pre[i]] = true;
	}
	for (int i = 0; i < m; i++)
	{
		scanf("%d%d", &u, &v);
		int temp;
		for (int j = 0; j < n; j++)
		{
			temp = pre[j];
			if ((temp > u && temp < v) || (temp<u && temp>v) || temp == u || temp == v)break;
		}
		if (mmap[u] == false && mmap[v] == false) {
			printf("ERROR: %d and %d are not found.\n", u, v);
		}
		else if (mmap[u] == false || mmap[v] == false) {
			printf("ERROR: %d is not found.\n", mmap[u] == false ? u : v);
		}
		else if (temp == u || temp == v) {
			printf("%d is an ancestor of %d.\n", temp == u ? u : v, temp == u ? v : u);
		}
		else {

			printf("LCA of %d and %d is %d.\n", u, v, temp);
		}
	}
	return 0;
}