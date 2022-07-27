#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

struct node {
	string add = "-1", nextAdd = "-1";
	int value;
};
bool cmp(node n1, node n2) {
	return n1.value < n2.value;
}
vector<node>list;
map<string, node>nodeMap;
int main() {
	int N, value;
	string add, nextAdd, root;
	cin >> N >> root;
	if (root == "-1") {
		cout << "0 -1";
		return 0;
	}
	for (int i = 0; i < N; i++) {
		node nod;
		cin >> nod.add >> nod.value >> nod.nextAdd;
		nodeMap[nod.add] = nod;
	}
	node nod = nodeMap[root];
	while (nod.add != "-1") {
		list.push_back(nod);
		nod = nodeMap[nod.nextAdd];
	}
	sort(list.begin(), list.end(), cmp);
	printf("%d %s\n", list.size(), list[0].add.c_str());
	int i;
	for (i = 0; i < list.size() - 1; i++) {
		printf("%s %d %s\n", list[i].add.c_str(), list[i].value, list[i + 1].add.c_str());
	}
	printf("%s %d %s\n", list[i].add.c_str(), list[i].value, "-1");
	return 0;
}