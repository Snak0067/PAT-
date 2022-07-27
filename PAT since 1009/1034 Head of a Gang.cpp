//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//#include<map>
//using namespace std;
//
//map<string, int> weight;
//map<string, int> id;
//vector<string> pre[10010];
//map<string, int> head;
//bool visited[10010];
//int tree_num = 0, max_weight = 0, totalweight = 0;
//string max_weight_node;
//
//void check(string a, string b) {
//	bool match = false;
//	for (int i = 0; i < pre[id[a]].size() && !match; i++) {
//		if (pre[id[a]][i] == b) {
//			match = true;
//			break;
//		}
//	}
//	if (!match)pre[id[a]].push_back(b);
//}
//void dfs(string node) {
//	tree_num++;
//	int index = id[node];
//	if (weight[node] > max_weight) {
//		max_weight_node = node;
//		max_weight = weight[node];
//	}
//	totalweight += weight[node];
//	visited[index] = true;
//	if (pre[index].size() == 0) {
//		return;
//	}
//	else {
//		for (int i = 0; i < pre[index].size(); i++) {
//			string s = pre[index][i];
//			if (!visited[id[s]]) {
//				dfs(s);
//			}
//		}
//	}
//}
//
//int main() {
//	int N, weightStandard, w, index = 0;
//	string a, b;
//	cin >> N >> weightStandard;
//	for (int i = 0; i < N; i++)
//	{
//		cin >> a >> b >> w;
//		if (weight.find(a) != weight.end()) {
//			weight[a] += w;
//		}
//		else {
//			weight[a] = w;
//			id[a] = index++;
//		}
//		if (weight.find(b) != weight.end()) {
//			weight[b] += w;
//		}
//		else {
//			weight[b] = w;
//			id[b] = index++;
//		}
//		check(a, b);
//		check(b, a);
//	}
//	map<string, int>::iterator iter = id.begin();
//	while (iter != id.end()) {
//		tree_num = 0;
//		max_weight = 0;
//		totalweight = 0;
//		if (!visited[iter->second]) {
//			dfs(iter->first);
//			if (totalweight / 2 > weightStandard && tree_num >= 3)
//				head[max_weight_node] = tree_num;
//		}
//		iter++;
//	}
//	cout << head.size() << endl;
//	for (iter = head.begin(); iter != head.end(); iter++) {
//		cout << iter->first << " " << iter->second << endl;
//	}
//	return 0;
//}