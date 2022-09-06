//#include<iostream>
//#include<string>
//#include<unordered_map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//struct node {
//	int val;
//	string address, next;
//};
//unordered_map<string, node>initial;
//vector<node>nonNegative, lessk, post;
//int main() {
//	string root, temp;
//	int n, k;
//	cin >> root >> n >> k;
//	for (int i = 0; i < n; i++)
//	{
//		node nod;
//		cin >> nod.address >> nod.val >> nod.next;
//		initial[nod.address] = nod;
//	}
//	temp = root;
//	while (temp != "-1") {
//		if (initial[temp].val < 0) {
//			nonNegative.push_back(initial[temp]);
//		}
//		else if (initial[temp].val <= k) {
//			lessk.push_back(initial[temp]);
//		}
//		else {
//			post.push_back(initial[temp]);
//		}
//		temp = initial[temp].next;
//	}
//	for (node nod : lessk) {
//		nonNegative.push_back(nod);
//	}
//	for (node nod : post) {
//		nonNegative.push_back(nod);
//	}
//	for (int i = 0; i < nonNegative.size(); i++) {
//		if (i == nonNegative.size() - 1)printf("%s %d %s\n", nonNegative[i].address.c_str(), nonNegative[i].val, "-1");
//		else {
//			printf("%s %d %s\n", nonNegative[i].address.c_str(), nonNegative[i].val, nonNegative[i + 1].address.c_str());
//		}
//	}
//
//
//	return 0;
//}