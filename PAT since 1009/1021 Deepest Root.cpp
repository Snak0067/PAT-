//#include<iostream>
//#include<vector>
//#include<map>
//#include<set>
//#include <algorithm>
//using namespace std;
//
//const int maxn = 10000;
//bool visited[maxn] = { false };
//vector<vector<int>>v;
//vector<int>chosen;
//int maxHeight = 0;
//int chosenNode = 0;
//set<int>s;
//void dfs(int node, int height) {
//	//如果进入更深的程度，另计
//	if (height > maxHeight) {
//		chosen.clear();
//		chosen.push_back(node);
//		maxHeight = height;
//	}
//	//如果层次相同，记录该节点
//	else if (height == maxHeight) chosen.push_back(node);
//	//如果当前层次小于最大深度，则继续深度遍历
//	visited[node] = true;
//	//拓展当前子节点
//	for (int i = 0; i < v[node].size(); i++) {
//		if (visited[v[node][i]] == false) {
//			dfs(v[node][i], height + 1);
//		}
//	}
//
//}
//
//int main() {
//	int n, a, b, cnt = 0;
//	cin >> n;
//	v.resize(n + 1);
//	for (int i = 0; i < n - 1; i++) {
//		scanf_s("%d", &a);
//		scanf_s("%d", &b);
//		v[a].push_back(b);
//		v[b].push_back(a);
//	}
//	for (int i = 1; i <= n; i++) {
//		if (visited[i] == false) {
//			dfs(i, 1);
//			if (chosen.size() != 0)chosenNode = chosen[0];
//			for (int j = 0; j < chosen.size(); j++) {
//				s.insert(chosen[j]);
//			}
//			cnt++;
//		}
//
//	}
//	if (cnt >= 2) {
//		printf_s("Error: %d components", cnt);
//	}
//	else {
//		chosen.clear();
//		maxHeight = 0;
//		fill(visited, visited + maxn, false);
//		dfs(chosenNode, 1);
//		for (int i = 0; i < chosen.size(); i++) {
//			s.insert(chosen[i]);
//		}
//		for (set<int>::iterator iter = s.begin(); iter != s.end(); iter++) {
//			cout << *iter << endl;
//		}
//	}
//
//	return 0;
//}