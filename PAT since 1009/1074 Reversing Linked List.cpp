#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
struct node
{
	string address, next;
	int data;
};
map<string, node>nodeMap;
stack<node>s;
vector<node>v;
int main() {
	string root, add, next;
	int n, k, value;
	cin >> root >> n >> k;
	for (unsigned i = 0; i < n; i++)
	{
		cin >> add >> value >> next;
		node mynode;
		mynode.next = next;
		mynode.address = add;
		mynode.data = value;
		nodeMap[add] = mynode;
	}
	while (root != "-1") {
		s.push(nodeMap[root]);
		root = nodeMap[root].next;
		if (s.size() == k) {
			while (s.size() > 0) {
				node mynode = s.top();
				v.push_back(mynode);
				s.pop();
			}
		}
	}
	vector<node>rest;
	while (s.size() > 0) {
		node mynode = s.top();
		rest.push_back(mynode);
		s.pop();
	}
	reverse(rest.begin(), rest.end());
	for (unsigned i = 0; i < rest.size(); i++)v.push_back(rest[i]);
	unsigned i;
	for (i = 0; i < v.size() - 1; i++)
	{
		printf("%s %d %s\n", v[i].address.c_str(), v[i].data, v[i + 1].address.c_str());
	}
	printf("%s %d -1\n", v[i].address.c_str(), v[i].data);
	return 0;
}