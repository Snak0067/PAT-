//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//struct node
//{
//	string address, next;
//	int value;
//};
//vector<node>keep;
//vector<node>abandon;
//map<int, int>mapp;
//int main() {
//	string root, add, next;
//	int n, num;
//	cin >> root >> n;
//	map<string, node>nodemap;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> add >> num >> next;
//		node nod;
//		nod.address = add;
//		nod.value = num;
//		nod.next = next;
//		nodemap[add] = nod;
//	}
//	while (root != "-1") {
//		int value = abs(nodemap[root].value);
//		if (mapp.find(value) == mapp.end()) {
//			mapp[value] = 1;
//			keep.push_back(nodemap[root]);
//		}
//		else {
//			abandon.push_back(nodemap[root]);
//		}
//		root = nodemap[root].next;
//	}
//	int i;
//	for (i = 0; i < keep.size() - 1; i++) {
//		printf("%s %d %s\n", keep[i].address.c_str(), keep[i].value, keep[i + 1].address.c_str());
//	}
//	if (keep.size() > 0)printf("%s %d %s\n", keep[i].address.c_str(), keep[i].value, "-1");
//	for (i = 0; i < abandon.size() - 1 && abandon.size()>0; i++) {
//		printf("%s %d %s\n", abandon[i].address.c_str(), abandon[i].value, abandon[i + 1].address.c_str());
//	}
//	if (abandon.size() > 0)	printf("%s %d %s", abandon[i].address.c_str(), abandon[i].value, "-1");
//	return 0;
//}