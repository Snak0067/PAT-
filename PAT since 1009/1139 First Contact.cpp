#include<iostream>
#include<string>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;
struct node {
	int id;
	string name;
	vector<string>friends;
};
unordered_map<string, node>name;
bool cmp(string a, string b) {
	return abs(stoi(a)) < abs(stoi(b));
}
int dis[305][305];
int main() {
	int n, m, k, index = 0;
	fill(dis[0], dis[0] + 305 * 305, -1);
	string a, b, A, B;
	scanf("%d%d", &n, &m);
	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;
		if (name.find(a) == name.end()) {
			name[a].id = index++;
		}
		if (name.find(b) == name.end()) {
			name[b].id = index++;
		}
		name[a].name = a;
		name[a].friends.push_back(b);
		name[b].name = a;
		name[b].friends.push_back(a);
		dis[name[a].id][name[b].id] = dis[name[b].id][name[a].id] = 1;
	}
	scanf("%d", &k);
	for (int i = 0; i < k; i++)
	{
		cin >> A >> B;
		vector<string>afri, bfri;
		for (int u = 0; u < name[A].friends.size(); u++) {
			if (name[A].friends[u].length() == A.length() && name[A].friends[u] != B)afri.push_back(name[A].friends[u]);
		}
		for (int u = 0; u < name[B].friends.size(); u++) {
			if (name[B].friends[u].length() == B.length() && name[B].friends[u] != A)bfri.push_back(name[B].friends[u]);
		}
		sort(afri.begin(), afri.end(), cmp);
		sort(bfri.begin(), bfri.end(), cmp);
		vector<string>ans;
		for (int u = 0; u < afri.size(); u++)
		{
			for (int r = 0; r < bfri.size(); r++)
			{
				if (dis[name[afri[u]].id][name[bfri[r]].id] == 1) {
					ans.push_back(afri[u]);
					ans.push_back(bfri[r]);
				}
			}
		}
		printf("%d\n", ans.size() / 2);
		for (int r = 0; r < ans.size(); r += 2)
		{
			string oupa = ans[r].length() != 4 ? ans[r].substr(1) : ans[r];
			string oupb = ans[r + 1].length() != 4 ? ans[r + 1].substr(1) : ans[r + 1];
			printf("%s %s\n", oupa.c_str(), oupb.c_str());
		}
	}
	return 0;
}