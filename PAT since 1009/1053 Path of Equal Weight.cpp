#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int N, M, S, num, w;
int weight[105];
string leafNode;
vector<int>pre[105];
vector<vector<int>>paths;
vector<int>path;

void dfs(int lcnode, int current) {
	if (current == S && pre[lcnode].size() == 0) {
		paths.push_back(path);
		return;
	}
	else if (current < S) {
		for (int i = 0; i < pre[lcnode].size(); i++) {
			path.push_back(weight[pre[lcnode][i]]);
			dfs(pre[lcnode][i], current + weight[pre[lcnode][i]]);
			path.pop_back();
		}
	}
	return;
}

bool cmp_v(vector<int>v1, vector<int>v2, int index) {
	if (index == v1.size() && index == v2.size())return true;
	else if (index >= v1.size())return false;
	else if (index >= v2.size())return true;
	else {
		if (v1[index] == v2[index])return cmp_v(v1, v2, ++index);
		else {
			return v1[index] > v2[index];
		}
	}
}

void sort() {
	for (int i = 0; i < paths.size() - 1; i++) {
		for (int j = 0; j < paths.size() - i - 1; j++) {
			if (!cmp_v(paths[j], paths[j + 1], 0)) {
				vector<int>temp = paths[j];
				paths[j] = paths[j + 1];
				paths[j + 1] = temp;
			}
		}
	}
}

int main() {
	scanf_s("%d %d %d", &N, &M, &S);
	for (int i = 0; i < N; i++) {
		scanf_s("%d", &weight[i]);
	}
	for (int i = 0; i < M; i++) {
		cin >> leafNode >> num;
		leafNode = leafNode[0] == '0' ? leafNode.substr(1, leafNode.size()) : leafNode;
		int rootNum = stoi(leafNode.c_str());
		for (int j = 0; j < num; j++) {
			scanf_s("%d", &w);
			pre[rootNum].push_back(w);
		}
	}
	path.push_back(weight[0]);
	dfs(0, weight[0]);
	sort();
	for (int i = 0; i < paths.size(); i++) {
		vector<int>path = paths[i];
		printf("%d", path[0]);
		for (int j = 1; j < path.size(); j++) {
			printf(" %d", path[j]);
		}
		printf("\n");
	}
	return 0;
}